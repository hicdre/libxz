#include "stdafx.h"
#include "fontfactory.h"

namespace render
{

Font::Font(HFONT font, const std::wstring& name, Style style, int size)
	: font_(font), 
	name_(name), style_(style), size_(size)
{

}

Font::~Font()
{
	DeleteObject(font_);
}



FontFactory::FontFactory()
{

}

FontFactory::~FontFactory()
{
	for (auto iter : fonts_)
	{
		delete iter;
	}
}


Font* FontFactory::GetFont( const std::wstring& font_name, int font_size, Font::Style style )
{
	Font* font = FindFont(font_name, font_size, style);
	if (font)
		return font;
	return CreateFont(font_name, font_size, style);
}

Font* FontFactory::FindFont( const std::wstring& font_name, int font_size, Font::Style style )
{
	for (Font* font : fonts_)
	{
		if (font->GetName() == font_name
			&& font->GetSize() == font_size
			&& font->GetStyle() == style)
		{
			return font;
		}
	}
	return NULL;
}

Font* FontFactory::CreateFont( const std::wstring& font_name, int font_size, Font::Style style )
{
	HFONT hfont = ::CreateFont(font_size, 0, 0, 0, 
		(style & Font::StyleBold) ? FW_BOLD : FW_REGULAR,
		(style & Font::StyleBoldItalic) ? TRUE : FALSE,
		(style & Font::StyleUnderline) ? TRUE : FALSE,
		(style & Font::StyleStrikeout) ? TRUE : FALSE,
		DEFAULT_CHARSET, OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY,
		DEFAULT_PITCH, font_name.c_str());
	if (hfont == NULL)
		return NULL;

	Font* font = new Font(hfont, font_name, style, font_size);
	fonts_.push_back(font);
	return font;
}

}