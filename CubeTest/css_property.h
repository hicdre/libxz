#pragma once
#include "base/basictypes.h"
#include "base/memory/scoped_ptr.h"
#include "css_const.h"
#include <string>

namespace css
{
	class Property
	{
	public:

		enum EnabledState {
			eEnabled,
			eAny
		};

		static PropertyId LookupProperty(const std::string& aProperty,
			EnabledState aEnabled);

		static inline bool IsShorthand(PropertyId aProperty) {
			//NS_ABORT_IF_FALSE(0 <= aProperty && aProperty < eCSSProperty_COUNT,
			//	"out of range");
			return (aProperty >= Property_CountNoShorthands);
		}

		static const char* GetStringValue(PropertyId aProperty);

	private:
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