#include "stdafx.h"
#include "node.h"
#include "base/logging.h"
#include "rootnode.h"

Node::Node(void)
	: parent_(NULL)
	, first_child_(NULL)
	, last_child_(NULL)
	, next_sibling_(NULL)
	, prev_sibling_(NULL)
	, child_count_(0)
	, property_changed_(false)
{
}


Node::~Node(void)
{
}


Node* Node::GetParent() const
{
	return parent_;
}

Node* Node::GetFirstChild() const
{
	return first_child_;
}

Node* Node::GetLastChild() const
{
	return last_child_;
}

Node* Node::GetPrevSibling() const
{
	return prev_sibling_;
}

Node* Node::GetNextSibling() const
{
	return next_sibling_;
}

void Node::GetAllChildren( std::vector<Node*> &child_array ) const
{
	for (Node* p = first_child_; p!=NULL; p=p->next_sibling_)
	{
		child_array.push_back(p);
	}
}

int32 Node::GetChildCount() const
{
	return child_count_;
}

Node* Node::AppendTo( Node* parent )
{
	return parent->Append(this);
}

Node* Node::Append( Node* child )
{
	return InsertAfter(last_child_, child);
}

Node* Node::Remove( Node* child )
{
	//只允许移除子节点
	if(!child || child->parent_ != this)
	{
		NOTREACHED()<<"can only remove child node";
		return NULL;
	}

	//更新父子关系
	child->parent_ = NULL;
	if (first_child_ == child)
	{
		first_child_ = child->next_sibling_;
	}
	if (last_child_ == child)
	{
		last_child_ = child->prev_sibling_;
	}

	//更新兄弟关系
	if(child->prev_sibling_)
	{
		child->prev_sibling_->next_sibling_ = child->next_sibling_;
	}

	if(child->next_sibling_)
	{
		child->next_sibling_->prev_sibling_ = child->prev_sibling_;
	}

	child->next_sibling_ = NULL;
	child->prev_sibling_ = NULL;

	child_count_--;

	return child;
}

Node* Node::InsertAfter( Node* ref, Node* child )
{
	if (ref == child || child == NULL || (ref && ref->parent_ != this) )
	{
		assert(0);
		return NULL;
	}

	//先从原节点移除
	if (child->parent_)
	{
		child->parent_->Remove(child);
	}
	child->parent_ = this;

	child->prev_sibling_ = ref;
	if (ref)
	{//插到中间或最后
		child->next_sibling_ = ref->next_sibling_;
		if (ref->next_sibling_)
		{
			ref->next_sibling_->prev_sibling_ = child;
		}
		ref->next_sibling_ = child;

		DCHECK(last_child_);
		//插到最后了
		if (last_child_->next_sibling_)
		{
			last_child_ = last_child_->next_sibling_;
		}
	}
	else
	{//插到最前
		child->next_sibling_ = first_child_;
		if (first_child_)
		{
			first_child_->prev_sibling_ = child;
		}
		first_child_ = child;

		//原来没有子元素
		if (last_child_ == NULL)
		{
			last_child_ = child;
		}
	}
	child_count_++;

	return child;
}

Node* Node::InsertBefore( Node* ref, Node* child )
{
	if (ref == child || child == NULL || (ref && ref->parent_ != this) )
	{
		NOTREACHED()<<"insert before invalid";
		return NULL;
	}

	if (ref)
	{
		return InsertAfter(ref->prev_sibling_, child);
	}
	else
	{
		return InsertAfter(last_child_, child);
	}
}

bool Node::PreVisit( std::function<bool(Node*)> func )
{
	if (!func(this))
		return false;

	for (Node* p = first_child_; p!=NULL; p=p->next_sibling_)
	{
		if (!p->PreVisit(func))
			break;
	}

	return true;
}


bool Node::PostVisit( std::function<bool(Node*)> func )
{
	for (Node* p = first_child_; p!=NULL; p=p->next_sibling_)
	{
		if (!p->PostVisit(func))
			break;
	}

	if (!func(this))
		return false;

	return true;
}



Node* Node::Detach()
{
	//RootNode* root = GetRoot();
	return parent_->Remove(this);
}

RootNode* Node::GetRoot() const
{
	const Node* p = this;
	while(p->parent_)
		p = p->parent_;
	return dynamic_cast<RootNode*>(const_cast<Node*>(p));
}

void Node::SetProperty( const std::string name, const std::wstring& value )
{
	property_map_[name] = value;
	property_changed_ = true;
}

bool Node::IsPropertyChanged() const
{
	return property_changed_;
}

void Node::ApplyProperties()
{
	property_changed_ = true;
}

bool Node::GetProperty( const std::string name, std::wstring& value )
{
	if (property_map_.count(name))
	{
		value = property_map_[name];
		return true;
	}
	return false;
}




