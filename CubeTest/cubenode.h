#pragma once
#include "paintnode.h"

class CubeNode : public CanvasNode
{
public:
	CubeNode(void);
	virtual ~CubeNode(void) override;

public:
	virtual void OnPaint(PaintStruct* ps) override;

	//virtual void ApplyProperties() override;
};

