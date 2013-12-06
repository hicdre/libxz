#include "stdafx.h"
#include "rootnode.h"
#include "windownode.h"
#include "base/logging.h"
#include "paintstruct.h"



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
			return true;
		});
	}
}

LRESULT RootNode::HandleMessage(HWND hwnd, UINT message, WPARAM w_param, LPARAM l_param )
{
	WindowNode* win = FindWindow(hwnd);
	
	if (win == NULL) {
		//NOTREACHED()<<"can not find window";
		return 0;
	}

	switch (message)
	{
	case WM_PAINT:
		{
			PaintStruct ps(hwnd);
			win->DoPaint(&ps);
		}
		break;
	case WM_CLOSE:
		RemoveWindow(win);
		break;
	case WM_DESTROY:
		DetermineQuit();
		break;
	default:
		DefWindowProc(hwnd, message, w_param, l_param);
		break;
	}

	return 0;
}

void RootNode::AddWindow( WindowNode* node )
{
	if (Append(node))
		windows_.push_back(node);
}

void RootNode::RemoveWindow( WindowNode* node )
{
	if (Remove(node))
	{
		for (auto iter= windows_.begin(); iter != windows_.end(); iter++)
		{
			if (*iter == node)
			{
				windows_.erase(iter);
			}
		}

		DestroyWindow(node->GetHwnd());

		delete node;
	}
}

WindowNode* RootNode::FindWindow( HWND hwnd )
{
	for (auto iter= windows_.begin(); iter != windows_.end(); iter++)
	{
		if ((*iter)->GetHwnd() == hwnd)
		{
			return *iter;
		}
	}
	return NULL;
}

void RootNode::DetermineQuit()
{
	if (windows_.size() == 0)
		PostQuitMessage(0);
}
