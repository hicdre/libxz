#pragma once

namespace css
{
	enum StyleStructId
	{
		StyleStruct_Inherited_Start = 0,
		StyleStruct_DUMMY1 = StyleStruct_Inherited_Start - 1,

		// Inherited
		StyleStruct_Font,
		StyleStruct_Color,
		StyleStruct_List,
		StyleStruct_Text,
		StyleStruct_Visibility,
		StyleStruct_Quotes,
		StyleStruct_UserInterface,
		StyleStruct_TableBorder,
		StyleStruct_SVG,

		StyleStruct_Reset_Start,
		StyleStruct_DUMMY2 = StyleStruct_Reset_Start - 1,

		// Reset
		StyleStruct_Background,
		StyleStruct_Position,
		StyleStruct_TextReset,
		StyleStruct_Display,
		StyleStruct_Content,
		StyleStruct_UIReset,
		StyleStruct_Table,
		StyleStruct_Margin,
		StyleStruct_Padding,
		StyleStruct_Border,
		StyleStruct_Outline,
		StyleStruct_XUL,
		StyleStruct_SVGReset,
		StyleStruct_Column,

		StyleStruct_Length,
		StyleStruct_Inherited_Count = StyleStruct_Reset_Start - StyleStruct_Inherited_Start,
		StyleStruct_Reset_Count = StyleStruct_Length - StyleStruct_Reset_Start,
		StyleStruct_BackendOnly = StyleStruct_Length,
	};

	
}