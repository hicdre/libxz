#pragma once
#include <string>
#include <unordered_map>
#include "base\basictypes.h"
#include "css_property.h"
#include "css_scanner.h"

namespace css
{
	class StyleSheet;
	class Rule;
	class Value;

	// Rule processing function
	typedef void (* RuleAppendFunc) (Rule* aRule, void* aData);
	static void AssignRuleToPointer(Rule* aRule, void* aPointer);
	static void AppendRuleToSheet(Rule* aRule, void* aParser);

	class ParserImpl
	{
	public:
		ParserImpl();
		~ParserImpl();

		void SetStyleSheet(StyleSheet* aSheet);

		void Reset();

		void InitScanner(Scanner& aScanner);
		void ReleaseScanner();

		bool ParseSheet(const std::string& aInput,
			uint32         aLineNumber);

		// Parse HTML style attribute or its equivalent in other markup
		// languages.  aBaseURL is the base url to use for relative links in
		// the declaration.
		bool ParseStyleAttribute(const std::string&  aAttributeValue,
			Rule** aResult);

		bool ParseRuleSet(RuleAppendFunc aAppendFunc, void* aData,
			bool aInsideBraces);
	private:
		bool GetToken(bool aSkipWS);

		void UngetToken();

		bool ExpectSymbol(char aSymbol, bool aSkipWS);

		bool CheckEndProperty();
	private:
		Token mToken;

		Scanner* mScanner;

		StyleSheet* mSheet;

		// After an UngetToken is done this flag is true. The next call to
		// GetToken clears the flag.
		bool mHavePushBack : 1;

		std::unordered_map<Property::Id, Value*> mTempData;

		std::unordered_map<Property::Id, Value*> mData;
	};
}