#pragma once
#include <string>

namespace css
{
	class Keyword
	{
	public:
		enum Id
		{
			UNKNOWN = -1,
#define CSS_KEY(_name,_id) _id,
#include "css_keyword_define.h"
#undef CSS_KEY
			COUNT,
		};

		static Id LookupKeyword(const std::string& aKeyword);
		static const char* GetStringValue(Id aKeyword);
	};
	
}