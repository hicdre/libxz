#pragma once
#include "paintnode.h"

class WindowNode : public CanvasNode
{
public:
	WindowNode(void);
	virtual ~WindowNode(void) override;

	HWND GetHwnd() const;
	void AttachHwnd(HWND hwnd);


	void ShowWindow(int nCmdShow);

	virtual void ApplyProperties();
public:
	virtual void OnPaint(PaintStruct* ps) override;

private:
	HWND wnd_;
};

