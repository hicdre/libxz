#pragma once

namespace geometry
{
	class Point
	{
	public:
		float x;
		float y;

	public:
		Point();
		Point(float x, float y);
		Point(const Point& other);
		Point& operator= (const Point& other);
		void setPoint(float x, float y);
		bool equals(const Point& target) const;
	};

	class Size
	{
	public:
		float w;
		float h;

	public:
		Size();
		Size(float width, float height);
		Size(const Size& other);
		Size& operator= (const Size& other);
		void setSize(float width, float height);
		bool equals(const Size& target) const;
	};

	class Rect
	{
	public:
		Point origin;
		Size  size;

	public:
		Rect();    
		Rect(float x, float y, float width, float height);
		Rect(const Rect& other);
		Rect& operator= (const Rect& other); 
		void setRect(float x, float y, float width, float height);
		float getMinX() const; /// return the leftmost x-value of current rect
		float getMidX() const; /// return the midpoint x-value of current rect
		float getMaxX() const; /// return the rightmost x-value of current rect
		float getMinY() const; /// return the bottommost y-value of current rect
		float getMidY() const; /// return the midpoint y-value of current rect
		float getMaxY() const; /// return the topmost y-value of current rect
		bool equals(const Rect& rect) const;   
		bool containsPoint(const Point& point) const;
		bool intersectsRect(const Rect& rect) const;
	};

#define PointMake(x, y) Point((float)(x), (float)(y))
#define SizeMake(width, height) Size((float)(width), (float)(height))
#define RectMake(x, y, width, height) Rect((float)(x), (float)(y), (float)(width), (float)(height))



	const Point kPointZero = PointMake(0,0);

	const Size kSizeZero = SizeMake(0,0);

	const Rect kRectZero = RectMake(0,0,0,0);
}