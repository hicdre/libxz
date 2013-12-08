#pragma once
#include <vector>

namespace render
{
	class Brush
	{
	public:
		enum Style
		{
			StyleHatched,
			StyleSolid,
		};
		Brush(HBRUSH brush, COLORREF color, Style style);
		~Brush();

		HBRUSH GetBRUSH() const { return brush_; }
		COLORREF GetColor() const { return color_; }
		Style GetStyle() const { return style_; }

		void ToLOGBRUSH(LOGBRUSH* pbrush);
	private:
		Style style_;
		COLORREF  color_;
		HBRUSH brush_;
	};

	class BrushFactory
	{
	public:
		BrushFactory();
		~BrushFactory();

		Brush* GetBrush(COLORREF color, Brush::Style style);
	private:
		Brush* FindBrush(COLORREF color, Brush::Style style);
		Brush* CreateBrush(COLORREF color, Brush::Style style);
		std::vector<Brush*> brushes_;
	};

}