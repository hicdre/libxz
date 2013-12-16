#pragma once
#include "base\basictypes.h"
#include <string>

namespace css
{

	class StyleSheet;
	class Rule;
	class ParserImpl;
	class Parser
	{
	public:
		Parser();
		~Parser();

		void SetStyleSheet(StyleSheet* aSheet);

		bool ParseSheet(const std::string& aInput,
			uint32         aLineNumber);

		// Parse HTML style attribute or its equivalent in other markup
		// languages.  aBaseURL is the base url to use for relative links in
		// the declaration.
		bool ParseStyleAttribute(const std::string&  aAttributeValue,
			Rule** aResult);
	protected:
		ParserImpl* impl;
	};
}