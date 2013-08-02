#pragma once

#include <string>

#include "base/basictypes.h"
#include "base/callback.h"
#include "base/location.h"
#include "base/message_loop/message_loop_proxy.h"
#include "base/task_runner_util.h"
#include "base/time.h"
#include "base/threading/thread.h"

namespace base {
	class MessageLoop;
	class SequencedWorkerPool;
}

class ServerThread
	: public base::Thread
{
public:
	enum ID {
		MAIN,
		IO,
	};

	explicit ServerThread(ServerThread::ID identifier);

	static bool PostTask(ID identifier,
		const tracked_objects::Location& from_here,
		const base::Closure& task);
	static bool PostDelayedTask(ID identifier,
		const tracked_objects::Location& from_here,
		const base::Closure& task,
		base::TimeDelta delay);
	static bool PostNonNestableTask(ID identifier,
		const tracked_objects::Location& from_here,
		const base::Closure& task);
	static bool PostNonNestableDelayedTask(
		ID identifier,
		const tracked_objects::Location& from_here,
		const base::Closure& task,
		base::TimeDelta delay);

	static bool PostTaskAndReply(
		ID identifier,
		const tracked_objects::Location& from_here,
		const base::Closure& task,
		const base::Closure& reply);

	template <typename ReturnType, typename ReplyArgType>
	static bool PostTaskAndReplyWithResult(
		ID identifier,
		const tracked_objects::Location& from_here,
		const base::Callback<ReturnType(void)>& task,
		const base::Callback<void(ReplyArgType)>& reply) {
			scoped_refptr<base::MessageLoopProxy> message_loop_proxy =
				GetMessageLoopProxyForThread(identifier);
			return base::PostTaskAndReplyWithResult(
				message_loop_proxy.get(), from_here, task, reply);
	}

	template <class T>
	static bool DeleteSoon(ID identifier,
		const tracked_objects::Location& from_here,
		const T* object) {
			return GetMessageLoopProxyForThread(identifier)->DeleteSoon(
				from_here, object);
	}

	template <class T>
	static bool ReleaseSoon(ID identifier,
		const tracked_objects::Location& from_here,
		const T* object) {
			return GetMessageLoopProxyForThread(identifier)->ReleaseSoon(
				from_here, object);
	}

	// Simplified wrappers for posting to the blocking thread pool. Use this
	// for doing things like blocking I/O.
	//
	// The first variant will run the task in the pool with no sequencing
	// semantics, so may get run in parallel with other posted tasks. The second
	// variant will all post a task with no sequencing semantics, and will post a
	// reply task to the origin TaskRunner upon completion.  The third variant
	// provides sequencing between tasks with the same sequence token name.
	//
	// These tasks are guaranteed to run before shutdown.
	//
	// If you need to provide different shutdown semantics (like you have
	// something slow and noncritical that doesn't need to block shutdown),
	// or you want to manually provide a sequence token (which saves a map
	// lookup and is guaranteed unique without you having to come up with a
	// unique string), you can access the sequenced worker pool directly via
	// GetBlockingPool().
	static bool PostBlockingPoolTask(const tracked_objects::Location& from_here,
		const base::Closure& task);
	static bool PostBlockingPoolTaskAndReply(
		const tracked_objects::Location& from_here,
		const base::Closure& task,
		const base::Closure& reply);
	static bool PostBlockingPoolSequencedTask(
		const std::string& sequence_token_name,
		const tracked_objects::Location& from_here,
		const base::Closure& task);

	// Returns the thread pool used for blocking file I/O. Use this object to
	// perform random blocking operations such as file writes or querying the
	// Windows registry.
	static base::SequencedWorkerPool* GetBlockingPool();

	// Callable on any thread.  Returns whether the given ID corresponds to a well
	// known thread.
	static bool IsWellKnownThread(ID identifier);

	// Callable on any thread.  Returns whether you're currently on a particular
	// thread.
	static bool CurrentlyOn(ID identifier);

	// Callable on any thread.  Returns whether the threads message loop is valid.
	// If this returns false it means the thread is in the process of shutting
	// down.
	static bool IsMessageLoopValid(ID identifier);

	// If the current message loop is one of the known threads, returns true and
	// sets identifier to its ID.  Otherwise returns false.
	static bool GetCurrentThreadIdentifier(ID* identifier);

	// Callers can hold on to a refcounted MessageLoopProxy beyond the lifetime
	// of the thread.
	static scoped_refptr<base::MessageLoopProxy> GetMessageLoopProxyForThread(
		ID identifier);

	// Returns a pointer to the thread's message loop, which will become
	// invalid during shutdown, so you probably shouldn't hold onto it.
	//
	// This must not be called before the thread is started, or after
	// the thread is stopped, or it will DCHECK.
	//
	// Ownership remains with the BrowserThread implementation, so you
	// must not delete the pointer.
	static base::MessageLoop* UnsafeGetMessageLoopForThread(ID identifier);

	// Sets the delegate for the specified BrowserThread.
	//
	// Only one delegate may be registered at a time.  Delegates may be
	// unregistered by providing a NULL pointer.
	//
	// If the caller unregisters a delegate before CleanUp has been
	// called, it must perform its own locking to ensure the delegate is
	// not deleted while unregistering.
	//static void SetDelegate(ID identifier, BrowserThreadDelegate* delegate);

	// Use these templates in conjuction with RefCountedThreadSafe when you want
	// to ensure that an object is deleted on a specific thread.  This is needed
	// when an object can hop between threads (i.e. IO -> FILE -> IO), and thread
	// switching delays can mean that the final IO tasks executes before the FILE
	// task's stack unwinds.  This would lead to the object destructing on the
	// FILE thread, which often is not what you want (i.e. to unregister from
	// NotificationService, to notify other objects on the creating thread etc).
	template<ID thread>
	struct DeleteOnThread {
		template<typename T>
		static void Destruct(const T* x) {
			if (CurrentlyOn(thread)) {
				delete x;
			} else {
				if (!DeleteSoon(thread, FROM_HERE, x)) {
#if defined(UNIT_TEST)
					// Only logged under unit testing because leaks at shutdown
					// are acceptable under normal circumstances.
					LOG(ERROR) << "DeleteSoon failed on thread " << thread;
#endif  // UNIT_TEST
				}
			}
		}
	};

	// Sample usage:
	// class Foo
	//     : public base::RefCountedThreadSafe<
	//           Foo, BrowserThread::DeleteOnIOThread> {
	//
	// ...
	//  private:
	//   friend struct BrowserThread::DeleteOnThread<BrowserThread::IO>;
	//   friend class base::DeleteHelper<Foo>;
	//
	//   ~Foo();
	struct DeleteOnMainThread : public DeleteOnThread<MAIN> { };
	struct DeleteOnIOThread : public DeleteOnThread<IO> { };
	//struct DeleteOnFileThread : public DeleteOnThread<FILE> { };
	//struct DeleteOnDBThread : public DeleteOnThread<DB> { };

private:
	//friend class BrowserThreadImpl;
	DISALLOW_COPY_AND_ASSIGN(ServerThread);
};