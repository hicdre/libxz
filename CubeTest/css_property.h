#pragma once
#include "base/basictypes.h"
#include "base/memory/scoped_ptr.h"
#include "base/logging.h"
#include <string>

#include "css_keyword.h"

namespace css
{
	enum PropertyFlag
	{
		FLAG_DIRECTIONAL_SOURCE = (1<<0),
		FLAG_VALUE_LIST_USES_COMMAS = (1<<1), /* otherwise spaces */
		FLAG_APPLIES_TO_FIRST_LETTER = (1<<2),
		FLAG_APPLIES_TO_FIRST_LINE = (1<<3),
		FLAG_IGNORED_WHEN_COLORS_DISABLED = (1<<4),
		FLAG_START_IMAGE_LOADS = (1<<5),
		FLAG_IMAGE_IS_IN_ARRAY_0 = (1<<6),
		FLAG_REPORT_OTHER_NAME = (1<<7),
		FLAG_STORES_CALC = (1<<8),
		FLAG_PARSE_PROPERTY_MASK = (7<<9),
		FLAG_PARSE_INACCESSIBLE = (1<<9),
		FLAG_PARSE_FUNCTION = (2<<9),
		FLAG_PARSE_VALUE = (3<<9),
		FLAG_PARSE_VALUE_LIST = (4<<9),
		FLAG_VALUE_PARSER_FUNCTION = (1<<12),
		FLAG_VALUE_RESTRICTION_MASK = (3<<13),
		FLAG_VALUE_NONNEGATIVE = (1<<13),
		FLAG_VALUE_AT_LEAST_ONE = (2<<13),
		FLAG_HASHLESS_COLOR_QUIRK = (1<<15),
		FLAG_UNITLESS_LENGTH_QUIRK = (1<<16),
		FLAG_IS_ALIAS = (1<<17),
		FLAG_APPLIES_TO_PLACEHOLDER = (1<<18),
		FLAG_APPLIES_TO_PAGE_RULE = (1<<19),
		FLAG_APPLIES_TO_FIRST_LETTER_AND_FIRST_LINE = FLAG_APPLIES_TO_FIRST_LETTER | FLAG_APPLIES_TO_FIRST_LINE,
	};

	class Property
	{
	public:
		enum Id {
			UNKNOWN = -1,

#define CSS_PROP(name_, id_, method_, flags_, pref_, parsevariant_, \
	kwtable_, stylestruct_, stylestructoffset_, animtype_) \
	id_,
#include "css_property_define.h"
#undef CSS_PROP

			COUNT_no_shorthands,
			// Make the count continue where it left off:
			COUNT_DUMMY = COUNT_no_shorthands - 1,

#define CSS_PROP_SHORTHAND(name_, id_, method_, flags_, pref_) \
	id_,
#include "css_property_define.h"
#undef CSS_PROP_SHORTHAND

			COUNT,
			// Make the count continue where it left off:
			COUNT_DUMMY2 = COUNT - 1,
			//no aliases
			COUNT_with_aliases,
			// Make the count continue where it left off:
			COUNT_DUMMY3 = COUNT_with_aliases - 1,

			// Some of the values below could probably overlap with each other
			// if we had a need for them to do so.

			// Extra values for use in the values of the 'transition-property'
			// property.
			Extra_no_properties,
			Extra_all_properties,

			// Extra dummy values for nsCSSParser internal use.
			Extra_x_none_value,
			Extra_x_auto_value
		};

		static Id LookupProperty(const std::string& aProperty);

		static inline bool IsShorthand(Id aProperty) {
			DCHECK(0 <= aProperty && aProperty < COUNT) << "out of range";
			return (aProperty >= COUNT_no_shorthands);
		}

		static const char* GetStringValue(Id aProperty);

		// Given a CSS Property and a Property Enum Value
		// Return back a const nsString& representation of the 
		// value. Return back nullstr if no value is found
		static const char* LookupPropertyValue(Id aProperty, int32 aValue);

		// Get a color name for a predefined color value like buttonhighlight or activeborder
		// Sets the aStr param to the name of the propertyID
		static bool GetColorName(int32 aPropID, std::string &aStr);

