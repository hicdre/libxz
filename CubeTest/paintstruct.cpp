#include "stdafx.h"
#include "paintstruct.h"

PaintStruct::PaintStruct( HWND hwnd )
	: wnd_(hwnd)
{
	dc_ = BeginPaint(hwnd, &ps_);
	SetGraphicsMode(dc_, GM_ADVANCED);
	SetMapMode(dc_, MM_TEXT);
}

PaintStruct::~PaintStruct()
{
	EndPaint(wnd_, &ps_);
}

void PaintStruct::Apply( const geometry::Transform& t )
{
	tm_ = tm_.Concat(t);

	ModifyWorldTransform(dc_, &tm_.ToXFORM(), MWT_LEFTMULTIPLY);
	//SetWorldTransform(dc_, &tm_.ToXFORM());
}

void PaintStruct::FillRect( const geometry::Rect& rect, HBRUSH hbrush )
{
	RECT rc = {(LONG)rect.getMinX(), (LONG)rect.getMinX(), (LONG)rect.getMaxX(), (LONG)rect.getMaxY()};
	::FillRect(dc_, &rc, hbrush);
}

ScopedPaintTransform::ScopedPaintTransform( PaintStruct* ps, const geometry::Transform& m )
	: ps_(ps), m_(m.Invert())
{
	ps_->Apply(m);
}

ScopedPaintTransform::~ScopedPaintTransform()
{
	ps_->Apply(m_);
}
