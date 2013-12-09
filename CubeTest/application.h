#pragma once
#include "base/basictypes.h"
#include "base/memory/scoped_ptr.h"
#include "base/at_exit.h"
#include <string>

#include "rootnode.h"

namespace base {
	class MessageLoopForUI;
}

namespace render{
	class RenderEngine;
	class FontFactory;
}

class NodeClassFactory;
class WindowNode;
class Application
{
public:
	Application(void);

	static Application* GetInstance();
	void Init(base::MessageLoopForUI* loop);
	void Run();

	static HWND CreateHWND();
	void LoadFromFile(const std::wstring& file);

private:
	static LRESULT CALLBACK WndProc(HWND window,
		UINT message,
		WPARAM w_param,
		LPARAM l_param);

	LRESULT HandleMessage(HWND hwnd, UINT message, WPARAM w_param, LPARAM l_param);
private:
	HWND root_wnd_;

	base::MessageLoopForUI* main_message_loop_;

	scoped_ptr<RootNode> root_node_;

	base::AtExitManager sigletons_;
	DISALLOW_COPY_AND_ASSIGN(Application);
};

