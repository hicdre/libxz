#pragma once

namespace css
{
	enum PropertyId
	{
		CSSPropertyInvalid = 0,
		CSSPropertyLeft,
		CSSPropertyRight,
		CSSPropertyWidth,
		CSSPropertyHeight,
	};

	const int firstCSSProperty = 1;
	const char* getPropertyName(PropertyId id);
}