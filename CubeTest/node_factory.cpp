#include "stdafx.h"
#include "base\memory\singleton.h"
#include "node_factory.h"
#include "node.h"
#include "windownode.h"
#include "cubenode.h"

namespace impl
{
	class NodeConstructor : public NodeClassConstructor
	{
	public:
		NodeConstructor() : NodeClassConstructor("Node") {}
		virtual ~NodeConstructor() {}
		virtual void ReadProperty(NodePropertyMap* property_map, Node* node)
		{
			node->ReadNodeProperty(property_map);
		}
	};

	class PaintNodeConstructor : public NodeClassConstructor
	{
	public:
		PaintNodeConstructor() : NodeClassConstructor("PaintNode", "Node") {}
		virtual ~PaintNodeConstructor() {}
		virtual void ReadProperty(NodePropertyMap* property_map, PaintNode* node)
		{
			ReadInheritProperty(property_map, node);
			node->ReadPaintNodeProperty(property_map);
		}
	};

	class CubeNodeConstructor : public NodeClassConstructor
	{
	public:
		CubeNodeConstructor() : NodeClassConstructor("Cube", "PaintNode") {}
		virtual ~CubeNodeConstructor() {}
		virtual CubeNode* Create() { return new CubeNode;}
		virtual void ReadProperty(NodePropertyMap* property_map, Node* node)
		{
			ReadInheritProperty(property_map, node);
		}
	};

	class WindowNodeConstructor : public NodeClassConstructor
	{
	public:
		WindowNodeConstructor() : NodeClassConstructor("Window", "Node") {}
		virtual ~WindowNodeConstructor() {}
		virtual WindowNode* Create() { return new WindowNode;}
		virtual void ReadProperty(NodePropertyMap* property_map, Node* node)
		{
			ReadInheritProperty(property_map, node);
		}
	};
}




void NodeClassFactory::Init()
{
	using namespace impl;
	RegisterClass("Node", new NodeConstructor);
	RegisterClass("PaintNode", new PaintNodeConstructor);
	RegisterClass("Cube", new CubeNodeConstructor);
	RegisterClass("Window", new WindowNodeConstructor);
}

NodeClassFactory* NodeClassFactory::GetInstance()
{
	return Singleton<NodeClassFactory>::get();
}

Node* NodeClassFactory::CreateClass( const std::string& name )
{
	NodeClassConstructor* constructor = GetClassConstructor(name);
	if (constructor) {
		return constructor->Create();
	}
	return NULL;
}

NodeClassConstructor* NodeClassFactory::GetClassConstructor( const std::string& name )
{
	if (!class_map_.count(name))
		return NULL;
	return class_map_.at(name);
}


NodeClassFactory::NodeClassFactory()
{

}


NodeClassFactory::~NodeClassFactory()
{
	for (auto iter : class_map_)
	{
		delete iter.second;
	}
}

void NodeClassFactory::RegisterClass( const std::string& name, NodeClassConstructor* constructor )
{
	if (class_map_.count(name)){
		delete class_map_[name];
	}
	class_map_[name] = constructor;
}


NodeClassConstructor::NodeClassConstructor( const std::string& tag ) 
	: tag_(tag)
	, inherit_(NULL)
{

}

NodeClassConstructor::NodeClassConstructor( const std::string& tag, const std::string& inherit )
	: tag_(tag)
	, inherit_(NULL)
{
	Inherit(inherit);
}

NodeClassConstructor::~NodeClassConstructor()
{

}

void NodeClassConstructor::Inherit( const std::string& tag )
{
	NodeClassConstructor* classobj = NodeClassFactory::GetInstance()->GetClassConstructor(tag);
	if (classobj)
		inherit_ = classobj;
}

void NodeClassConstructor::ReadProperty( NodePropertyMap* property_map, Node* node )
{
	
}

Node* NodeClassConstructor::Create()
{
	return NULL;
}

void NodeClassConstructor::ReadInheritProperty( NodePropertyMap* property_map, Node* node )
{
	if (inherit_)
		inherit_->ReadProperty(property_map, node);
}


