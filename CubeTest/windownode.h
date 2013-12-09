#pragma once
#include "paintnode.h"

class WindowNode : public PaintNode
{
public:
	WindowNode(void);
	virtual ~WindowNode(void) override;

	HWND GetHwnd() const;
	void AttachHwnd(HWND hwnd);


	void ShowWindow(int nCmdShow);

	void ReadWindowProperty();
public:
	virtual void OnPaint(PaintStruct* ps) override;

private:
	HWND wnd_;
};