		// Returns the index of |aKeyword| in |aTable|, if it exists there;
		// otherwise, returns -1.
		// NOTE: Generally, clients should call FindKeyword() instead of this method.
		static int32 FindIndexOfKeyword(Id aKeyword, const int32 aTable[]);

		// Find |aKeyword| in |aTable|, if found set |aValue| to its corresponding value.
		// If not found, return false and do not set |aValue|.
		static bool FindKeyword(Id aKeyword, const int32 aTable[], int32& aValue);

		// Return the first keyword in |aTable| that has the corresponding value |aValue|.
		// Return |eCSSKeyword_UNKNOWN| if not found.
		static Keyword::Id ValueToKeywordEnum(int32 aValue, const int32 aTable[]);
		// Ditto but as a string, return "" when not found.
		static const char* ValueToKeyword(int32 aValue, const int32 aTable[]);

	private:
		static const uint32 kFlagsTable[];//COUNT
	public:
		static inline bool PropHasFlags(Id aProperty, uint32 aFlags)
		{
			DCHECK(0 <= aProperty && aProperty < COUNT)
				<<"out of range";
			return (kFlagsTable[aProperty] & aFlags) == aFlags;
		}

		static inline uint32 PropertyParseType(Id aProperty)
		{
			DCHECK(0 <= aProperty && aProperty < COUNT)
				<<"out of range";
			return kFlagsTable[aProperty] &
				FLAG_PARSE_PROPERTY_MASK;
		}

		static inline uint32 ValueRestrictions(Id aProperty)
		{
			DCHECK(0 <= aProperty && aProperty < COUNT)
				<<"out of range";
			return kFlagsTable[aProperty] &
				FLAG_VALUE_RESTRICTION_MASK;
		}
	private:
		// Lives in nsCSSParser.cpp for the macros it depends on.
		static const uint32 kParserVariantTable[];//COUNT_no_shorthands

	public:
		static inline uint32 ParserVariant(Id aProperty) {
			DCHECK(0 <= aProperty && aProperty < COUNT_no_shorthands)
				<<"out of range";
			return kParserVariantTable[aProperty];
		}

	private:
		// A table for shorthand properties.  The appropriate index is the
		// property ID minus eCSSProperty_COUNT_no_shorthands.
		static const Id *const
			kSubpropertyTable[COUNT - COUNT_no_shorthands];

	public:
		static inline const Id * SubpropertyEntryFor(Id aProperty) {
			DCHECK(COUNT_no_shorthands <= aProperty && aProperty < COUNT)
				<<"out of range";
			return kSubpropertyTable[aProperty - COUNT_no_shorthands];
		}

