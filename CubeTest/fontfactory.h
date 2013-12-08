#pragma once
#include <string>
#include <vector>

namespace render
{
	class Font
	{
	public:
		enum Style
		{
			StyleRegular    = 0,
			StyleBold       = 1,
			StyleItalic     = 2,
			StyleBoldItalic = 3,
			StyleUnderline  = 4,
			StyleStrikeout  = 8
		};
		Font(HFONT font, const std::wstring& name, Style style, int size);
		~Font();

		HFONT GetHFONT() const { return font_;}
		Style GetStyle() const { return style_;}
		int GetSize() const { return size_;}
		std::wstring GetName() const { return name_;}
	private:
		HFONT font_;
		Style style_;
		int size_;
		std::wstring name_;
	};


	class FontFactory
	{
	public:
		FontFactory();
		~FontFactory();

		Font* GetFont(const std::wstring& font_name, int font_size, Font::Style style);


	private:
		Font* FindFont(const std::wstring& font_name, int font_size, Font::Style style);
		Font* CreateFont(const std::wstring& font_name, int font_size, Font::Style style);
		std::vector<Font*> fonts_;
	};
}




