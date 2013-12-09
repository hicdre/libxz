#pragma once
#include <vector>

namespace css
{
	class Property;
	class PropertySet
	{
	public:
		PropertySet();
		~PropertySet();

	private:
		std::vector<Property*> properties_;
	};
}