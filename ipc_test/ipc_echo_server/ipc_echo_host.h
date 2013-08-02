#pragma once

#include "base/memory/scoped_ptr.h"
#include "ipc/ipc_sender.h"
#include "ipc/ipc_listener.h"
#include "ipc/ipc_channel_proxy.h"

class EchoHost
	: public IPC::Sender
	, public IPC::Listener
{
public:
	EchoHost();

	bool Init();

protected:
	scoped_ptr<IPC::ChannelProxy> channel_;
};