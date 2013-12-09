#include "stdafx.h"
#include "xmlconstructer.h"
#include "node.h"
#include <MsXml.h>
#import <msxml6.dll>

#include "windownode.h"
#include "cubenode.h"
#include "application.h"
#include "node_factory.h"

Node* CreateNode( MSXML2::IXMLDOMElementPtr elem )
{
	std::string tag = elem->GettagName();
	return NodeClassFactory::GetInstance()->CreateClass(tag);
}

void CreateProperty(MSXML2::IXMLDOMNamedNodeMapPtr spiMap, Node* node)
{
	for(MSXML2::IXMLDOMNodePtr spiNode = spiMap->nextNode();
		spiNode; spiNode = spiMap->nextNode())
	{
		MSXML2::IXMLDOMAttributePtr spiAttr = spiNode;
		if (!spiAttr)
			continue;

		std::string nodename = spiAttr->GetnodeName();
		_variant_t o = spiAttr->GetnodeValue();
		if (o.vt == VT_EMPTY || o.vt == VT_NULL)
			continue;
		std::wstring nodevalue = (LPCWSTR)(_bstr_t)o;
		if (nodevalue.empty())
			continue;

		node->SetProperty(nodename, nodevalue);
	}
}



void CreateChildNodes( MSXML2::IXMLDOMNodeListPtr spiList, Node* node )
{
	using MSXML2::IXMLDOMElementPtr;
	using MSXML2::IXMLDOMNodeListPtr;
	using MSXML2::IXMLDOMNodePtr;
	using MSXML2::IXMLDOMNamedNodeMapPtr;

	for(IXMLDOMNodePtr spiNode = spiList->nextNode();
		spiNode; spiNode = spiList->nextNode())
	{
		IXMLDOMElementPtr spiElem = spiNode;
		if (!spiElem)
			continue;

		Node* newnode = CreateNode(spiElem);
		node->Append(newnode);

		IXMLDOMNamedNodeMapPtr namedmap = spiElem->Getattributes();
		if (namedmap)
		{
			CreateProperty(namedmap, newnode);
		}

		IXMLDOMNodeListPtr spiList2 = spiElem->GetchildNodes();
		if (spiList2)
		{
			CreateChildNodes(spiList2, newnode);
		}
	}
}



XmlConstructer::XmlConstructer( Node* node )
	: root_(node)
{

}

void XmlConstructer::Load( const std::wstring& file )
{
	using MSXML2::IXMLDOMDocumentPtr;
	using MSXML2::IXMLDOMDocument2Ptr;
	using MSXML2::IXMLDOMElementPtr;
	using MSXML2::IXMLDOMNodeListPtr;

	HRESULT hr;
	try 
	{
		do
		{
			IXMLDOMDocumentPtr spiDocument;
			hr = spiDocument.CreateInstance(__uuidof(DOMDocument));
			if(FAILED(hr))
				break;

			{
				VARIANT_BOOL b = spiDocument->load(_variant_t( _bstr_t(file.c_str())));
				if (!b)
					break;

				/*IXMLDOMDocument2Ptr spiDocument2 = spiDocument;
				if (!spiDocument2)
					break;
				spiDocument2->setProperty("SelectionLanguage", "XPath");*/
			}

			IXMLDOMElementPtr spiApplication = spiDocument->GetdocumentElement();
			if (!spiApplication)
				break;

			//IXMLDOMElementPtr spiApplication = spiRoot->selectSingleNode(_bstr_t(L"Application"));
			//if (!spiApplication)
			//	break;

			{
				IXMLDOMNodeListPtr spiList = spiApplication->GetchildNodes();

				if (spiList)
				{
					CreateChildNodes(spiList, root_);
				}
			}
		}
		while(false);
	} 
	catch(...)
	{
		//do nothing;
	}
}


