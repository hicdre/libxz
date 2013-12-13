#pragma once

namespace css
{

	class StyleStruct
	{
	public:
		enum Id
		{
			Inherited_Start = 0,
			DUMMY1 = Inherited_Start - 1,

#define STYLE_STRUCT_INHERITED(name, checkdata_cb, ctor_args) \
	name,
#define STYLE_STRUCT_RESET(name, checkdata_cb, ctor_args)
#include "css_style_struct_define.h"
#undef STYLE_STRUCT_INHERITED
#undef STYLE_STRUCT_RESET

			Reset_Start,
			// a dummy value so the value after it is the same as ..._Reset_Start
			DUMMY2 = Reset_Start - 1,

#define STYLE_STRUCT_RESET(name, checkdata_cb, ctor_args) \
	name,
#define STYLE_STRUCT_INHERITED(name, checkdata_cb, ctor_args)
#include "css_style_struct_define.h"
#undef STYLE_STRUCT_INHERITED
#undef STYLE_STRUCT_RESET

			// one past the end; length of 0-based list
			Length,

			Inherited_Count = Reset_Start - Inherited_Start,
			Reset_Count = Length - Reset_Start,

			// An ID used for properties that are not in style structs.  This is
			// used only in some users of nsStyleStructID, such as
			// nsCSSProps::kSIDTable, including some that store SIDs in a bitfield,
			// such as nsCSSCompressedDataBlock::mStyleBits.
			BackendOnly = Length
		};
	};









}