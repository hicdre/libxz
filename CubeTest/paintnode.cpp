#include "stdafx.h"
#include "paintnode.h"
#include "base\string_number_conversions.h"
#include "base\utf_string_conversions.h"


CanvasNode::CanvasNode(void)
{
}


CanvasNode::~CanvasNode(void)
{
}

void CanvasNode::DoPaint( PaintStruct* ps )
{
	OnPaint(ps);

	for (Node* p = first_child_; p!=NULL; p=p->GetNextSibling())
	{
		CanvasNode* q = dynamic_cast<CanvasNode*>(p);
		if (q)
		{
			ScopedPaintTransform helper(ps, 
				q->GetTransform());
			q->DoPaint(ps);
		}
	}
}

void CanvasNode::OnPaint( PaintStruct* ps )
{

}

geometry::Transform CanvasNode::GetTransform() const
{
	return geometry::Transform(1,0,0,1,pos_.x,pos_.y);
}

void CanvasNode::SetPosition( float x, float y )
{
	pos_.setPoint(x, y);
}

geometry::Point CanvasNode::GetPosition() const
{
	return pos_;
}

void CanvasNode::SetSize( float w, float h )
{
	size_.setSize(w, h);
}

geometry::Size CanvasNode::GetSize() const
{
	return size_;
}

void CanvasNode::ApplyProperties()
{
	{//x
		std::wstring value;
		if (GetProperty("x", value))
		{
			double d;
			base::StringToDouble(WideToUTF8(value), &d);
			pos_.x = d;
		}
	}

	{//y
		std::wstring value;
		if (GetProperty("y", value))
		{
			double d;
			base::StringToDouble(WideToUTF8(value), &d);
			pos_.y = d;
		}
	}

	{//width
		std::wstring value;
		if (GetProperty("width", value))
		{
			double d;
			base::StringToDouble(WideToUTF8(value), &d);
			size_.w = d;
		}
	}

	{//height
		std::wstring value;
		if (GetProperty("height", value))
		{
			double d;
			base::StringToDouble(WideToUTF8(value), &d);
			size_.h = d;
		}
	}

	{//color
		std::wstring value;
		if (GetProperty("color", value))
		{
			std::vector<uint8> rgb;
			if (base::HexStringToBytes(WideToUTF8(value), &rgb)
				&& rgb.size() >= 3)
			{
				color_ = RGB( rgb[0], rgb[1], rgb[2] );
			}
		}
	}

	{//overflow-x

	}

	property_changed_ = false;
}
