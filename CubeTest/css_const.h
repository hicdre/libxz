#pragma once

namespace css
{
	enum PropertyId
	{
		Property_Unknown = -1,
		/// <summary>
		/// Longhand property "-moz-appearance".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "appearance" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-appearance
		/// </summary>
		Property_Appearance,
		/// <summary>
		/// Longhand property "-moz-outline-radius-topleft".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "outline-radius-topleft" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-outline-radius-topleft
		/// </summary>
		Property_MozOutlineRadiusTopLeft,
		/// <summary>
		/// Longhand property "-moz-outline-radius-topright".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "outline-radius-topright" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-outline-radius-topright
		/// </summary>
		Property_MozOutlineRadiusTopRight,
		/// <summary>
		/// Longhand property "-moz-outline-radius-bottomright".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "outline-radius-bottomright" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-outline-radius-bottomright
		/// </summary>
		Property_MozOutlineRadiusBottomRight,
		/// <summary>
		/// Longhand property "-moz-outline-radius-bottomleft".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "outline-radius-bottomleft" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-outline-radius-bottomleft
		/// </summary>
		Property_MozOutlineRadiusBottomLeft,
		/// <summary>
		/// Longhand property "-moz-tab-size".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "tab-size" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-tab-size
		/// </summary>
		Property_MozTabSize,
		/// <summary>
		/// Longhand property "-x-system-font".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "system-font" is not supported.
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-x-system-font
		/// </summary>
		Property_XSystemFont,
		/// <summary>
		/// Longhand property "animation-delay".
		/// The property contains a list of values of one of the following types:
		///   <see cref='CssValue.Float'>time</see> (<see cref='CssUnit.Seconds'/> etc.).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-delay
		/// </summary>
		Property_AnimationDelay,
		/// <summary>
		/// Longhand property "animation-direction".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-direction
		/// </summary>
		Property_AnimationDirection,
		/// <summary>
		/// Longhand property "animation-duration".
		/// The property contains a list of values of one of the following types:
		///   <see cref='CssValue.Float'>time</see> (<see cref='CssUnit.Seconds'/> etc.).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-duration
		/// </summary>
		Property_AnimationDuration,
		/// <summary>
		/// Longhand property "animation-fill-mode".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-fill-mode
		/// </summary>
		Property_AnimationFillMode,
		/// <summary>
		/// Longhand property "animation-iteration-count".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-iteration-count
		/// </summary>
		Property_AnimationIterationCount,
		/// <summary>
		/// Longhand property "animation-name".
		/// The property contains a list of values of one of the following types:
		///   none (<see cref='CssUnit.None'/>),
		///   <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-name
		/// </summary>
		Property_AnimationName,
		/// <summary>
		/// Longhand property "animation-play-state".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-play-state
		/// </summary>
		Property_AnimationPlayState,
		/// <summary>
		/// Longhand property "animation-timing-function".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Array'>cubic-bezier() or steps()</see> (<see cref='CssUnit.CubicBezier'/> or <see cref='CssUnit.Steps'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation-timing-function
		/// </summary>
		Property_AnimationTimingFunction,
		/// <summary>
		/// Longhand property "background-attachment".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-attachment
		/// </summary>
		Property_BackgroundAttachment,
		/// <summary>
		/// Longhand property "background-clip".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-clip
		/// </summary>
		Property_BackgroundClip,
		/// <summary>
		/// Longhand property "background-color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-color
		/// </summary>
		Property_BackgroundColor,
		/// <summary>
		/// Longhand property "background-image".
		/// The property contains a list of values of one of the following types:
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>), none (<see cref='CssUnit.None'/>), <see cref='CssValue.Gradient'>gradient</see> (<see cref='CssUnit.Gradient'/>), <see cref='CssValue.Array'>function</see> (<see cref='CssUnit.Function'/>), <see cref='CssValue.String'>element</see> (<see cref='CssUnit.Element'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-image
		/// </summary>
		Property_BackgroundImage,
		/// <summary>
		/// Longhand property "-moz-background-inline-policy".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "background-inline-policy" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-background-inline-policy
		/// </summary>
		Property_MozBackgroundInlinePolicy,
		/// <summary>
		/// Longhand property "background-origin".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-origin
		/// </summary>
		Property_BackgroundOrigin,
		/// <summary>
		/// Longhand property "background-position".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-position
		/// </summary>
		Property_BackgroundPosition,
		/// <summary>
		/// Longhand property "background-repeat".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-repeat
		/// </summary>
		Property_BackgroundRepeat,
		/// <summary>
		/// Longhand property "background-size".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background-size
		/// </summary>
		Property_BackgroundSize,
		/// <summary>
		/// Longhand property "-moz-binding".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "binding" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-binding
		/// </summary>
		Property_Binding,
		/// <summary>
		/// Longhand property "border-bottom-color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-bottom-color
		/// </summary>
		Property_BorderBottomColor,
		/// <summary>
		/// Longhand property "-moz-border-bottom-colors".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-bottom-colors" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-bottom-colors
		/// </summary>
		Property_BorderBottomColors,
		/// <summary>
		/// Longhand property "border-bottom-style".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-bottom-style
		/// </summary>
		Property_BorderBottomStyle,
		/// <summary>
		/// Longhand property "border-bottom-width".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-bottom-width
		/// </summary>
		Property_BorderBottomWidth,
		/// <summary>
		/// Longhand property "border-collapse".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-collapse
		/// </summary>
		Property_BorderCollapse,
		/// <summary>
		/// Longhand property "border-end-color-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-end-color-value
		/// </summary>		
		Property_BorderEndColorValue,
		/// <summary>
		/// Longhand property "border-end-style-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-end-style-value
		/// </summary>
		Property_BorderEndStyleValue,
		/// <summary>
		/// Longhand property "border-end-width-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-end-width-value
		/// </summary>
		Property_BorderEndWidthValue,
		/// <summary>
		/// Longhand property "border-image-source".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-image-source
		/// </summary>
		Property_BorderImageSource,
		/// <summary>
		/// Longhand property "border-image-slice".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-image-slice
		/// </summary>
		Property_BorderImageSlice,
		/// <summary>
		/// Longhand property "border-image-width".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-image-width
		/// </summary>
		Property_BorderImageWidth,
		/// <summary>
		/// Longhand property "border-image-outset".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-image-outset
		/// </summary>
		Property_BorderImageOutset,
		/// <summary>
		/// Longhand property "border-image-repeat".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-image-repeat
		/// </summary>
		Property_BorderImageRepeat,
		/// <summary>
		/// Longhand property "border-left-color-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-color-value
		/// </summary>
		Property_BorderLeftColorValue,
		/// <summary>
		/// Longhand property "border-left-color-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-color-ltr-source
		/// </summary>
		Property_BorderLeftColorLtrSource,
		/// <summary>
		/// Longhand property "border-left-color-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-color-rtl-source
		/// </summary>
		Property_BorderLeftColorRtlSource,
		/// <summary>
		/// Longhand property "-moz-border-left-colors".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-left-colors" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-left-colors
		/// </summary>

		Property_BorderLeftColors,
		/// <summary>
		/// Longhand property "border-left-style-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-style-value
		/// </summary>
		Property_BorderLeftStyleValue,
		/// <summary>
		/// Longhand property "border-left-style-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-style-ltr-source
		/// </summary>
		Property_BorderLeftStyleLtrSource,
		/// <summary>
		/// Longhand property "border-left-style-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-style-rtl-source
		/// </summary>
		Property_BorderLeftStyleRtlSource,
		/// <summary>
		/// Longhand property "border-left-width-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-width-value
		/// </summary>
		Property_BorderLeftWidthValue,
		/// <summary>
		/// Longhand property "border-left-width-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-width-ltr-source
		/// </summary>
		Property_BorderLeftWidthLtrSource,
		/// <summary>
		/// Longhand property "border-left-width-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-width-rtl-source
		/// </summary>
		Property_BorderLeftWidthRtlSource,
		/// <summary>
		/// Longhand property "border-right-color-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-color-value
		/// </summary>
		Property_BorderRightColorValue,
		/// <summary>
		/// Longhand property "border-right-color-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-color-ltr-source
		/// </summary>
		Property_BorderRightColorLtrSource,
		/// <summary>
		/// Longhand property "border-right-color-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-color-rtl-source
		/// </summary>
		Property_BorderRightColorRtlSource,
		/// <summary>
		/// Longhand property "-moz-border-right-colors".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-right-colors" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-right-colors
		/// </summary>
		Property_BorderRightColors,
		/// <summary>
		/// Longhand property "border-right-style-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-style-value
		/// </summary>
		Property_BorderRightStyleValue,
		/// <summary>
		/// Longhand property "border-right-style-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-style-ltr-source
		/// </summary>
		Property_BorderRightStyleLtrSource,
		/// <summary>
		/// Longhand property "border-right-style-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-style-rtl-source
		/// </summary>
		Property_BorderRightStyleRtlSource,
		/// <summary>
		/// Longhand property "border-right-width-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-width-value
		/// </summary>
		Property_BorderRightWidthValue,
		/// <summary>
		/// Longhand property "border-right-width-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-width-ltr-source
		/// </summary>
		Property_BorderRightWidthLtrSource,
		/// <summary>
		/// Longhand property "border-right-width-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-width-rtl-source
		/// </summary>

		Property_BorderRightWidthRtlSource,
		/// <summary>
		/// Longhand property "border-spacing".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-spacing
		/// </summary>
		Property_BorderSpacing,
		/// <summary>
		/// Longhand property "border-start-color-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-start-color-value
		/// </summary>

		Property_BorderStartColorValue,
		/// <summary>
		/// Longhand property "border-start-style-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-start-style-value
		/// </summary>

		Property_BorderStartStyleValue,
		/// <summary>
		/// Longhand property "border-start-width-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-start-width-value
		/// </summary>
		Property_BorderStartWidthValue,
		/// <summary>
		/// Longhand property "border-top-color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-top-color
		/// </summary>
		Property_BorderTopColor,
		/// <summary>
		/// Longhand property "-moz-border-top-colors".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-top-colors" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-top-colors
		/// </summary>
		Property_BorderTopColors,
		/// <summary>
		/// Longhand property "border-top-style".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-top-style
		/// </summary>
		Property_BorderTopStyle,
		/// <summary>
		/// Longhand property "border-top-width".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-top-width
		/// </summary>
		Property_BorderTopWidth,
		/// <summary>
		/// Longhand property "border-top-left-radius".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-top-left-radius
		/// </summary>
		Property_BorderTopLeftRadius,
		/// <summary>
		/// Longhand property "border-top-right-radius".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-top-right-radius
		/// </summary>
		Property_BorderTopRightRadius,
		/// <summary>
		/// Longhand property "border-bottom-right-radius".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-bottom-right-radius
		/// </summary>
		Property_BorderBottomRightRadius,
		/// <summary>
		/// Longhand property "border-bottom-left-radius".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-bottom-left-radius
		/// </summary>
		Property_BorderBottomLeftRadius,
		/// <summary>
		/// Longhand property "bottom".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/bottom
		/// </summary>
		Property_Bottom,
		/// <summary>
		/// Longhand property "box-shadow".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/box-shadow
		/// </summary>
		Property_BoxShadow,
		/// <summary>
		/// Longhand property "-moz-box-sizing".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "box-sizing" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-box-sizing
		/// </summary>

		Property_BoxSizing,
		/// <summary>
		/// Longhand property "caption-side".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/caption-side
		/// </summary>
		Property_CaptionSide,
		/// <summary>
		/// Longhand property "clear".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/clear
		/// </summary>
		Property_Clear,
		/// <summary>
		/// Longhand property "clip".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/clip
		/// </summary>
		Property_Clip,
		/// <summary>
		/// Longhand property "color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/color
		/// </summary>
		Property_Color,
		/// <summary>
		/// Longhand property "-moz-column-count".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-count" is not supported.
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-count
		/// </summary>

		Property_MozColumnCount,
		/// <summary>
		/// Longhand property "-moz-column-fill".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-fill" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-fill
		/// </summary>

		Property_MozColumnFill,
		/// <summary>
		/// Longhand property "-moz-column-width".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-width" is not supported.
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-width
		/// </summary>

		Property_MozColumnWidth,
		/// <summary>
		/// Longhand property "-moz-column-gap".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-gap" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   normal (<see cref='CssUnit.Normal'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-gap
		/// </summary>

		Property_MozColumnGap,
		/// <summary>
		/// Longhand property "-moz-column-rule-color".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-rule-color" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-rule-color
		/// </summary>

		Property_MozColumnRuleColor,
		/// <summary>
		/// Longhand property "-moz-column-rule-style".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-rule-style" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-rule-style
		/// </summary>

		Property_MozColumnRuleStyle,
		/// <summary>
		/// Longhand property "-moz-column-rule-width".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-rule-width" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-rule-width
		/// </summary>

		Property_MozColumnRuleWidth,
		/// <summary>
		/// Longhand property "content".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/content
		/// </summary>
		Property_Content,
		/// <summary>
		/// Longhand property "counter-increment".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/counter-increment
		/// </summary>
		Property_CounterIncrement,
		/// <summary>
		/// Longhand property "counter-reset".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/counter-reset
		/// </summary>
		Property_CounterReset,
		/// <summary>
		/// Longhand property "cursor".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/cursor
		/// </summary>
		Property_Cursor,
		/// <summary>
		/// Longhand property "direction".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/direction
		/// </summary>
		Property_Direction,
		/// <summary>
		/// Longhand property "display".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/display
		/// </summary>
		Property_Display,
		/// <summary>
		/// Longhand property "empty-cells".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/empty-cells
		/// </summary>
		Property_EmptyCells,
		/// <summary>
		/// Longhand property "align-items".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/align-items
		/// </summary>
		Property_AlignItems,
		/// <summary>
		/// Longhand property "align-self".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/align-self
		/// </summary>
		Property_AlignSelf,
		/// <summary>
		/// Longhand property "flex-basis".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/flex-basis
		/// </summary>
		Property_FlexBasis,
		/// <summary>
		/// Longhand property "flex-direction".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/flex-direction
		/// </summary>
		Property_FlexDirection,
		/// <summary>
		/// Longhand property "flex-grow".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/flex-grow
		/// </summary>
		Property_FlexGrow,
		/// <summary>
		/// Longhand property "flex-shrink".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/flex-shrink
		/// </summary>
		Property_FlexShrink,
		/// <summary>
		/// Longhand property "order".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/order
		/// </summary>
		Property_Order,
		/// <summary>
		/// Longhand property "justify-content".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/justify-content
		/// </summary>
		Property_JustifyContent,
		/// <summary>
		/// Longhand property "float".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/float
		/// </summary>
		Property_Float,
		/// <summary>
		/// Longhand property "-moz-float-edge".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "float-edge" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-float-edge
		/// </summary>

		Property_FloatEdge,
		/// <summary>
		/// Longhand property "font-family".
		/// The property contains a single value of one of the following types:
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font-family
		/// </summary>
		Property_FontFamily,
		/// <summary>
		/// Longhand property "-moz-font-feature-settings".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "font-feature-settings" is not supported.
		/// The property contains a single value of one of the following types:
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-font-feature-settings
		/// </summary>

		Property_FontFeatureSettings,
		/// <summary>
		/// Longhand property "-moz-font-language-override".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "font-language-override" is not supported.
		/// The property contains a single value of one of the following types:
		///   normal (<see cref='CssUnit.Normal'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.String'>string</see> (<see cref='CssUnit.String'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-font-language-override
		/// </summary>

		Property_FontLanguageOverride,
		/// <summary>
		/// Longhand property "font-size".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   system font (<see cref='CssUnit.SystemFont'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font-size
		/// </summary>
		Property_FontSize,
		/// <summary>
		/// Longhand property "font-size-adjust".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   none (<see cref='CssUnit.None'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>),
		///   system font (<see cref='CssUnit.SystemFont'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font-size-adjust
		/// </summary>
		Property_FontSizeAdjust,
		/// <summary>
		/// Longhand property "font-stretch".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   system font (<see cref='CssUnit.SystemFont'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font-stretch
		/// </summary>
		Property_FontStretch,
		/// <summary>
		/// Longhand property "font-style".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   system font (<see cref='CssUnit.SystemFont'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font-style
		/// </summary>
		Property_FontStyle,
		/// <summary>
		/// Longhand property "font-variant".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   system font (<see cref='CssUnit.SystemFont'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font-variant
		/// </summary>
		Property_FontVariant,
		/// <summary>
		/// Longhand property "font-weight".
		/// The property contains a single value of one of the following types:
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font-weight
		/// </summary>
		Property_FontWeight,
		/// <summary>
		/// Longhand property "-moz-force-broken-image-icon".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "force-broken-image-icon" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-force-broken-image-icon
		/// </summary>

		Property_ForceBrokenImageIcon,
		/// <summary>
		/// Longhand property "height".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/height
		/// </summary>
		Property_Height,
		/// <summary>
		/// Longhand property "-moz-image-region".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "image-region" is not supported.
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-image-region
		/// </summary>

		Property_ImageRegion,
		/// <summary>
		/// Longhand property "ime-mode".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/ime-mode
		/// </summary>
		Property_ImeMode,
		/// <summary>
		/// Longhand property "left".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/left
		/// </summary>
		Property_Left,
		/// <summary>
		/// Longhand property "letter-spacing".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   normal (<see cref='CssUnit.Normal'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/letter-spacing
		/// </summary>
		Property_LetterSpacing,
		/// <summary>
		/// Longhand property "line-height".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   normal (<see cref='CssUnit.Normal'/>),
		///   system font (<see cref='CssUnit.SystemFont'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/line-height
		/// </summary>
		Property_LineHeight,
		/// <summary>
		/// Longhand property "list-style-image".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/list-style-image
		/// </summary>
		Property_ListStyleImage,
		/// <summary>
		/// Longhand property "list-style-position".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/list-style-position
		/// </summary>
		Property_ListStylePosition,
		/// <summary>
		/// Longhand property "list-style-type".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/list-style-type
		/// </summary>
		Property_ListStyleType,
		/// <summary>
		/// Longhand property "margin-bottom".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-bottom
		/// </summary>
		Property_MarginBottom,
		/// <summary>
		/// Longhand property "margin-end-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-end-value
		/// </summary>

		Property_MarginEndValue,
		/// <summary>
		/// Longhand property "margin-left-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-left-value
		/// </summary>

		Property_MarginLeftValue,
		/// <summary>
		/// Longhand property "margin-left-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-left-ltr-source
		/// </summary>

		Property_MarginLeftLtrSource,
		/// <summary>
		/// Longhand property "margin-left-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-left-rtl-source
		/// </summary>

		Property_MarginLeftRtlSource,
		/// <summary>
		/// Longhand property "margin-right-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-right-value
		/// </summary>

		Property_MarginRightValue,
		/// <summary>
		/// Longhand property "margin-right-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-right-ltr-source
		/// </summary>

		Property_MarginRightLtrSource,
		/// <summary>
		/// Longhand property "margin-right-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-right-rtl-source
		/// </summary>

		Property_MarginRightRtlSource,
		/// <summary>
		/// Longhand property "margin-start-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-start-value
		/// </summary>

		Property_MarginStartValue,
		/// <summary>
		/// Longhand property "margin-top".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-top
		/// </summary>
		Property_MarginTop,
		/// <summary>
		/// Longhand property "marker-offset".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/marker-offset
		/// </summary>
		Property_MarkerOffset,
		/// <summary>
		/// Longhand property "marks".
		/// The property contains a single value of one of the following types:
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/marks
		/// </summary>
		Property_Marks,
		/// <summary>
		/// Longhand property "max-height".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   none (<see cref='CssUnit.None'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/max-height
		/// </summary>
		Property_MaxHeight,
		/// <summary>
		/// Longhand property "max-width".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   none (<see cref='CssUnit.None'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/max-width
		/// </summary>
		Property_MaxWidth,
		/// <summary>
		/// Longhand property "min-height".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/min-height
		/// </summary>
		Property_MinHeight,
		/// <summary>
		/// Longhand property "min-width".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/min-width
		/// </summary>
		Property_MinWidth,
		/// <summary>
		/// Longhand property "opacity".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/opacity
		/// </summary>
		Property_Opacity,
		/// <summary>
		/// Longhand property "-moz-orient".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "orient" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-orient
		/// </summary>

		Property_Orient,
		/// <summary>
		/// Longhand property "orphans".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/orphans
		/// </summary>
		Property_Orphans,
		/// <summary>
		/// Longhand property "outline-color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/outline-color
		/// </summary>
		Property_OutlineColor,
		/// <summary>
		/// Longhand property "outline-style".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/outline-style
		/// </summary>
		Property_OutlineStyle,
		/// <summary>
		/// Longhand property "outline-width".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/outline-width
		/// </summary>
		Property_OutlineWidth,
		/// <summary>
		/// Longhand property "outline-offset".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/outline-offset
		/// </summary>
		Property_OutlineOffset,
		/// <summary>
		/// Longhand property "overflow-x".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/overflow-x
		/// </summary>
		Property_OverflowX,
		/// <summary>
		/// Longhand property "overflow-y".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/overflow-y
		/// </summary>
		Property_OverflowY,
		/// <summary>
		/// Longhand property "padding-bottom".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-bottom
		/// </summary>
		Property_PaddingBottom,
		/// <summary>
		/// Longhand property "padding-end-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-end-value
		/// </summary>

		Property_PaddingEndValue,
		/// <summary>
		/// Longhand property "padding-left-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-left-value
		/// </summary>

		Property_PaddingLeftValue,
		/// <summary>
		/// Longhand property "padding-left-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-left-ltr-source
		/// </summary>

		Property_PaddingLeftLtrSource,
		/// <summary>
		/// Longhand property "padding-left-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-left-rtl-source
		/// </summary>

		Property_PaddingLeftRtlSource,
		/// <summary>
		/// Longhand property "padding-right-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-right-value
		/// </summary>

		Property_PaddingRightValue,
		/// <summary>
		/// Longhand property "padding-right-ltr-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-right-ltr-source
		/// </summary>

		Property_PaddingRightLtrSource,
		/// <summary>
		/// Longhand property "padding-right-rtl-source".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-right-rtl-source
		/// </summary>

		Property_PaddingRightRtlSource,
		/// <summary>
		/// Longhand property "padding-start-value".
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-start-value
		/// </summary>

		Property_PaddingStartValue,
		/// <summary>
		/// Longhand property "padding-top".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-top
		/// </summary>
		Property_PaddingTop,
		/// <summary>
		/// Longhand property "page".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/page
		/// </summary>
		Property_Page,
		/// <summary>
		/// Longhand property "page-break-after".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/page-break-after
		/// </summary>
		Property_PageBreakAfter,
		/// <summary>
		/// Longhand property "page-break-before".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/page-break-before
		/// </summary>
		Property_PageBreakBefore,
		/// <summary>
		/// Longhand property "page-break-inside".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/page-break-inside
		/// </summary>
		Property_PageBreakInside,
		/// <summary>
		/// Longhand property "paint-order".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/paint-order
		/// </summary>
		Property_PaintOrder,
		/// <summary>
		/// Longhand property "pointer-events".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/pointer-events
		/// </summary>
		Property_PointerEvents,
		/// <summary>
		/// Longhand property "position".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/position
		/// </summary>
		Property_Position,
		/// <summary>
		/// Longhand property "quotes".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/quotes
		/// </summary>
		Property_Quotes,
		/// <summary>
		/// Longhand property "resize".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/resize
		/// </summary>
		Property_Resize,
		/// <summary>
		/// Longhand property "right".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/right
		/// </summary>
		Property_Right,
		/// <summary>
		/// Longhand property "size".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/size
		/// </summary>
		Property_Size,
		/// <summary>
		/// Longhand property "table-layout".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/table-layout
		/// </summary>
		Property_TableLayout,
		/// <summary>
		/// Longhand property "text-align".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-align
		/// </summary>
		Property_TextAlign,
		/// <summary>
		/// Longhand property "-moz-text-align-last".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "text-align-last" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-text-align-last
		/// </summary>

		Property_TextAlignLast,
		/// <summary>
		/// Longhand property "-moz-text-blink".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "text-blink" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-text-blink
		/// </summary>

		Property_TextBlink,
		/// <summary>
		/// Longhand property "-moz-text-decoration-color".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "text-decoration-color" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-text-decoration-color
		/// </summary>

		Property_TextDecorationColor,
		/// <summary>
		/// Longhand property "-moz-text-decoration-line".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "text-decoration-line" is not supported.
		/// The property contains a single value of one of the following types:
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-text-decoration-line
		/// </summary>

		Property_TextDecorationLine,
		/// <summary>
		/// Longhand property "-moz-text-decoration-style".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "text-decoration-style" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-text-decoration-style
		/// </summary>

		Property_TextDecorationStyle,
		/// <summary>
		/// Longhand property "text-indent".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-indent
		/// </summary>
		Property_TextIndent,
		/// <summary>
		/// Longhand property "text-overflow".
		/// The property contains a single value of one of the following types:
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-overflow
		/// </summary>
		Property_TextOverflow,
		/// <summary>
		/// Longhand property "text-shadow".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-shadow
		/// </summary>
		Property_TextShadow,
		/// <summary>
		/// Longhand property "-moz-text-size-adjust".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "text-size-adjust" is not supported.
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   none (<see cref='CssUnit.None'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-text-size-adjust
		/// </summary>

		Property_TextSizeAdjust,
		/// <summary>
		/// Longhand property "text-transform".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-transform
		/// </summary>
		Property_TextTransform,
		/// <summary>
		/// Longhand property "transform".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transform
		/// </summary>
		Property_Transform,
		/// <summary>
		/// Longhand property "transform-origin".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transform-origin
		/// </summary>
		Property_TransformOrigin,
		/// <summary>
		/// Longhand property "perspective-origin".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/perspective-origin
		/// </summary>
		Property_PerspectiveOrigin,
		/// <summary>
		/// Longhand property "perspective".
		/// The property contains a single value of one of the following types:
		///   none (<see cref='CssUnit.None'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/perspective
		/// </summary>
		Property_Perspective,
		/// <summary>
		/// Longhand property "transform-style".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transform-style
		/// </summary>
		Property_TransformStyle,
		/// <summary>
		/// Longhand property "backface-visibility".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/backface-visibility
		/// </summary>
		Property_BackfaceVisibility,
		/// <summary>
		/// Longhand property "top".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/top
		/// </summary>
		Property_Top,
		/// <summary>
		/// Longhand property "transition-delay".
		/// The property contains a list of values of one of the following types:
		///   <see cref='CssValue.Float'>time</see> (<see cref='CssUnit.Seconds'/> etc.).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transition-delay
		/// </summary>
		Property_TransitionDelay,
		/// <summary>
		/// Longhand property "transition-duration".
		/// The property contains a list of values of one of the following types:
		///   <see cref='CssValue.Float'>time</see> (<see cref='CssUnit.Seconds'/> etc.).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transition-duration
		/// </summary>
		Property_TransitionDuration,
		/// <summary>
		/// Longhand property "transition-property".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transition-property
		/// </summary>
		Property_TransitionProperty,
		/// <summary>
		/// Longhand property "transition-timing-function".
		/// The property contains a list of values of one of the following types:
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Array'>cubic-bezier() or steps()</see> (<see cref='CssUnit.CubicBezier'/> or <see cref='CssUnit.Steps'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transition-timing-function
		/// </summary>
		Property_TransitionTimingFunction,
		/// <summary>
		/// Longhand property "unicode-bidi".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/unicode-bidi
		/// </summary>
		Property_UnicodeBidi,
		/// <summary>
		/// Longhand property "-moz-user-focus".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "user-focus" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-user-focus
		/// </summary>

		Property_UserFocus,
		/// <summary>
		/// Longhand property "-moz-user-input".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "user-input" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-user-input
		/// </summary>

		Property_UserInput,
		/// <summary>
		/// Longhand property "-moz-user-modify".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "user-modify" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-user-modify
		/// </summary>

		Property_UserModify,
		/// <summary>
		/// Longhand property "-moz-user-select".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "user-select" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-user-select
		/// </summary>

		Property_UserSelect,
		/// <summary>
		/// Longhand property "vertical-align".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/vertical-align
		/// </summary>
		Property_VerticalAlign,
		/// <summary>
		/// Longhand property "visibility".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/visibility
		/// </summary>
		Property_Visibility,
		/// <summary>
		/// Longhand property "white-space".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/white-space
		/// </summary>
		Property_WhiteSpace,
		/// <summary>
		/// Longhand property "widows".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/widows
		/// </summary>
		Property_Widows,
		/// <summary>
		/// Longhand property "width".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/width
		/// </summary>
		Property_Width,
		/// <summary>
		/// Longhand property "-moz-window-shadow".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "window-shadow" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-window-shadow
		/// </summary>

		Property_MozWindowShadow,
		/// <summary>
		/// Longhand property "word-break".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/word-break
		/// </summary>
		Property_WordBreak,
		/// <summary>
		/// Longhand property "word-spacing".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   normal (<see cref='CssUnit.Normal'/>),
		///   <see cref='CssValue.Array'>calc()</see> (<see cref='CssUnit.Calc'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/word-spacing
		/// </summary>
		Property_WordSpacing,
		/// <summary>
		/// Longhand property "word-wrap".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/word-wrap
		/// </summary>
		Property_WordWrap,
		/// <summary>
		/// Longhand property "-moz-hyphens".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "hyphens" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-hyphens
		/// </summary>

		Property_Hyphens,
		/// <summary>
		/// Longhand property "z-index".
		/// The property contains a single value of one of the following types:
		///   auto (<see cref='CssUnit.Auto'/>),
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/z-index
		/// </summary>
		Property_ZIndex,
		/// <summary>
		/// Longhand property "-moz-box-align".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "box-align" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-box-align
		/// </summary>

		Property_BoxAlign,
		/// <summary>
		/// Longhand property "-moz-box-direction".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "box-direction" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-box-direction
		/// </summary>

		Property_BoxDirection,
		/// <summary>
		/// Longhand property "-moz-box-flex".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "box-flex" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-box-flex
		/// </summary>

		Property_BoxFlex,
		/// <summary>
		/// Longhand property "-moz-box-orient".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "box-orient" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-box-orient
		/// </summary>

		Property_BoxOrient,
		/// <summary>
		/// Longhand property "-moz-box-pack".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "box-pack" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-box-pack
		/// </summary>

		Property_BoxPack,
		/// <summary>
		/// Longhand property "-moz-box-ordinal-group".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "box-ordinal-group" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-box-ordinal-group
		/// </summary>

		Property_BoxOrdinalGroup,
		/// <summary>
		/// Longhand property "-moz-stack-sizing".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "stack-sizing" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-stack-sizing
		/// </summary>

		Property_StackSizing,
		/// <summary>
		/// Longhand property "-moz-script-level".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "script-level" is not supported.
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Int'>integer</see> (<see cref='CssUnit.Integer'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-script-level
		/// </summary>

		Property_ScriptLevel,
		/// <summary>
		/// Longhand property "-moz-script-size-multiplier".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "script-size-multiplier" is not supported.
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-script-size-multiplier
		/// </summary>

		Property_ScriptSizeMultiplier,
		/// <summary>
		/// Longhand property "-moz-script-min-size".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "script-min-size" is not supported.
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-script-min-size
		/// </summary>

		Property_ScriptMinSize,
		/// <summary>
		/// Longhand property "clip-path".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/clip-path
		/// </summary>
		Property_ClipPath,
		/// <summary>
		/// Longhand property "clip-rule".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/clip-rule
		/// </summary>
		Property_ClipRule,
		/// <summary>
		/// Longhand property "color-interpolation".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/color-interpolation
		/// </summary>
		Property_ColorInterpolation,
		/// <summary>
		/// Longhand property "color-interpolation-filters".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/color-interpolation-filters
		/// </summary>
		Property_ColorInterpolationFilters,
		/// <summary>
		/// Longhand property "dominant-baseline".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/dominant-baseline
		/// </summary>
		Property_DominantBaseline,
		/// <summary>
		/// Longhand property "fill".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/fill
		/// </summary>
		Property_Fill,
		/// <summary>
		/// Longhand property "fill-opacity".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/fill-opacity
		/// </summary>
		Property_FillOpacity,
		/// <summary>
		/// Longhand property "fill-rule".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/fill-rule
		/// </summary>
		Property_FillRule,
		/// <summary>
		/// Longhand property "filter".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/filter
		/// </summary>
		Property_Filter,
		/// <summary>
		/// Longhand property "flood-color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/flood-color
		/// </summary>
		Property_FloodColor,
		/// <summary>
		/// Longhand property "flood-opacity".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/flood-opacity
		/// </summary>
		Property_FloodOpacity,
		/// <summary>
		/// Longhand property "image-rendering".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/image-rendering
		/// </summary>
		Property_ImageRendering,
		/// <summary>
		/// Longhand property "lighting-color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/lighting-color
		/// </summary>
		Property_LightingColor,
		/// <summary>
		/// Longhand property "marker-end".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/marker-end
		/// </summary>
		Property_MarkerEnd,
		/// <summary>
		/// Longhand property "marker-mid".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/marker-mid
		/// </summary>
		Property_MarkerMid,
		/// <summary>
		/// Longhand property "marker-start".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/marker-start
		/// </summary>
		Property_MarkerStart,
		/// <summary>
		/// Longhand property "mask".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Uri'>URL</see> (<see cref='CssUnit.Url'/>),
		///   none (<see cref='CssUnit.None'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/mask
		/// </summary>
		Property_Mask,
		/// <summary>
		/// Longhand property "mask-type".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/mask-type
		/// </summary>
		Property_MaskType,
		/// <summary>
		/// Longhand property "shape-rendering".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/shape-rendering
		/// </summary>
		Property_ShapeRendering,
		/// <summary>
		/// Longhand property "stop-color".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Color'>color</see> (<see cref='CssUnit.Color'/>), <see cref='CssValue.String'>identifier</see> (<see cref='CssUnit.Ident'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stop-color
		/// </summary>
		Property_StopColor,
		/// <summary>
		/// Longhand property "stop-opacity".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stop-opacity
		/// </summary>
		Property_StopOpacity,
		/// <summary>
		/// Longhand property "stroke".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke
		/// </summary>
		Property_Stroke,
		/// <summary>
		/// Longhand property "stroke-dasharray".
		/// See implementation for a list of possible values.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke-dasharray
		/// </summary>
		Property_StrokeDasharray,
		/// <summary>
		/// Longhand property "stroke-dashoffset".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke-dashoffset
		/// </summary>
		Property_StrokeDashoffset,
		/// <summary>
		/// Longhand property "stroke-linecap".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke-linecap
		/// </summary>
		Property_StrokeLinecap,
		/// <summary>
		/// Longhand property "stroke-linejoin".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke-linejoin
		/// </summary>
		Property_StrokeLinejoin,
		/// <summary>
		/// Longhand property "stroke-miterlimit".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke-miterlimit
		/// </summary>
		Property_StrokeMiterlimit,
		/// <summary>
		/// Longhand property "stroke-opacity".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke-opacity
		/// </summary>
		Property_StrokeOpacity,
		/// <summary>
		/// Longhand property "stroke-width".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='CssValue.Float'>length</see>,
		///   <see cref='CssValue.Percent'>percent</see> (<see cref='CssUnit.Percent'/>),
		///   <see cref='CssValue.Float'>number</see> (<see cref='CssUnit.Number'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/stroke-width
		/// </summary>
		Property_StrokeWidth,
		/// <summary>
		/// Longhand property "text-anchor".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-anchor
		/// </summary>
		Property_TextAnchor,
		/// <summary>
		/// Longhand property "text-rendering".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-rendering
		/// </summary>
		Property_TextRendering,
		/// <summary>
		/// Longhand property "vector-effect".
		/// The property contains a single value of one of the following types:
		///   inherit (<see cref='CssUnit.Initial'/> or <see cref='CssUnit.Inherit'/>),
		///   <see cref='nsCSSKeywords'>keyword</see> (<see cref='CssUnit.Enumerated'/>).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/vector-effect
		/// </summary>
		Property_VectorEffect,
		/// <summary>
		/// Longhand property "-x-lang".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "lang" is not supported.
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-x-lang
		/// </summary>

		Property_XLang,
		/// <summary>
		/// Longhand property "-x-span".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "span" is not supported.
		/// The property is internal, its value cannot be specified in a CSS file.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-x-span
		/// </summary>

		Property_XSpan,
		Property_CountNoShorthands,

		PropertyCountDummy1 = Property_CountNoShorthands - 1,
		/// <summary>
		/// Shorthand property "-moz-outline-radius".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "outline-radius" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-outline-radius
		/// </summary>

		Property_MozOutlineRadius,
		/// <summary>
		/// Shorthand property "animation".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/animation
		/// </summary>
		Property_Animation,
		/// <summary>
		/// Shorthand property "background".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/background
		/// </summary>
		Property_Background,
		/// <summary>
		/// Shorthand property "border".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border
		/// </summary>
		Property_Border,
		/// <summary>
		/// Shorthand property "border-bottom".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-bottom
		/// </summary>
		Property_BorderBottom,
		/// <summary>
		/// Shorthand property "border-color".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-color
		/// </summary>
		Property_BorderColor,
		/// <summary>
		/// Shorthand property "-moz-border-end".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-end" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-end
		/// </summary>

		Property_BorderEnd,
		/// <summary>
		/// Shorthand property "-moz-border-end-color".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-end-color" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-end-color
		/// </summary>

		Property_BorderEndColor,
		/// <summary>
		/// Shorthand property "-moz-border-end-style".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-end-style" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-end-style
		/// </summary>

		Property_BorderEndStyle,
		/// <summary>
		/// Shorthand property "-moz-border-end-width".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-end-width" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-end-width
		/// </summary>

		Property_BorderEndWidth,
		/// <summary>
		/// Shorthand property "border-image".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-image
		/// </summary>
		Property_BorderImage,
		/// <summary>
		/// Shorthand property "border-left".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left
		/// </summary>
		Property_BorderLeft,
		/// <summary>
		/// Shorthand property "border-left-color".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-color
		/// </summary>
		Property_BorderLeftColor,
		/// <summary>
		/// Shorthand property "border-left-style".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-style
		/// </summary>
		Property_BorderLeftStyle,
		/// <summary>
		/// Shorthand property "border-left-width".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-left-width
		/// </summary>
		Property_BorderLeftWidth,
		/// <summary>
		/// Shorthand property "border-right".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right
		/// </summary>
		Property_BorderRight,
		/// <summary>
		/// Shorthand property "border-right-color".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-color
		/// </summary>
		Property_BorderRightColor,
		/// <summary>
		/// Shorthand property "border-right-style".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-style
		/// </summary>
		Property_BorderRightStyle,
		/// <summary>
		/// Shorthand property "border-right-width".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-right-width
		/// </summary>
		Property_BorderRightWidth,
		/// <summary>
		/// Shorthand property "-moz-border-start".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-start" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-start
		/// </summary>

		Property_BorderStart,
		/// <summary>
		/// Shorthand property "-moz-border-start-color".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-start-color" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-start-color
		/// </summary>

		Property_BorderStartColor,
		/// <summary>
		/// Shorthand property "-moz-border-start-style".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-start-style" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-start-style
		/// </summary>

		Property_BorderStartStyle,
		/// <summary>
		/// Shorthand property "-moz-border-start-width".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "border-start-width" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-start-width
		/// </summary>

		Property_BorderStartWidth,
		/// <summary>
		/// Shorthand property "border-style".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-style
		/// </summary>
		Property_BorderStyle,
		/// <summary>
		/// Shorthand property "border-top".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-top
		/// </summary>
		Property_BorderTop,
		/// <summary>
		/// Shorthand property "border-width".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-width
		/// </summary>
		Property_BorderWidth,
		/// <summary>
		/// Shorthand property "border-radius".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/border-radius
		/// </summary>
		Property_BorderRadius,
		/// <summary>
		/// Shorthand property "-moz-columns".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "columns" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-columns
		/// </summary>

		Property_MozColumns,
		/// <summary>
		/// Shorthand property "-moz-column-rule".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "column-rule" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-column-rule
		/// </summary>

		Property_MozColumnRule,
		/// <summary>
		/// Shorthand property "flex".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/flex
		/// </summary>
		Property_Flex,
		/// <summary>
		/// Shorthand property "font".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/font
		/// </summary>
		Property_Font,
		/// <summary>
		/// Shorthand property "list-style".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/list-style
		/// </summary>
		Property_ListStyle,
		/// <summary>
		/// Shorthand property "margin".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin
		/// </summary>
		Property_Margin,
		/// <summary>
		/// Shorthand property "-moz-margin-end".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "margin-end" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-margin-end
		/// </summary>

		Property_MarginEnd,
		/// <summary>
		/// Shorthand property "margin-left".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-left
		/// </summary>
		Property_MarginLeft,
		/// <summary>
		/// Shorthand property "margin-right".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/margin-right
		/// </summary>
		Property_MarginRight,
		/// <summary>
		/// Shorthand property "-moz-margin-start".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "margin-start" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-margin-start
		/// </summary>

		Property_MarginStart,
		/// <summary>
		/// Shorthand property "outline".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/outline
		/// </summary>
		Property_Outline,
		/// <summary>
		/// Shorthand property "overflow".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/overflow
		/// </summary>
		Property_Overflow,
		/// <summary>
		/// Shorthand property "padding".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding
		/// </summary>
		Property_Padding,
		/// <summary>
		/// Shorthand property "-moz-padding-end".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "padding-end" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-padding-end
		/// </summary>

		Property_PaddingEnd,
		/// <summary>
		/// Shorthand property "padding-left".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-left
		/// </summary>
		Property_PaddingLeft,
		/// <summary>
		/// Shorthand property "padding-right".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/padding-right
		/// </summary>
		Property_PaddingRight,
		/// <summary>
		/// Shorthand property "-moz-padding-start".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property "padding-start" is not supported.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-padding-start
		/// </summary>

		Property_PaddingStart,
		/// <summary>
		/// Shorthand property "text-decoration".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/text-decoration
		/// </summary>
		Property_TextDecoration,
		/// <summary>
		/// Shorthand property "transition".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/transition
		/// </summary>
		Property_Transition,
		/// <summary>
		/// Shorthand property "marker".
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/marker
		/// </summary>
		Property_Marker,
		/// <summary>
		/// Shorthand property "-moz-transform".
		/// It is specific to Mozilla Firefox (experimental or internal).
		/// Unprefixed property is <see cref="Transform">"transform"</see>.
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transform
		/// </summary>

		Property_MozTransform,
		Property_COUNT,

		Property_COUNT_DUMMY2 = Property_COUNT - 1,
		/// <summary>
		/// Property "-moz-transform-origin" in an alias for <see cref="TransformOrigin"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transform-origin
		/// </summary>

		Property_AliasMozTransformOrigin,
		/// <summary>
		/// Property "-moz-perspective-origin" in an alias for <see cref="PerspectiveOrigin"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-perspective-origin
		/// </summary>

		Property_AliasMozPerspectiveOrigin,
		/// <summary>
		/// Property "-moz-perspective" in an alias for <see cref="Perspective"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-perspective
		/// </summary>

		Property_AliasMozPerspective,
		/// <summary>
		/// Property "-moz-transform-style" in an alias for <see cref="TransformStyle"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transform-style
		/// </summary>

		Property_AliasMozTransformStyle,
		/// <summary>
		/// Property "-moz-backface-visibility" in an alias for <see cref="BackfaceVisibility"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-backface-visibility
		/// </summary>

		Property_AliasMozBackfaceVisibility,
		/// <summary>
		/// Property "-moz-border-image" in an alias for <see cref="BorderImage"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-border-image
		/// </summary>

		Property_AliasMozBorderImage,
		/// <summary>
		/// Property "-moz-transition" in an alias for <see cref="Transition"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transition
		/// </summary>

		Property_AliasMozTransition,
		/// <summary>
		/// Property "-moz-transition-delay" in an alias for <see cref="TransitionDelay"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transition-delay
		/// </summary>

		Property_AliasMozTransitionDelay,
		/// <summary>
		/// Property "-moz-transition-duration" in an alias for <see cref="TransitionDuration"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transition-duration
		/// </summary>

		Property_AliasMozTransitionDuration,
		/// <summary>
		/// Property "-moz-transition-property" in an alias for <see cref="TransitionProperty"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transition-property
		/// </summary>

		Property_AliasMozTransitionProperty,
		/// <summary>
		/// Property "-moz-transition-timing-function" in an alias for <see cref="TransitionTimingFunction"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-transition-timing-function
		/// </summary>

		Property_AliasMozTransitionTimingFunction,
		/// <summary>
		/// Property "-moz-animation" in an alias for <see cref="Animation"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation
		/// </summary>

		Property_AliasMozAnimation,
		/// <summary>
		/// Property "-moz-animation-delay" in an alias for <see cref="AnimationDelay"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-delay
		/// </summary>

		Property_AliasMozAnimationDelay,
		/// <summary>
		/// Property "-moz-animation-direction" in an alias for <see cref="AnimationDirection"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-direction
		/// </summary>

		Property_AliasMozAnimationDirection,
		/// <summary>
		/// Property "-moz-animation-duration" in an alias for <see cref="AnimationDuration"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-duration
		/// </summary>

		Property_AliasMozAnimationDuration,
		/// <summary>
		/// Property "-moz-animation-fill-mode" in an alias for <see cref="AnimationFillMode"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-fill-mode
		/// </summary>

		Property_AliasMozAnimationFillMode,
		/// <summary>
		/// Property "-moz-animation-iteration-count" in an alias for <see cref="AnimationIterationCount"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-iteration-count
		/// </summary>

		Property_AliasMozAnimationIterationCount,
		/// <summary>
		/// Property "-moz-animation-name" in an alias for <see cref="AnimationName"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-name
		/// </summary>

		Property_AliasMozAnimationName,
		/// <summary>
		/// Property "-moz-animation-play-state" in an alias for <see cref="AnimationPlayState"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-play-state
		/// </summary>

		Property_AliasMozAnimationPlayState,
		/// <summary>
		/// Property "-moz-animation-timing-function" in an alias for <see cref="AnimationTimingFunction"/>.
		/// It is specific to Mozilla Firefox (obsolete).
		/// Online documentation: https://developer.mozilla.org/docs/Web/CSS/-moz-animation-timing-function
		/// </summary>

		Property_AliasMozAnimationTimingFunction,
		Property_COUNT_with_aliases,

		Property_COUNT_DUMMY3 = Property_COUNT_with_aliases - 1,
		//ExtraNoProperties,
		//ExtraAllProperties,
		Property_ExtraXNoneValue,
		Property_ExtraXAutoValue,

	};

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
}