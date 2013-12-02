#include "stdafx.h"
#include "application.h"
#include "base/memory/singleton.h"
#include "base/message_loop.h"
#include "base/win/wrapped_window_proc.h"
#include "rootnode.h"

const wchar_t* kWindowClass = L"CubeTestWnd";

Application::Application(void)
	: root_node_(new RootNode)
{
}


void Application::Run()
{
	base::MessageLoop::current()->Run();
}

Application* Application::GetInstance()
{
	return Singleton<Application>::get();
}

void Application::Init(base::MessageLoopForUI* loop)
{
	main_message_loop_ = loop;

	WNDCLASSEX window_class;
	base::win::InitializeWindowClass(
		kWindowClass,
		&base::win::WrappedWindowProc<Application::WndProc>,
		CS_HREDRAW | CS_VREDRAW | CS_DROPSHADOW,
		0,
		0,
		LoadCursor(NULL, IDC_ARROW),
		reinterpret_cast<HBRUSH>(GetStockObject(BLACK_BRUSH)),
		NULL,
		NULL,//class_info.icon,
		NULL,//class_info.icon,
		&window_class);

	ATOM atom = RegisterClassEx(&window_class);

	root_wnd_ = (CreateWindowEx(WS_EX_WINDOWEDGE, kWindowClass, NULL,
		WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_OVERLAPPED,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, NULL, (LPVOID)this));

	DWORD dwStyle = ::GetWindowLong(root_wnd_, GWL_STYLE);
	::SetWindowLong(root_wnd_, GWL_STYLE, (dwStyle & ~WS_CAPTION));


	ShowWindow(root_wnd_, SW_SHOW);
}

LRESULT CALLBACK Application::WndProc( HWND window, UINT message, WPARAM w_param, LPARAM l_param )
{
	if (message == WM_NCCREATE) {
		CREATESTRUCT* cs = reinterpret_cast<CREATESTRUCT*>(l_param);
		Application* app = reinterpret_cast<Application*>(cs->lpCreateParams);
		SetWindowLongPtr(window, GWLP_USERDATA,
			reinterpret_cast<LONG_PTR>(app));
		return TRUE;
	}

	Application *app = reinterpret_cast<Application*>(GetWindowLongPtr(window, GWLP_USERDATA));

	if (app){
		return app->HandleMessage(message, w_param, l_param);
	}

	return DefWindowProc(window, message, w_param, l_param);
}

LRESULT Application::HandleMessage( UINT message, WPARAM w_param, LPARAM l_param )
{
	switch (message)
	{
	case WM_MOUSEMOVE:
		{
		}
		break;
	case WM_LBUTTONUP:
		{
		}
		break;
	case WM_LBUTTONDOWN:
		{
		}
		break;
	case WM_CLOSE:
		DestroyWindow(root_wnd_);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		break;
	}

	root_node_->HandleMessage(message, w_param, l_param);

	return DefWindowProc(root_wnd_, message, w_param, l_param);
}
