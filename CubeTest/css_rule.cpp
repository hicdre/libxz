#include "stdafx.h"
#include "css_rule.h"

namespace css
{


	Rule::Rule( SelectorList* aSelector, Declaration *aDeclaration )
		: mSelector(aSelector)
		, mDeclaration(aDeclaration)
		, mLineNumber(0)
		, mWasMatched(false)
		, mStyleSheet(NULL)
	{

	}

	Rule::Rule( const Rule& aCopy )
		: mSelector(aCopy.mSelector ? aCopy.mSelector->Clone() : nullptr)
		, mDeclaration(new Declaration(*aCopy.mDeclaration))
		, mLineNumber(aCopy.mLineNumber)
		, mWasMatched(false)
		, mStyleSheet(NULL)
	{

	}

	Rule::Rule( Rule& aCopy, Declaration *aDeclaration )
		: mSelector(aCopy.mSelector)
		, mDeclaration(aDeclaration)
		, mLineNumber(aCopy.mLineNumber)
		, mWasMatched(false)
		, mStyleSheet(NULL)
	{
		// Similarly for the selector.
		aCopy.mSelector = nullptr;

		// We are probably replacing the old declaration with |aDeclaration|
		// instead of taking ownership of the old declaration; only null out
		// aCopy.mDeclaration if we are taking ownership.
		if (mDeclaration == aCopy.mDeclaration) {
			// This should only ever happen if the declaration was modifiable.
			//mDeclaration->AssertMutable();
			aCopy.mDeclaration = nullptr;
		}
	}

	Rule::~Rule()
	{
		delete mSelector;
		delete mDeclaration;
	}

	void Rule::GetCssText( std::string& aCssText )
	{
		if (mSelector) {
			mSelector->ToString(aCssText, GetStyleSheet());
			aCssText.append(1,' ');
		}
		aCssText.append(1,'{');
		aCssText.append(1,' ');
		if (mDeclaration)
		{
			std::string   tempString;
			mDeclaration->ToString( tempString );
			aCssText.append( tempString );
		}
		aCssText.append(1,' ');
		aCssText.append(1,'}');
	}

	void Rule::SetCssText( const std::string& aCssText )
	{

	}

	void Rule::GetSelectorText( std::string& aSelectorText )
	{
		if (mSelector)
			mSelector->ToString(aSelectorText, GetStyleSheet());
		else
			aSelectorText.clear();
	}

	void Rule::SetSelectorText( const std::string& aSelectorText )
	{

	}

	StyleSheet* Rule::GetStyleSheet() const
	{
		return mStyleSheet;
	}

	void Rule::SetStyleSheet( StyleSheet* aSheet )
	{
		mStyleSheet = aSheet;
	}

}