#include "stdafx.h"
#include "css_property.h"
#include <unordered_map>
#include "base/memory/singleton.h"
#include "base/string_util.h"

namespace css
{

	const char* kCSSRawProperties[] = {
#define CSS_PROP(name_, id_, method_, flags_, pref_, parsevariant_, kwtable_, \
	stylestruct_, stylestructoffset_, animtype_)    #name_,
#include "css_property_define.h"
#undef CSS_PROP

#define CSS_PROP_SHORTHAND(name_, id_, method_, flags_, pref_) #name_,
#include "css_property_define.h"
#undef CSS_PROP_SHORTHAND

	};

	//Property::COUNT
	const uint32 Property::kFlagsTable[] = {
#define CSS_PROP(name_, id_, method_, flags_, pref_, parsevariant_, kwtable_, \
	stylestruct_, stylestructoffset_, animtype_)                 \
	flags_,
#include "css_property_define.h"
#undef CSS_PROP

#define CSS_PROP_SHORTHAND(name_, id_, method_, flags_, pref_) flags_,
#include "css_property_define.h"
#undef CSS_PROP_SHORTHAND
	};



	const int32* Property::kKeywordTableTable[] = {
#define CSS_PROP(name_, id_, method_, flags_, pref_, parsevariant_,     \
	kwtable_, stylestruct_, stylestructoffset_, animtype_) \
	kwtable_,