		// Returns an eCSSProperty_UNKNOWN-terminated array of the shorthand
		// properties containing |aProperty|, sorted from those that contain
		// the most properties to those that contain the least.
		static const Id * ShorthandsContaining(Id aProperty);
	private:
		static const int32* kKeywordTableTable[];
		static const int32 kAnimationDirectionKTable[];
		static const int32 kAnimationFillModeKTable[];
		static const int32 kAnimationIterationCountKTable[];
		static const int32 kAnimationPlayStateKTable[];
		static const int32 kAnimationTimingFunctionKTable[];
		static const int32 kAppearanceKTable[];
		static const int32 kAzimuthKTable[];
		static const int32 kBackfaceVisibilityKTable[];
		static const int32 kTransformStyleKTable[];
		static const int32 kBackgroundAttachmentKTable[];
		static const int32 kBackgroundInlinePolicyKTable[];
		static const int32 kBackgroundOriginKTable[];
		static const int32 kBackgroundPositionKTable[];
		static const int32 kBackgroundRepeatKTable[];
		static const int32 kBackgroundRepeatPartKTable[];
		static const int32 kBackgroundSizeKTable[];
		static const int32 kBorderCollapseKTable[];
		static const int32 kBorderColorKTable[];
		static const int32 kBorderImageRepeatKTable[];
		static const int32 kBorderImageSliceKTable[];
		static const int32 kBorderStyleKTable[];
		static const int32 kBorderWidthKTable[];
		static const int32 kBoxAlignKTable[];
		static const int32 kBoxDirectionKTable[];
		static const int32 kBoxOrientKTable[];
		static const int32 kBoxPackKTable[];
		static const int32 kDominantBaselineKTable[];
		static const int32 kFillRuleKTable[];
		static const int32 kImageRenderingKTable[];
		static const int32 kShapeRenderingKTable[];
		static const int32 kStrokeLinecapKTable[];
		static const int32 kStrokeLinejoinKTable[];
		static const int32 kStrokeObjectValueKTable[];
		static const int32 kVectorEffectKTable[];
		static const int32 kTextAnchorKTable[];
		static const int32 kTextRenderingKTable[];
		static const int32 kColorInterpolationKTable[];
		static const int32 kColumnFillKTable[];
		static const int32 kBoxPropSourceKTable[];
		static const int32 kBoxShadowTypeKTable[];
		static const int32 kBoxSizingKTable[];
		static const int32 kCaptionSideKTable[];
		static const int32 kClearKTable[];
		static const int32 kColorKTable[];
		static const int32 kContentKTable[];
		static const int32 kCursorKTable[];
		static const int32 kDirectionKTable[];
		// Not const becau we modify its entries when CSS prefs change.
		static const int32 kDisplayKTable[];
		static const int32 kElevationKTable[];
		static const int32 kEmptyCellsKTable[];
		static const int32 kFloatKTable[];
		static const int32 kFloatEdgeKTable[];
		static const int32 kFontKTable[];
		static const int32 kFontSizeKTable[];
		static const int32 kFontStretchKTable[];
		static const int32 kFontStyleKTable[];
		static const int32 kFontVariantKTable[];
		static const int32 kFontWeightKTable[];
		static const int32 kIMEModeKTable[];
		static const int32 kLineHeightKTable[];
		static const int32 kListStylePositionKTable[];
		static const int32 kListStyleKTable[];
		static const int32 kMaskTypeKTable[];
		static const int32 kObjectOpacityKTable[];
		static const int32 kObjectPatternKTable[];
		static const int32 kOrientKTable[];
		static const int32 kOutlineStyleKTable[];
		static const int32 kOutlineColorKTable[];
		static const int32 kOverflowKTable[];
		static const int32 kOverflowSubKTable[];
		static const int32 kPageBreakKTable[];
		static const int32 kPageBreakInsideKTable[];
		static const int32 kPageMarksKTable[];
		static const int32 kPageSizeKTable[];
		static const int32 kPitchKTable[];
		static const int32 kPointerEventsKTable[];
		static const int32 kPositionKTable[];
		static const int32 kRadialGradientShapeKTable[];
		static const int32 kRadialGradientSizeKTable[];
		static const int32 kRadialGradientLegacySizeKTable[];
		static const int32 kResizeKTable[];
		static const int32 kSpeakKTable[];
		static const int32 kSpeakHeaderKTable[];
		static const int32 kSpeakNumeralKTable[];
		static const int32 kSpeakPunctuationKTable[];
		static const int32 kSpeechRateKTable[];
		static const int32 kStackSizingKTable[];
		static const int32 kTableLayoutKTable[];
		static const int32 kTextAlignKTable[];
		static const int32 kTextAlignLastKTable[];
		static const int32 kTextBlinkKTable[];
		static const int32 kTextDecorationLineKTable[];
		static const int32 kTextDecorationStyleKTable[];
		static const int32 kTextOverflowKTable[];
		static const int32 kTextTransformKTable[];
		static const int32 kTransitionTimingFunctionKTable[];
		static const int32 kUnicodeBidiKTable[];
		static const int32 kUserFocusKTable[];
		static const int32 kUserInputKTable[];
		static const int32 kUserModifyKTable[];
		static const int32 kUserSelectKTable[];
		static const int32 kVerticalAlignKTable[];
		static const int32 kVisibilityKTable[];
		static const int32 kVolumeKTable[];
		static const int32 kWhitespaceKTable[];
		static const int32 kWidthKTable[]; // also min-width, max-width
		static const int32 kWindowShadowKTable[];
		static const int32 kWordBreakKTable[];
		static const int32 kWordWrapKTable[];
		static const int32 kHyphensKTable[];
	};
}