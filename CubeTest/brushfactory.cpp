#include "stdafx.h"
#include "brushfactory.h"

namespace render
{
	

	Brush::Brush( HBRUSH brush, COLORREF color, Style style )
		: brush_(brush), color_(color), style_(style)
	{

	}

	Brush::~Brush()
	{
		::DeleteObject(brush_);
	}

	void Brush::ToLOGBRUSH( LOGBRUSH* pbrush )
	{
		if (style_ & Brush::StyleSolid)
			pbrush->lbStyle = BS_SOLID;
		else if (style_ & Brush::StyleHatched)
			pbrush->lbStyle = BS_HATCHED;

		pbrush->lbColor = color_;
	}


	BrushFactory::BrushFactory()
	{

	}

	BrushFactory::~BrushFactory()
	{
		for (auto iter : brushes_)
		{
			delete iter;
		}
	}

	Brush* BrushFactory::GetBrush( COLORREF color, Brush::Style style )
	{
		Brush* brush = FindBrush(color, style);
		if (brush)
			return brush;
		return CreateBrush(color, style);
	}

	Brush* BrushFactory::FindBrush( COLORREF color, Brush::Style style )
	{
		for (Brush* brush : brushes_)
		{
			if (brush->GetColor() == color
				&& brush->GetStyle() == style)
			{
				return brush;
			}
		}
		return NULL;
	}

	Brush* BrushFactory::CreateBrush( COLORREF color, Brush::Style style )
	{
		LOGBRUSH logbrush = {0};
		if (style & Brush::StyleSolid)
			logbrush.lbStyle = BS_SOLID;
		else if (style & Brush::StyleHatched)
			logbrush.lbStyle = BS_HATCHED;

		logbrush.lbColor = color;
		HBRUSH hbrush = ::CreateBrushIndirect(&logbrush);
		Brush* brush = new Brush(hbrush, color, style);
		brushes_.push_back(brush);
		return brush;
	}

}