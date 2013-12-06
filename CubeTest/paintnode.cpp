#include "stdafx.h"
#include "paintnode.h"



PaintNode::PaintNode(void)
{
}


PaintNode::~PaintNode(void)
{
}

void PaintNode::DoPaint( PaintStruct* ps )
{
	OnPaint(ps);

	for (Node* p = first_child_; p!=NULL; p=p->GetNextSibling())
	{
		PaintNode* q = dynamic_cast<PaintNode*>(p);
		if (q)
		{
			ScopedPaintTransform helper(ps, 
				q->GetTransform());
			q->DoPaint(ps);
		}
	}
}

void PaintNode::OnPaint( PaintStruct* ps )
{

}

geometry::Transform PaintNode::GetTransform() const
{
	return geometry::Transform(1,0,0,1,pos_.x,pos_.y);
}

void PaintNode::SetPosition( float x, float y )
{
	pos_.setPoint(x, y);
}

geometry::Point PaintNode::GetPosition() const
{
	return pos_;
}

void PaintNode::SetSize( float w, float h )
{
	size_.setSize(w, h);
}

geometry::Size PaintNode::GetSize() const
{
	return size_;
}
