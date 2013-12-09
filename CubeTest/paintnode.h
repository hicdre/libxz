#pragma once
#include "node.h"
#include "geometry.h"
#include "paintstruct.h"

class PaintNode : public Node
{
public:
	PaintNode(void);
	virtual ~PaintNode(void) override;

	void SetPosition(float x, float y);
	geometry::Point GetPosition() const;

	void SetSize(float w, float h);
	geometry::Size GetSize() const;

	void ReadPaintNodeProperty(NodePropertyMap* property_map);

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

