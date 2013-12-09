#include "stdafx.h"
#include "css_property_names.h"

namespace css
{
	static const char* propertyNameStringsPool[] = {
		"left\0",
		"right\0",
		"width\0",
		"height\0",
	};

	const char* getPropertyName( PropertyId id )
	{
		if (id >= firstCSSProperty)
			return propertyNameStringsPool[id];
		return 0;
	}

}