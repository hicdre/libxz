#include "stdafx.h"
#include "css_stylesheet.h"
#include "css_parser.h"

namespace css
{
	StyleSheet::StyleSheet()
		: parser_(new Parser)
	{

	}

	StyleSheet::~StyleSheet()
	{

	}

	void StyleSheet::AddData( const std::string& data )
	{
		parser_->ParseChunk(data);
	}

}