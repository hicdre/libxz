#include "stdafx.h"
#include "ipc_echo_host.h"

EchoHost::EchoHost()
{

}

bool EchoHost::Init()
{
	if (channel_)
		return true;

	// Find the renderer before creating the channel so if this fails early we
	// return without creating the channel.
	//base::FilePath renderer_path = ChildProcessHost::GetChildPath(flags);
	//if (renderer_path.empty())
	//	return false;

	// Setup the IPC channel.
	const std::string channel_id =
		IPC::Channel::GenerateVerifiedChannelID(std::string());
	channel_.reset(
		new IPC::ChannelProxy(channel_id,
		IPC::Channel::MODE_SERVER,
		this,
		BrowserThread::GetMessageLoopProxyForThread(
		BrowserThread::IO).get()));
}
