#pragma once
#include "base\memory\scoped_ptr.h"
#include "geometry.h"
#include <unordered_map>
#include "fontFactory.h"
#include "brushfactory.h"
#include "StrokeStyle.h"


class PaintStruct
{
public:
	PaintStruct(HWND hwnd);
	~PaintStruct();

	void Apply(const geometry::Transform& t);

	void SetFont(render::Font* font);

	void SetTextColor(COLORREF color);

	void SetBrush(render::Brush* brush);

	void SetStrokeWidth(float width);
	void SetStrokeStyle(render::StrokeStyle *style);

	void FillRect(const geometry::Rect& rect, HBRUSH hbrush);

	void DrawLine(const geometry::Point& from, const geometry::Point& to);
	void DrawRect(const geometry::Rect& rect);

	void DrawText(const std::wstring& text, const geometry::Rect& rect, UINT format);
	void MeasureText(const std::wstring& text, geometry::Rect& rect, UINT format);
private:
	HWND wnd_;
	HDC dc_;
	PAINTSTRUCT ps_;

	render::Font* font_;
	render::Brush* brush_;
	COLORREF text_color_;

	float stroke_width_;
	scoped_ptr<render::StrokeStyle> stroke_style_;
	//current
	geometry::Transform tm_;
};

class ScopedPaintTransform
{
public:
	ScopedPaintTransform(PaintStruct* ps, const geometry::Transform& m);
	~ScopedPaintTransform();
private:
	PaintStruct* ps_;
	geometry::Transform m_;
};