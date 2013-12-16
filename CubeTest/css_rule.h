#pragma once
#include "base/basictypes.h"
#include "base/memory/scoped_ptr.h"
#include "css_selector_list.h"
#include "css_declaration.h"

namespace css
{
	class Declaration;
	class StyleSheet;
	class Rule
	{
	public:
		Rule(SelectorList* aSelector,
			Declaration *aDeclaration);
		~Rule();

	public:
		// null for style attribute
		SelectorList* Selector() { return mSelector; }

		uint32 GetLineNumber() const { return mLineNumber; }
		void SetLineNumber(uint32 aLineNumber) { mLineNumber = aLineNumber; }

		Declaration* GetDeclaration() const { return mDeclaration; }

		// hooks for DOM rule
		void GetCssText(std::string& aCssText);
		void SetCssText(const std::string& aCssText);
		void GetSelectorText(std::string& aSelectorText);
		void SetSelectorText(const std::string& aSelectorText);

		StyleSheet* GetStyleSheet() const;
		void SetStyleSheet(StyleSheet* aSheet);
	private:
		// for |Clone|
		Rule(const Rule& aCopy);
		// for |DeclarationChanged|
		Rule(Rule& aCopy,
			Declaration *aDeclaration);

		SelectorList*      mSelector; // null for style attribute
		Declaration*       mDeclaration;
		//DOMCSSStyleRule*        mDOMRule;
		// Keep the same type so that MSVC packs them.
		uint32                mLineNumber : 31;
		uint32                mWasMatched : 1;

		StyleSheet*    mStyleSheet;

		DISALLOW_ASSIGN(Rule);
	};
}