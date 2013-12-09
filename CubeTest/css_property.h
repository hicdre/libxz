#pragma once
#include "base/basictypes.h"
#include "base/memory/scoped_ptr.h"
#include "css_property_names.h"

namespace css
{
	class Value;
	class Property
	{
	public:

	private:
		scoped_ptr<Value> value_;
		PropertyId id_;
	};
}