#include "stdafx.h"
#include "rootnode.h"



RootNode::RootNode()
{

}


RootNode::~RootNode()
{
	for (Node* p = first_child_; p!=NULL; p=p->GetNextSibling())
	{
		first_child_->PostVisit([](Node* p)->bool
		{
			delete p;
		});
	}
}

LRESULT RootNode::HandleMessage( UINT message, WPARAM w_param, LPARAM l_param )
{
	switch (message)
	{
	case WM_PAINT:
		{
		}
		break;
	default:
		break;
	}

	return 0;
}
