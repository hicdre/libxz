#include "stdafx.h"
#include "windownode.h"


WindowNode::WindowNode(void)
	: wnd_(NULL)
{
}


WindowNode::~WindowNode(void)
{
}

LRESULT WindowNode::HandleMessage( UINT message, WPARAM w_param, LPARAM l_param )
{
	return 0;
}

HWND WindowNode::GetHwnd() const
{
	return wnd_;
}

void WindowNode::AttachHwnd( HWND hwnd )
{
	wnd_ = hwnd;
}

void WindowNode::ShowWindow( int nCmdShow )
{
	::ShowWindow(wnd_, nCmdShow);
}
