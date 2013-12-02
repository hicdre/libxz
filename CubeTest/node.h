#pragma once
#include "base/basictypes.h"
#include <vector>
#include <functional>

class RootNode;
class Node
{
public:
	Node();
	virtual ~Node();

public:
	Node* GetParent() const;
	Node* GetFirstChild() const;
	Node* GetLastChild() const;
	Node* GetPrevSibling() const;
	Node* GetNextSibling() const;

	RootNode* GetRoot() const;

	void GetAllChildren(std::vector<Node*> &child_array) const;
	int32 GetChildCount() const;

	Node* AppendTo(Node* parent);
	Node* Detach();

	Node* Append(Node* child);
	Node* Remove(Node* child);
	Node* InsertAfter(Node* ref, Node* child);
	Node* InsertBefore(Node* ref, Node* child);
	
	
	//遍历, 返回ture继续, 返回false终止
	//前序遍历
	bool PreVisit(std::function<bool(Node*)> func);
	bool PostVisit(std::function<bool(Node*)> func);

protected:
	Node* parent_;
	Node* first_child_;
	Node* last_child_;
	Node* next_sibling_;
	Node* prev_sibling_;
	int32 child_count_;
};

