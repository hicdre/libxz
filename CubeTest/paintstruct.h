#pragma once
#include "geometry.h"
#include <unordered_map>

class PaintStruct
{
public:
	PaintStruct(HWND hwnd);
	~PaintStruct();

	void Apply(const geometry::Transform& t);

	void FillRect(const geometry::Rect& rect, HBRUSH hbrush);
private:
	HWND wnd_;
	HDC dc_;
	PAINTSTRUCT ps_;

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