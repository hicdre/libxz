#pragma once
#include "base/basictypes.h"
#include "base/memory/scoped_ptr.h"
#include "css_selector_list.h"

namespace css
{
	class PropertySet;
	class Rule
	{
	public:
		Rule();
		~Rule();

	private:
		SelectorList selectors_;
		scoped_ptr<PropertySet> properties_; 
	};
}