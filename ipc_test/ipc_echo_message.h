#pragma once

#include "ipc/ipc_message_macros.h"

#define IPC_MESSAGE_START EchoMsgStart

IPC_MESSAGE_CONTROL2(HostMsg_Hello, std::wstring, std::wstring)

