// ipc_test_client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

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


#include <iostream>

#include "base/base64.h"

class SimpleListener : public IPC::Listener {
public:
	SimpleListener() : other_(NULL) {}

	void Init(IPC::Sender* s) 
	{
		other_ = s;
	}

	virtual bool OnMessageReceived(const IPC::Message& msg) {
		std::cout << "Listener::OnMessageReceived(): Message Received" << std::endl;
		return true;
	}

	virtual void OnChannelConnected(int32 peer_pid) 
	{
		std::cout << "Listener::OnChannelConnected(): Channel Connected" << std::endl;

		IPC::Message* msg = NULL;
		int value = 43;
		msg = new MsgClassISend(2,value, L"expect 43");
		if(! other_->Send(msg)){
			std::cout << "Error in sending MsgClassIS" << std::endl;
			return;
		}
		std::cout << "Sent MsgClassIS" << std::endl;

		msg = new MsgClassSI(2, L"expect 44", ++value);
		if(! other_->Send(msg)){
			std::cout << "Error in sending MsgClassSI" << std::endl;
			return;
		}
		std::cout << "Sent MsgClassSI" << std::endl;
	}

	virtual void OnChannelError() 
	{
		std::cout << "Listener::OnChannelError(): Channel Error" << std::endl;
		exit(0);
	}
protected:
	IPC::Sender* other_;
};

int _tmain(int argc, _TCHAR* argv[])
{
	base::AtExitManager exit_manager;

	std::string working = //"MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCzLVQIg0pdp8zceO+9qYGmbkJL/Wtq43yiZpCi6qW8Gt1+6bNTXvC6DbHt5wJeSoyeM+bB/pwaEN+3IHuuo6Z8PQf9fEKD/zsSF08+H2GgTs42lpO+MGub/87a/E6ubmH/SNH2aGhnS4I2KTRmQkvE5ZRnfSscvjdQeCjTHVkQFQIDAQAB";
	"MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCsTeRKuxevWiein7geQszhb8mHRpLByZbXX8tR0m1GPBkN8SN9xgo7NijAYAqa3H5rGuDmNZm2k7UzdlVfC5+gO6uf/rVOPx7kHJNQBQaBuWUEd4KHLWa3jOy+mllD72TwXNdtJJdX6TWf115SGHlLzZRg7S47dke6KTZI6O8gcQIDAQAB";
	std::string input, output;
	if (base::Base64Decode(working, &input))
	{
		int i;
		i = 1;
	}

	SimpleListener clientListener;
	base::MessageLoopForIO main_message_loop;

	std::cout << "Client: Creating IPC channel " << kFuzzerChannel << std::endl;
	IPC::Channel clientChannel(kFuzzerChannel, IPC::Channel::MODE_CLIENT, &clientListener);

	//std::cout << "Waiting for IPC Server to come up " << std::endl;
	//base::PlatformThread::Sleep(base::TimeDelta::FromSeconds(5));
	std::cout << "Client: Connecting to IPC channel " << kFuzzerChannel << std::endl;
	if(! clientChannel.Connect()){
		std::cout << "Error in connecting to the channel " << kFuzzerChannel << std::endl;
		return 1;
	}
	std::cout << "Client: Connected to IPC channel " << kFuzzerChannel << std::endl;

	std::cout << "Initializing listener" << std::endl;
	clientListener.Init(&clientChannel);

	std::cout << "Starting the MessageLoop" << std::endl;
	base::MessageLoop::current()->Run();

	return 0;
}

