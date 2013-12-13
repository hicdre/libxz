#include "stdafx.h"
#include "css_keyword.h"
#include <unordered_map>
#include "base/memory/singleton.h"
#include "base/string_util.h"


namespace css
{
	// define an array of all CSS keywords
#define CSS_KEY(_name,_id) #_name,
	const char* const kCSSRawKeywords[] = {
#include "css_keyword_define.h"
	};
#undef CSS_KEY

	class KeywordTable
	{
	public:
		static KeywordTable* GetInstance() {
			return Singleton<KeywordTable>::get();
		}

		Keyword::Id Lookup(const std::string& name)
		{
			std::string key = StringToLowerASCII(name);
			if (caseinsensitive_map.count(key))
				return caseinsensitive_map.at(key);
			return Keyword::Id::UNKNOWN;
		}

	private:
		KeywordTable() 
		{
			for (int i = 0; i< Keyword::Id::COUNT; i++)
			{
				std::string key(kCSSRawKeywords[i]);
				StringToLowerASCII(&key);
				caseinsensitive_map.insert(std::make_pair(key, (Keyword::Id)i));
			}
		}

		std::unordered_map<std::string, Keyword::Id> caseinsensitive_map;
		friend struct DefaultSingletonTraits<KeywordTable>;
		DISALLOW_COPY_AND_ASSIGN(KeywordTable);
	};


	Keyword::Id Keyword::LookupKeyword( const std::string& aKeyword )
	{
		return KeywordTable::GetInstance()->Lookup(aKeyword);
	}

	const char* Keyword::GetStringValue( Keyword::Id aKeyword )
	{
		if (aKeyword >= 0 && aKeyword < Id::COUNT)
			return kCSSRawKeywords[aKeyword];
		return "";
	}

}