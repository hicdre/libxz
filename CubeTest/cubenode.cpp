#include "stdafx.h"
#include "cubenode.h"
#include "base\string_number_conversions.h"
#include "base\utf_string_conversions.h"


CubeNode::CubeNode(void)
{
}


CubeNode::~CubeNode(void)
{
}

void CubeNode::OnPaint( PaintStruct* ps )
{
	HBRUSH hbrush = CreateSolidBrush(color_);
	ps->FillRect(RectMake(0, 0, size_.w, size_.h), hbrush);
	::DeleteObject(hbrush);
}

