#pragma once
#include <vector>
#include "css_selector.h"

namespace css
{
	class StyleSheet;
	class SelectorList
	{
	public:
		SelectorList();
		~SelectorList();

		/**
		* Create a new selector and push it onto the beginning of |mSelectors|,
		* setting its |mNext| to the current value of |mSelectors|.  If there is an
		* earlier selector, set its |mOperator| to |aOperator|; else |aOperator|
		* must be PRUnichar(0).
		* Returns the new selector.
		* The list owns the new selector.
		* The caller is responsible for updating |mWeight|.
		*/
		Selector* AddSelector(char aOperator);

		/**
		* Should be used only on the first in the list
		*/
		void ToString(std::string& aResult, StyleSheet* aSheet);

		/**
		* Do a deep clone.  Should be used only on the first in the list.
		*/
		SelectorList* Clone() const { return Clone(true); }

		Selector* mSelectors;
		int32 mWeight;
		SelectorList* mNext;
	protected:
		SelectorList* Clone(bool aDeep) const;
		DISALLOW_COPY_AND_ASSIGN(SelectorList);
	};
}