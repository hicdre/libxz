#include "stdafx.h"
#include "windownode.h"



WindowNode::WindowNode(void)
	: wnd_(NULL)
{
}


WindowNode::~WindowNode(void)
{
}
/*
LRESULT WindowNode::HandleMessage( UINT message, WPARAM w_param, LPARAM l_param )
{
	return 0;
}*/

HWND WindowNode::GetHwnd() const
{
	return wnd_;
}

void WindowNode::AttachHwnd( HWND hwnd )
{
	wnd_ = hwnd;

	RECT rect;
	GetClientRect(wnd_, &rect);
	pos_.x = (float)rect.left;
	pos_.y = (float)rect.top;
	size_.w = (float)(rect.right - rect.left);
	size_.h = (float)(rect.bottom - rect.top);
}

void WindowNode::ShowWindow( int nCmdShow )
{
	::ShowWindow(wnd_, nCmdShow);
	::UpdateWindow(wnd_);
}

void WindowNode::OnPaint( PaintStruct* ps )
{
	//ps->FillRect(RectMake(0, 0, 200, 50));
	//ps->FillRect(RectMake(100, 100, 200, 50));
}
