#include "stdafx.h"
#include "geometry.h"

namespace geometry
{
	Point::Point(void)
	{
		setPoint(0.0f, 0.0f);
	}

	Point::Point(float x, float y)
	{
		setPoint(x, y);
	}

	Point::Point(const Point& other)
	{
		setPoint(other.x, other.y);
	}

	Point& Point::operator= (const Point& other)
	{
		setPoint(other.x, other.y);
		return *this;
	}

	void Point::setPoint(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	bool Point::equals(const Point& target) const
	{
		return ((x == target.x) && (y == target.y));
	}

	// implementation of CXSize

	Size::Size(void)
	{
		setSize(0.0f, 0.0f);
	}

	Size::Size(float width, float height)
	{
		setSize(width, height);
	}

	Size::Size(const Size& other)
	{
		setSize(other.w, other.h);
	}

	Size& Size::operator= (const Size& other)
	{
		setSize(other.w, other.h);
		return *this;
	}

	void Size::setSize(float width, float height)
	{
		this->w = width;
		this->h = height;
	}

	bool Size::equals(const Size& target) const
	{
		return ((w == target.w) && (h == target.h));
	}

	// implementation of CXRect

	Rect::Rect(void)
	{
		setRect(0.0f, 0.0f, 0.0f, 0.0f);
	}

	Rect::Rect(float x, float y, float width, float height)
	{
		setRect(x, y, width, height);
	}

	Rect::Rect(const Rect& other)
	{
		setRect(other.origin.x, other.origin.y, other.size.w, other.size.h);
	}

	Rect& Rect::operator= (const Rect& other)
	{
		setRect(other.origin.x, other.origin.y, other.size.w, other.size.h);
		return *this;
	}

	void Rect::setRect(float x, float y, float width, float height)
	{
		// CGRect can support width<0 or height<0
		// CCAssert(width >= 0.0f && height >= 0.0f, "width and height of Rect must not less than 0.");

		origin.x = x;
		origin.y = y;

		size.w = width;
		size.h = height;
	}

	bool Rect::equals(const Rect& rect) const
	{
		return (origin.equals(rect.origin) && 
			size.equals(rect.size));
	}

	float Rect::getMaxX() const
	{
		return (float)(origin.x + size.w);
	}

	float Rect::getMidX() const
	{
		return (float)(origin.x + size.w / 2.0);
	}

	float Rect::getMinX() const
	{
		return origin.x;
	}

	float Rect::getMaxY() const
	{
		return origin.y + size.h;
	}

	float Rect::getMidY() const
	{
		return (float)(origin.y + size.h / 2.0);
	}

	float Rect::getMinY() const
	{
		return origin.y;
	}

	bool Rect::containsPoint(const Point& point) const
	{
		bool bRet = false;

		if (point.x >= getMinX() && point.x <= getMaxX()
			&& point.y >= getMinY() && point.y <= getMaxY())
		{
			bRet = true;
		}

		return bRet;
	}

	bool Rect::intersectsRect(const Rect& rect) const
	{
		return !(     getMaxX() < rect.getMinX() ||
			rect.getMaxX() <      getMinX() ||
			getMaxY() < rect.getMinY() ||
			rect.getMaxY() <      getMinY());
	}
}