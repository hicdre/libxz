#pragma once
#include "base/basictypes.h"
#include <unordered_map>
#include <string>
#include <functional>

template <typename T> struct DefaultSingletonTraits;


class Node;
class NodePropertyMap;
class NodeClassConstructor
{
public:
	NodeClassConstructor(const std::string& tag);
	NodeClassConstructor(const std::string& tag, const std::string& inherit);
	virtual ~NodeClassConstructor();

	std::string GetTag() const { return tag_;}
	void Inherit(const std::string& tag);
	void ReadInheritProperty(NodePropertyMap* property_map, Node* node);
	virtual void ReadProperty(NodePropertyMap* property_map, Node* node);

	virtual Node* Create();
protected:
	std::string tag_;
	NodeClassConstructor* inherit_;
};


class NodeClassFactory
{
public:
	static NodeClassFactory* GetInstance();

	void Init();
	void RegisterClass(const std::string& name, NodeClassConstructor* constructor);
	NodeClassConstructor* GetClassConstructor(const std::string& name);
	Node* CreateClass(const std::string& name);
private:
	NodeClassFactory();
	~NodeClassFactory();

	std::unordered_map<std::string, NodeClassConstructor*> class_map_;

	friend struct DefaultSingletonTraits<NodeClassFactory>;
	DISALLOW_COPY_AND_ASSIGN(NodeClassFactory);
};

