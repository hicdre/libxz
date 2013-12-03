#pragma once
#include "node.h"
#include "geometry.h"

class WindowNode : public Node
{
public:
	WindowNode(void);
	virtual ~WindowNode(void) override;

	HWND GetHwnd() const;
	void AttachHwnd(HWND hwnd);


	void ShowWindow(int nCmdShow);

	LRESULT HandleMessage(UINT message, WPARAM w_param, LPARAM l_param);
private:
	HWND wnd_;

	geometry::Rect rect_;
};

