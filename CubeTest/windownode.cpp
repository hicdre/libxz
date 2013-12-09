#include "stdafx.h"
#include "windownode.h"
#include "application.h"
#include "rootnode.h"
#include "renderengine.h"



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
	render::RenderEngine* engine = render::RenderEngine::GetInstance();
	render::Brush* brush = engine->GetBrushFactory()->GetBrush(RGB(0,255,0), render::Brush::StyleSolid);
	ps->SetBrush(brush);
	ps->SetStrokeWidth(10.0);
	ps->SetStrokeStyle(new render::StrokeStyle());
	ps->DrawRect(RectMake(20, 20, 200, 80));
	//ps->FillRect(RectMake(100, 100, 200, 50));
	


	render::Font* font = render::RenderEngine::GetInstance()->GetFontFactory()->GetFont(L"Consolas", 16, render::Font::StyleRegular);
	ps->SetFont(font);
	ps->SetTextColor(RGB(200,200,0));
	ps->DrawText(L"Hello World!", RectMake(100, 250, 200, 50), DT_LEFT);
}

void WindowNode::ReadWindowProperty()
{
	if (wnd_ == NULL)
	{
		wnd_ = Application::CreateHWND();

		GetRoot()->AddWindow(this);
	}
}
