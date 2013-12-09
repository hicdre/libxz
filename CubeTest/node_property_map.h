#pragma once
#include <unordered_map>
#include <string>

class NodePropertyMap
{
public:
	NodePropertyMap();
	~NodePropertyMap();

	bool GetProperty(const std::string& name, std::wstring& value);
	void SetProperty(const std::string& name, const std::wstring& value);

	bool GetFloat(const std::string& name, float& v);
	bool GetColor(const std::string& name, COLORREF& v);
	bool GetString(const std::string& name, std::wstring& value);
	bool GetString(const std::string& name, std::string& value);
private:
	std::unordered_map<std::string, std::wstring> property_map_;
};