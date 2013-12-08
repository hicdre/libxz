#pragma once
#include "node.h"
#include "geometry.h"
#include "paintstruct.h"

class CanvasNode : public Node
{
public:
	CanvasNode(void);
	virtual ~CanvasNode(void) override;

	void SetPosition(float x, float y);
	geometry::Point GetPosition() const;

	void SetSize(float w, float h);
	geometry::Size GetSize() const;

	virtual void ApplyProperties() override;
public:


public:
	void DoPaint(PaintStruct* ps);
	virtual void OnPaint(PaintStruct* ps);

	geometry::Transform GetTransform() const;
protected:
	//position in parent
	geometry::Point pos_;
	geometry::Size size_;
	COLORREF color_;
};

