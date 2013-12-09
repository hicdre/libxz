#include "stdafx.h"
#include "node_property_map.h"
#include "base/string_number_conversions.h"
#include "base/utf_string_conversions.h"

NodePropertyMap::NodePropertyMap()
{

}

NodePropertyMap::~NodePropertyMap()
{

}

bool NodePropertyMap::GetProperty( const std::string& name, std::wstring& value )
{
	if (property_map_.count(name))
	{
		value = property_map_[name];
		return true;
	}
	return false;
}

void NodePropertyMap::SetProperty( const std::string& name, const std::wstring& value )
{
	property_map_[name] = value;
}

bool NodePropertyMap::GetFloat( const std::string& name, float& v )
{
	std::wstring value;
	if (GetProperty(name, value))
	{
		double d;
		if (base::StringToDouble(WideToUTF8(value), &d))
		{
			v = d;
			return true;
		}
	}
	return false;
}

bool NodePropertyMap::GetColor( const std::string& name, COLORREF& v )
{
	std::wstring value;
	if (GetProperty(name, value))
	{
		std::vector<uint8> rgb;
		if (base::HexStringToBytes(WideToUTF8(value), &rgb)
			&& rgb.size() >= 3)
		{
			v = RGB( rgb[0], rgb[1], rgb[2] );
			return true;
		}
	}
	return false;
}

bool NodePropertyMap::GetString( const std::string& name, std::wstring& value )
{
	return GetProperty(name, value);
}

bool NodePropertyMap::GetString( const std::string& name, std::string& value )
{
	std::wstring v;
	if (GetProperty(name, v))
	{
		value = WideToUTF8(v);
		return true;
	}
	return false;
}
