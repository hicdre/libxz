#include "stdafx.h"
#include "geometry.h"
#include <math.h>
#include <algorithm> 

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

	Transform::Transform()
		: a(1.0), b(0.0), c(0.0), d(1.0), tx(0.0), ty(0.0)
	{
	}

	Transform::Transform( float a, float b, float c, float d, float tx, float ty )
		: a(a), b(b), c(c), d(d), tx(tx), ty(ty)
	{

	}

	bool Transform::IsEqual( const Transform& t ) const
	{
		return (a == t.a && b == t.b && c == t.c && d == t.d && tx == t.tx && ty == t.ty);
	}

	Point Transform::Apply( const Point& point ) const
	{
		Point p;
		p.x = (float)((double)a * point.x + (double)c * point.y + tx);
		p.y = (float)((double)b * point.x + (double)d * point.y + ty);
		return p;
	}

	Size Transform::Apply( const Size& size ) const
	{
		Size s;
		s.w = (float)((double)a * size.w + (double)c * size.h);
		s.h = (float)((double)b * size.w + (double)d * size.h);
		return s;
	}

	Rect Transform::Apply( const Rect& rect ) const
	{
		float top    = rect.getMinY();
		float left   = rect.getMinX();
		float right  = rect.getMaxX();
		float bottom = rect.getMaxY();

		Point topLeft = Apply(PointMake(left, top));
		Point topRight = Apply(PointMake(right, top));
		Point bottomLeft = Apply(PointMake(left, bottom));
		Point bottomRight = Apply(PointMake(right, bottom));

		float minX = (std::min)((std::min)(topLeft.x, topRight.x), (std::min)(bottomLeft.x, bottomRight.x));
		float maxX = (std::max)((std::max)(topLeft.x, topRight.x), (std::max)(bottomLeft.x, bottomRight.x));
		float minY = (std::min)((std::min)(topLeft.y, topRight.y), (std::min)(bottomLeft.y, bottomRight.y));
		float maxY = (std::max)((std::max)(topLeft.y, topRight.y), (std::max)(bottomLeft.y, bottomRight.y));

		return RectMake(minX, minY, (maxX - minX), (maxY - minY));
	}

	Transform Transform::Translate( float x, float y ) const
	{
		return Transform(a, b, c, d, tx + a * x + c * y, y + b * tx + d * ty);
	}

	Transform Transform::Rotate( float anAngle ) const
	{
		float fSin = std::sin(anAngle);
		float fCos = std::cos(anAngle);

		return Transform( a * fCos + c * fSin,
			b * fCos + d * fSin,
			c * fCos - a * fSin,
			d * fCos - b * fSin,
			tx,
			ty);
	}

	Transform Transform::Scale( float sx, float sy ) const
	{
		return Transform(a * sx, b * sx, c * sy, d * sy, tx, ty);
	}

	Transform Transform::Concat( const Transform& t ) const
	{
		return Transform(    a * t.a + b * t.c, a * t.b + b * t.d, //a,b
			c * t.a + d * t.c, c * t.b + d * t.d, //c,d
			tx * t.a + ty * t.c + t.tx,                  //tx
			tx * t.b + ty * t.d + t.ty);                  //ty
	}

	Transform Transform::Invert() const
	{
		float determinant = 1 / (a * d - b * c);

		return Transform(determinant * d, -determinant * b, -determinant * c, determinant * a,
			determinant * (c * ty - d * tx), determinant * (b * tx - a * ty) );
	}

	XFORM Transform::ToXFORM() const
	{
		XFORM x = {a, b, c, d, tx, ty};
		return x;
	}

}

void ToRECT( const geometry::Rect& rect, LPRECT lprect )
{
	lprect->left = (LONG) rect.getMinX();
	lprect->top = (LONG)rect.getMinY();
	lprect->right = (LONG) rect.getMaxX();
	lprect->bottom = (LONG) rect.getMaxY();
}
