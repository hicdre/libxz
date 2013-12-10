#pragma once
#include <vector>
#include "css_selector.h"

namespace css
{
	class SelectorList
	{
	public:
		SelectorList();


	private:
		std::vector<Selector*> selectors_;
	};
}