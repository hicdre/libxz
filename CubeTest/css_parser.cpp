#include "stdafx.h"
#include "css_parser.h"

namespace css
{
	enum {
		sStart = 0,
		sStylesheet = 1,
		sStatement = 2,
		sRuleset = 3,
		sRulesetEnd = 4,
		sAtRule = 5,
		sAtRuleEnd = 6,
		sBlock = 7,
		sBlockContent = 8,
		sSelector = 9,
		sDeclaration = 10,
		sDeclList = 11,
		sDeclListEnd = 12,
		sProperty = 13,
		sValue0 = 14,
		sValue1 = 15,
		sValue = 16,
		sAny0 = 17,
		sAny1 = 18,
		sAny = 19,
		sMalformedDecl = 20,
		sMalformedSelector = 21,
		sMalformedAtRule = 22,
		sInlineStyle = 23,
		sISBody0 = 24,
		sISBody = 25
	};

	Parser::Parser()
	{
		state_.state = sStart;
		state_.substate = 0;
	}

	Parser::~Parser()
	{

	}

	void Parser::ParseChunk( const std::string& data )
	{

	}

}