#include "css_property_define.h"
#undef CSS_PROP
	};

	///begin sub prop region
	//sub
	static const Property::Id gAnimationSubpropTable[] = {
		Property::animation_duration,
		Property::animation_timing_function,
		Property::animation_delay,
		Property::animation_direction,
		Property::animation_fill_mode,
		Property::animation_iteration_count,
		// List animation-name last so we serialize it last, in case it has
		// a value that conflicts with one of the other properties.  (See
		// how Declaration::GetValue serializes 'animation'.
		Property::animation_name,
		Property::UNKNOWN
	};

	static const Property::Id gBorderRadiusSubpropTable[] = {
		// Code relies on these being in topleft-topright-bottomright-bottomleft
		// order.
		Property::border_top_left_radius,
		Property::border_top_right_radius,
		Property::border_bottom_right_radius,
		Property::border_bottom_left_radius,
		Property::UNKNOWN
	};

	static const Property::Id gOutlineRadiusSubpropTable[] = {
		// Code relies on these being in topleft-topright-bottomright-bottomleft
		// order.
		Property::_moz_outline_radius_topLeft,
		Property::_moz_outline_radius_topRight,
		Property::_moz_outline_radius_bottomRight,
		Property::_moz_outline_radius_bottomLeft,
		Property::UNKNOWN
	};

	static const Property::Id gBackgroundSubpropTable[] = {
		Property::background_color,
		Property::background_image,
		Property::background_repeat,
		Property::background_attachment,
		Property::background_position,
		Property::background_clip,
		Property::background_origin,
		Property::background_size,
		Property::UNKNOWN
	};

	static const Property::Id gBorderSubpropTable[] = {
		Property::border_top_width,
		Property::border_right_width_value,
		Property::border_right_width_ltr_source,
		Property::border_right_width_rtl_source,
		Property::border_bottom_width,
		Property::border_left_width_value,
		Property::border_left_width_ltr_source,
		Property::border_left_width_rtl_source,
		Property::border_top_style,
		Property::border_right_style_value,
		Property::border_right_style_ltr_source,
		Property::border_right_style_rtl_source,
		Property::border_bottom_style,
		Property::border_left_style_value,
		Property::border_left_style_ltr_source,
		Property::border_left_style_rtl_source,
		Property::border_top_color,
		Property::border_right_color_value,
		Property::border_right_color_ltr_source,
		Property::border_right_color_rtl_source,
		Property::border_bottom_color,
		Property::border_left_color_value,
		Property::border_left_color_ltr_source,
		Property::border_left_color_rtl_source,
		Property::border_top_colors,
		Property::border_right_colors,
		Property::border_bottom_colors,
		Property::border_left_colors,
		Property::border_image_source,
		Property::border_image_slice,
		Property::border_image_width,
		Property::border_image_outset,
		Property::border_image_repeat,
		Property::UNKNOWN
	};

	static const Property::Id gBorderBottomSubpropTable[] = {
		// nsCSSDeclaration.cpp outputs the subproperties in this order.
		// It also depends on the color being third.
		Property::border_bottom_width,
		Property::border_bottom_style,
		Property::border_bottom_color,
		Property::UNKNOWN
	};

	//MOZ_STATIC_ASSERT(NS_SIDE_TOP == 0 && NS_SIDE_RIGHT == 1 &&
	//	NS_SIDE_BOTTOM == 2 && NS_SIDE_LEFT == 3,
	//	"box side constants not top/right/bottom/left == 0/1/2/3");
	static const Property::Id gBorderColorSubpropTable[] = {
		// Code relies on these being in top-right-bottom-left order.
		// Code relies on these matching the NS_SIDE_* constants.
		Property::border_top_color,
		Property::border_right_color_value,
		Property::border_bottom_color,
		Property::border_left_color_value,
		// extras:
		Property::border_left_color_ltr_source,
		Property::border_left_color_rtl_source,
		Property::border_right_color_ltr_source,
		Property::border_right_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderEndColorSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_end_color_value,
		Property::border_right_color_ltr_source,
		Property::border_left_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderLeftColorSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_left_color_value,
		Property::border_left_color_ltr_source,
		Property::border_left_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderRightColorSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_right_color_value,
		Property::border_right_color_ltr_source,
		Property::border_right_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderStartColorSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_start_color_value,
		Property::border_left_color_ltr_source,
		Property::border_right_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderEndSubpropTable[] = {
		// nsCSSDeclaration.cpp output the subproperties in this order.
		// It also depends on the color being third.
		Property::border_end_width_value,
		Property::border_end_style_value,
		Property::border_end_color_value,
		// extras:
		Property::border_right_width_ltr_source,
		Property::border_left_width_rtl_source,
		Property::border_right_style_ltr_source,
		Property::border_left_style_rtl_source,
		Property::border_right_color_ltr_source,
		Property::border_left_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderLeftSubpropTable[] = {
		// nsCSSDeclaration.cpp outputs the subproperties in this order.
		// It also depends on the color being third.
		Property::border_left_width_value,
		Property::border_left_style_value,
		Property::border_left_color_value,
		// extras:
		Property::border_left_width_ltr_source,
		Property::border_left_width_rtl_source,
		Property::border_left_style_ltr_source,
		Property::border_left_style_rtl_source,
		Property::border_left_color_ltr_source,
		Property::border_left_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderRightSubpropTable[] = {
		// nsCSSDeclaration.cpp outputs the subproperties in this order.
		// It also depends on the color being third.
		Property::border_right_width_value,
		Property::border_right_style_value,
		Property::border_right_color_value,
		// extras:
		Property::border_right_width_ltr_source,
		Property::border_right_width_rtl_source,
		Property::border_right_style_ltr_source,
		Property::border_right_style_rtl_source,
		Property::border_right_color_ltr_source,
		Property::border_right_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderStartSubpropTable[] = {
		// nsCSSDeclaration.cpp outputs the subproperties in this order.
		// It also depends on the color being third.
		Property::border_start_width_value,
		Property::border_start_style_value,
		Property::border_start_color_value,
		// extras:
		Property::border_left_width_ltr_source,
		Property::border_right_width_rtl_source,
		Property::border_left_style_ltr_source,
		Property::border_right_style_rtl_source,
		Property::border_left_color_ltr_source,
		Property::border_right_color_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderStyleSubpropTable[] = {
		// Code relies on these being in top-right-bottom-left order.
		Property::border_top_style,
		Property::border_right_style_value,
		Property::border_bottom_style,
		Property::border_left_style_value,
		// extras:
		Property::border_left_style_ltr_source,
		Property::border_left_style_rtl_source,
		Property::border_right_style_ltr_source,
		Property::border_right_style_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderLeftStyleSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_left_style_value,
		Property::border_left_style_ltr_source,
		Property::border_left_style_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderRightStyleSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_right_style_value,
		Property::border_right_style_ltr_source,
		Property::border_right_style_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderStartStyleSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_start_style_value,
		Property::border_left_style_ltr_source,
		Property::border_right_style_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderEndStyleSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_end_style_value,
		Property::border_right_style_ltr_source,
		Property::border_left_style_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderTopSubpropTable[] = {
		// nsCSSDeclaration.cpp outputs the subproperties in this order.
		// It also depends on the color being third.
		Property::border_top_width,
		Property::border_top_style,
		Property::border_top_color,
		Property::UNKNOWN
	};

	static const Property::Id gBorderWidthSubpropTable[] = {
		// Code relies on these being in top-right-bottom-left order.
		Property::border_top_width,
		Property::border_right_width_value,
		Property::border_bottom_width,
		Property::border_left_width_value,
		// extras:
		Property::border_left_width_ltr_source,
		Property::border_left_width_rtl_source,
		Property::border_right_width_ltr_source,
		Property::border_right_width_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderLeftWidthSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_left_width_value,
		Property::border_left_width_ltr_source,
		Property::border_left_width_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderRightWidthSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_right_width_value,
		Property::border_right_width_ltr_source,
		Property::border_right_width_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderStartWidthSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_start_width_value,
		Property::border_left_width_ltr_source,
		Property::border_right_width_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gBorderEndWidthSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::border_end_width_value,
		Property::border_right_width_ltr_source,
		Property::border_left_width_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gFontSubpropTable[] = {
		Property::font_family,
		Property::font_style,
		Property::font_variant,
		Property::font_weight,
		Property::font_size,
		Property::line_height,
		Property::font_size_adjust, // XXX Added LDB.
		Property::font_stretch, // XXX Added LDB.
		Property::_x_system_font,
		Property::font_feature_settings,
		Property::font_language_override,
		Property::UNKNOWN
	};

	static const Property::Id gListStyleSubpropTable[] = {
		Property::list_style_type,
		Property::list_style_image,
		Property::list_style_position,
		Property::UNKNOWN
	};

	static const Property::Id gMarginSubpropTable[] = {
		// Code relies on these being in top-right-bottom-left order.
		Property::margin_top,
		Property::margin_right_value,
		Property::margin_bottom,
		Property::margin_left_value,
		// extras:
		Property::margin_left_ltr_source,
		Property::margin_left_rtl_source,
		Property::margin_right_ltr_source,
		Property::margin_right_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gMarginLeftSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::margin_left_value,
		Property::margin_left_ltr_source,
		Property::margin_left_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gMarginRightSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::margin_right_value,
		Property::margin_right_ltr_source,
		Property::margin_right_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gMarginStartSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::margin_start_value,
		Property::margin_left_ltr_source,
		Property::margin_right_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gMarginEndSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::margin_end_value,
		Property::margin_right_ltr_source,
		Property::margin_left_rtl_source,
		Property::UNKNOWN
	};


	static const Property::Id gOutlineSubpropTable[] = {
		// nsCSSDeclaration.cpp outputs the subproperties in this order.
		// It also depends on the color being third.
		Property::outline_width,
		Property::outline_style,
		Property::outline_color,
		Property::UNKNOWN
	};

	static const Property::Id gColumnsSubpropTable[] = {
		Property::_moz_column_count,
		Property::_moz_column_width,
		Property::UNKNOWN
	};

	static const Property::Id gColumnRuleSubpropTable[] = {
		// nsCSSDeclaration.cpp outputs the subproperties in this order.
		// It also depends on the color being third.
		Property::_moz_column_rule_width,
		Property::_moz_column_rule_style,
		Property::_moz_column_rule_color,
		Property::UNKNOWN
	};

	static const Property::Id gOverflowSubpropTable[] = {
		Property::overflow_x,
		Property::overflow_y,
		Property::UNKNOWN
	};

	static const Property::Id gPaddingSubpropTable[] = {
		// Code relies on these being in top-right-bottom-left order.
		Property::padding_top,
		Property::padding_right_value,
		Property::padding_bottom,
		Property::padding_left_value,
		// extras:
		Property::padding_left_ltr_source,
		Property::padding_left_rtl_source,
		Property::padding_right_ltr_source,
		Property::padding_right_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gPaddingLeftSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::padding_left_value,
		Property::padding_left_ltr_source,
		Property::padding_left_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gPaddingRightSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::padding_right_value,
		Property::padding_right_ltr_source,
		Property::padding_right_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gPaddingStartSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::padding_start_value,
		Property::padding_left_ltr_source,
		Property::padding_right_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gPaddingEndSubpropTable[] = {
		// nsCSSParser::ParseDirectionalBoxProperty depends on this order
		Property::padding_end_value,
		Property::padding_right_ltr_source,
		Property::padding_left_rtl_source,
		Property::UNKNOWN
	};

	static const Property::Id gTextDecorationSubpropTable[] = {
		Property::text_blink,
		Property::text_decoration_color,
		Property::text_decoration_line,
		Property::text_decoration_style,
		Property::UNKNOWN
	};

	static const Property::Id gTransitionSubpropTable[] = {
		Property::transition_property,
		Property::transition_duration,
		Property::transition_timing_function,
		Property::transition_delay,
		Property::UNKNOWN
	};

	static const Property::Id gBorderImageSubpropTable[] = {
		Property::border_image_source,
		Property::border_image_slice,
		Property::border_image_width,
		Property::border_image_outset,
		Property::border_image_repeat,
		Property::UNKNOWN
	};

	static const Property::Id gMarkerSubpropTable[] = {
		Property::marker_start,
		Property::marker_mid,
		Property::marker_end,
		Property::UNKNOWN
	};

	// Subproperty tables for shorthands that are just aliases with
	// different parsing rules.
	static const Property::Id gMozTransformSubpropTable[] = {
		Property::transform,
		Property::UNKNOWN
	};
	///end region

	//COUNT - COUNT_no_shorthands
	const Property::Id *const Property::kSubpropertyTable[] = {
#define CSS_PROP_PUBLIC_OR_PRIVATE(publicname_, privatename_) privatename_
			// Need an extra level of macro nesting to force expansion of method_
			// params before they get pasted.
#define NSCSSPROPS_INNER_MACRO(method_) g##method_##SubpropTable,
#define CSS_PROP_SHORTHAND(name_, id_, method_, flags_, pref_) \
	NSCSSPROPS_INNER_MACRO(method_)
#include "css_property_define.h"
#undef CSS_PROP_SHORTHAND
#undef NSCSSPROPS_INNER_MACRO
#undef CSS_PROP_PUBLIC_OR_PRIVATE
	};

	class PropertyTable
	{
	public:
		static PropertyTable* GetInstance() {
			return Singleton<PropertyTable>::get();
		}

		Property::Id Lookup(const std::string& in)
		{
			std::string key = StringToLowerASCII(in);
			if (property_name_map_.count(key))
				return property_name_map_.at(key);
			return Property::UNKNOWN;
		}
		Property::Id* ShorthandsContaining(Property::Id aProperty)
		{
			DCHECK(0 <= aProperty && aProperty < Property::COUNT_no_shorthands)
				<<"out of range";
			return shorthands_table_[aProperty];
		}
	private:
		PropertyTable()
		{
			for (int i = 0; i< Property::COUNT; i++)
			{
				std::string key(kCSSRawProperties[i]);
				StringToLowerASCII(&key);
				property_name_map_.insert(std::make_pair(key, (Property::Id)i));
			}
			BuildShorthands();
		}

		void BuildShorthands()
		{

		}

		std::unordered_map<std::string, Property::Id> property_name_map_;
		//非短记属性->短记属性列表
		Property::Id* shorthands_table_[Property::COUNT_no_shorthands];
		friend struct DefaultSingletonTraits<PropertyTable>;
		DISALLOW_COPY_AND_ASSIGN(PropertyTable);
	};

	Property::Id Property::LookupProperty( const std::string& aProperty)
	{
		return PropertyTable::GetInstance()->Lookup(aProperty);
	}

	const char* Property::GetStringValue( Property::Id aProperty )
	{
		if (0 <= aProperty && aProperty < COUNT)
			return kCSSRawProperties[(int)aProperty];
		return "";
	}

	const char* Property::LookupPropertyValue( Id aProp, int32 aValue )
	{
		DCHECK(aProp >= 0 && aProp < COUNT) <<	"property out of range";

		const int32_t* kwtable = nullptr;
		if (aProp < COUNT_no_shorthands)
			kwtable = kKeywordTableTable[aProp];

		if (kwtable)
			return ValueToKeyword(aValue, kwtable);

		return "";
	}

	bool Property::GetColorName( int32 aPropValue, std::string &aStr )
	{
		bool rv = false;

		// first get the keyword corresponding to the property Value from the color table
		Keyword::Id keyword = ValueToKeywordEnum(aPropValue, kColorKTable);

		// next get the name as a string from the keywords table
		if (keyword != Keyword::UNKNOWN) {
			//nsCSSKeywords::AddRefTable();
			aStr = Keyword::GetStringValue(keyword);
			//nsCSSKeywords::ReleaseTable();
			rv = true;
		}
		return rv;
	}

	int32 Property::FindIndexOfKeyword( Id aKeyword, const int32 aTable[] )
	{
		int32 index = 0;
		while (UNKNOWN != aTable[index]) {
			if (aKeyword == aTable[index]) {
				return index;
			}
			index += 2;
		}
		return -1;
	}

	bool Property::FindKeyword( Id aKeyword, const int32 aTable[], int32& aResult )
	{
		int32_t index = FindIndexOfKeyword(aKeyword, aTable);
		if (index >= 0) {
			aResult = aTable[index + 1];
			return true;
		}
		return false;
	}

	Keyword::Id Property::ValueToKeywordEnum( int32 aValue, const int32 aTable[] )
	{
		int32 i = 1;
		for (;;) {
			if (aTable[i] == -1 && aTable[i-1] == Keyword::UNKNOWN) {
				break;
			}
			if (aValue == aTable[i]) {
				return Keyword::Id(aTable[i-1]);
			}
			i += 2;
		}
		return Keyword::UNKNOWN;
	}

	const char* Property::ValueToKeyword( int32 aValue, const int32 aTable[] )
	{
		Keyword::Id keyword = ValueToKeywordEnum(aValue, aTable);
		if (keyword == Keyword::UNKNOWN) {
			return "";
		} else {
			return Keyword::GetStringValue(keyword);
		}
	}

	const Property::Id * Property::ShorthandsContaining( Id aProperty )
	{
		return PropertyTable::GetInstance()->ShorthandsContaining(aProperty);
	}

	

	

}