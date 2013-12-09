#pragma once
#include "base/basictypes.h"
#include "base/memory/scoped_ptr.h"
#include <vector>
#include <functional>
#include <unordered_map>
#include <string>

#include "node_property_map.h"

class RootNode;
class NodeClassConstructor;
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

	bool IsPropertyChanged() const;
	void SetProperty(const std::string name, const std::wstring& value);
	bool GetProperty(const std::string name, std::wstring& value);
	void ReadProperties();

	void ReadNodeProperty(NodePropertyMap* property_map);
	void WriteNodeProperty(NodePropertyMap* property_map);
protected:
	Node* parent_;
	Node* first_child_;
	Node* last_child_;
	Node* next_sibling_;
	Node* prev_sibling_;
	int32 child_count_;

	scoped_ptr<NodePropertyMap> property_map_;
	bool property_changed_;

	std::string id_;
};

