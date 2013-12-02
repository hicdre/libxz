#pragma once

#include "node.h"

class RootNode : public Node
{
public:
	RootNode();
	virtual ~RootNode();


public:
	LRESULT HandleMessage(UINT message, WPARAM w_param, LPARAM l_param);
};