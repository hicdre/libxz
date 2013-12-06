// ipc_test_server.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string.h>

#include "base/basictypes.h"
#include "ipc/ipc_message.h"
#include "ipc/ipc_message_utils.h"
#include "ipc/ipc_channel.h"
#include "ipc/ipc_listener.h"
#include "base/logging.h"
#include "base/threading/platform_thread.h"
#include "base/message_loop.h"
#include "base/at_exit.h"

const char kFuzzerChannel[] = "channelName";

#define IPC_MESSAGE_IMPL
#include "ipc/ipc_message_macros.h"

#include "../ipctestmessage.h"

/* Listener */
class SimpleListener : public IPC::Listener {
public:
	SimpleListener() : other_(NULL) {}

	void Init(IPC::Sender* s) 
	{
		other_ = s;
	}

	virtual bool OnMessageReceived(const IPC::Message& msg) {
		std::cout << "Listener::OnChannelConnected(): Message Received" << std::endl;
		IPC_BEGIN_MESSAGE_MAP(SimpleListener, msg)
			IPC_MESSAGE_HANDLER(MsgClassISend, classIS)
			IPC_MESSAGE_HANDLER(MsgClassSI, classSI)
		IPC_END_MESSAGE_MAP()
		return true;
	}

	virtual void OnChannelConnected(int32 peer_pid) 
	{
		std::cout << "Listener::OnChannelConnected(): Channel Connected" << std::endl;
	}

	virtual void OnChannelError() 
	{
		std::cout << "Listener::OnChannelConnected(): Channel Error" << std::endl;
		exit(0);
	}

	void classIS(int myint, std::wstring mystring) {
		std::cout << "classIS(): Received==> Int:" << myint << " String:" << mystring << std::endl;
	}

	void classSI(std::wstring mystring,int myint) {
		std::cout << "classSI(): Received==> String:" << mystring << " Int:" << myint << std::endl;
	}

protected:
	IPC::Sender* other_;
};

int _tmain(int argc, _TCHAR* argv[])
{
	base::AtExitManager exit_manager;

	HKEY key;
	RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\Classes\\CLSID", 0, KEY_READ, &key);

	DWORD count = 0;
	LONG result = ::RegQueryInfoKey(key, NULL, 0, NULL, &count, NULL, NULL,
		NULL, NULL, NULL, NULL, NULL);

	SimpleListener serverListener;
	base::MessageLoopForIO main_message_loop;

	std::cout << "Server: Creating IPC channel " << kFuzzerChannel << std::endl;
	IPC::Channel serverChannel(kFuzzerChannel, IPC::Channel::MODE_SERVER, &serverListener);

	std::cout << "Server: Connecting to IPC channel " << kFuzzerChannel << std::endl;
	if(! serverChannel.Connect()){
		std::cout << "Server: Error in connecting to the channel " << kFuzzerChannel << std::endl;
		return 1;
	}
	std::cout << "Server: Connected to IPC channel " << kFuzzerChannel << std::endl;

	std::cout << "Initializing listener" << std::endl;
	serverListener.Init(&serverChannel);

	std::cout << "Starting the MessageLoop" << std::endl;
	base::MessageLoop::current()->Run();

	return 0;
}

