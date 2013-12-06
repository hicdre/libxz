#include "stdafx.h"
#include "cubenode.h"


CubeNode::CubeNode(void)
{
}


CubeNode::~CubeNode(void)
{
}

void CubeNode::OnPaint( PaintStruct* ps )
{
	HBRUSH hbrush = CreateSolidBrush(RGB(200,100,0));
	ps->FillRect(RectMake(0, 0, size_.w, size_.h), hbrush);
	::DeleteObject(hbrush);
}
