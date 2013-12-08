#include "stdafx.h"
#include "paintstruct.h"

class ScopedPen
{
public:
	ScopedPen(HDC dc, render::Brush* brush, float width, render::StrokeStyle* style)
		: dc_(dc)
		, valid_(false)
	{
		if (brush && style)
		{
			valid_ = true;

			UINT nStyle = PS_GEOMETRIC | PS_INSIDEFRAME
				| render::StrokeLineStyleToUint(style->line_style)
				| render::StrokeCapStyleToUint(style->cap_style)
				| render::StrokeJoinStyleToUint(style->join_style);
			LOGBRUSH logbrush ;
			brush->ToLOGBRUSH(&logbrush);
			pen_ = ::ExtCreatePen(nStyle, (int)width, &logbrush, 0, NULL);
			prev_ = ::SelectObject(dc_, pen_);
		}
	}
	~ScopedPen()
	{
		if (valid_)
		{
			::SelectObject(dc_, prev_);
			::DeleteObject(pen_);
		}
	}
private:
	HDC dc_;
	HPEN pen_;
	HGLOBAL prev_;
	bool valid_;
};

PaintStruct::PaintStruct( HWND hwnd )
	: wnd_(hwnd)
	, font_(NULL)
	, brush_(NULL)
{
	dc_ = BeginPaint(hwnd, &ps_);
	SetGraphicsMode(dc_, GM_ADVANCED);
	SetMapMode(dc_, MM_TEXT);
	SetBkMode(dc_, TRANSPARENT);
}

PaintStruct::~PaintStruct()
{
	EndPaint(wnd_, &ps_);
}

void PaintStruct::Apply( const geometry::Transform& t )
{
	tm_ = tm_.Concat(t);

	ModifyWorldTransform(dc_, &t.ToXFORM(), MWT_LEFTMULTIPLY);
	//SetWorldTransform(dc_, &tm_.ToXFORM());
}

void PaintStruct::FillRect( const geometry::Rect& rect, HBRUSH hbrush )
{
	RECT rc = {(LONG)rect.getMinX(), (LONG)rect.getMinX(), (LONG)rect.getMaxX(), (LONG)rect.getMaxY()};
	::FillRect(dc_, &rc, hbrush);
}

void PaintStruct::DrawLine( const geometry::Point& from, const geometry::Point& to )
{
	ScopedPen scoped_pen(dc_, brush_, stroke_width_, stroke_style_.get());
	::MoveToEx(dc_, from.x, from.y, NULL);
	::LineTo(dc_, to.x, to.y );
}

void PaintStruct::DrawRect( const geometry::Rect& rect0 )
{
	ScopedPen scoped_pen(dc_, brush_, stroke_width_, stroke_style_.get());
	float delta = stroke_width_ / 2.0;
	geometry::Rect rect(rect0.origin.x + delta, rect0.origin.y + delta, 
		rect0.size.w - stroke_width_, rect0.size.h - stroke_width_);
	::MoveToEx(dc_, rect.getMinX(), rect.getMinY(), NULL);
	::LineTo(dc_, rect.getMinX(), rect.getMaxY());
	::LineTo(dc_, rect.getMaxX(), rect.getMaxY() );
	::LineTo(dc_, rect.getMaxX(), rect.getMinY() );
	::LineTo(dc_, rect.getMinX(), rect.getMinY() );
}

void PaintStruct::DrawText( const std::wstring& text, const geometry::Rect& rect, UINT format )
{
	RECT rc;
	ToRECT(rect, &rc);
	::DrawText(dc_, text.c_str(), text.size(), &rc, format);
}

void PaintStruct::MeasureText( const std::wstring& text, geometry::Rect& rect, UINT format )
{
	format |= DT_CALCRECT;
	RECT rc;
	ToRECT(rect, &rc);
	rect.setRect(rc.left, rc.top, rc.right-rc.left, rc.bottom-rc.top);
}

void PaintStruct::SetFont( render::Font* font )
{
	font_ = font;
	::SelectObject(dc_,font_->GetHFONT());
}

void PaintStruct::SetTextColor( COLORREF color )
{
	text_color_ = color;
	::SetTextColor(dc_, text_color_);
}

void PaintStruct::SetBrush( render::Brush* brush )
{
	brush_ = brush;
	::SelectObject(dc_, brush->GetBRUSH());
}

void PaintStruct::SetStrokeWidth( float width )
{
	stroke_width_ = width;
}

void PaintStruct::SetStrokeStyle( render::StrokeStyle* style )
{
	stroke_style_.reset(style);
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
