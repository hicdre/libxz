#pragma once

namespace css
{
	enum Keyword
	{
		Keyword_UNKNOWN = -1,

		Keyword__mozActivehyperlinktext,
		/// <summary>Keyword "-moz-all"</summary>

		Keyword__mozAll,
		/// <summary>Keyword "-moz-alt-content"</summary>

		Keyword__mozAltContent,
		/// <summary>Keyword "-moz-anchor-decoration"</summary>

		Keyword__mozAnchorDecoration,
		/// <summary>Keyword "-moz-arabic-indic"</summary>

		Keyword__mozArabicIndic,
		/// <summary>Keyword "-moz-available"</summary>

		Keyword__mozAvailable,
		/// <summary>Keyword "-moz-bengali"</summary>

		Keyword__mozBengali,
		/// <summary>Keyword "-moz-box"</summary>

		Keyword__mozBox,
		/// <summary>Keyword "-moz-button"</summary>

		Keyword__mozButton,
		/// <summary>Keyword "-moz-buttondefault"</summary>

		Keyword__mozButtondefault,
		/// <summary>Keyword "-moz-buttonhoverface"</summary>

		Keyword__mozButtonhoverface,
		/// <summary>Keyword "-moz-buttonhovertext"</summary>

		Keyword__mozButtonhovertext,
		/// <summary>Keyword "-moz-cellhighlight"</summary>

		Keyword__mozCellhighlight,
		/// <summary>Keyword "-moz-cellhighlighttext"</summary>

		Keyword__mozCellhighlighttext,
		/// <summary>Keyword "-moz-center"</summary>

		Keyword__mozCenter,
		/// <summary>Keyword "-moz-cjk-earthly-branch"</summary>

		Keyword__mozCjkEarthlyBranch,
		/// <summary>Keyword "-moz-cjk-heavenly-stem"</summary>

		Keyword__mozCjkHeavenlyStem,
		/// <summary>Keyword "-moz-combobox"</summary>

		Keyword__mozCombobox,
		/// <summary>Keyword "-moz-comboboxtext"</summary>

		Keyword__mozComboboxtext,
		/// <summary>Keyword "-moz-block-height"</summary>

		Keyword__mozBlockHeight,
		/// <summary>Keyword "-moz-deck"</summary>

		Keyword__mozDeck,
		/// <summary>Keyword "-moz-default-background-color"</summary>

		Keyword__mozDefaultBackgroundColor,
		/// <summary>Keyword "-moz-default-color"</summary>

		Keyword__mozDefaultColor,
		/// <summary>Keyword "-moz-desktop"</summary>

		Keyword__mozDesktop,
		/// <summary>Keyword "-moz-devanagari"</summary>

		Keyword__mozDevanagari,
		/// <summary>Keyword "-moz-dialog"</summary>

		Keyword__mozDialog,
		/// <summary>Keyword "-moz-dialogtext"</summary>

		Keyword__mozDialogtext,
		/// <summary>Keyword "-moz-document"</summary>

		Keyword__mozDocument,
		/// <summary>Keyword "-moz-dragtargetzone"</summary>

		Keyword__mozDragtargetzone,
		/// <summary>Keyword "-moz-element"</summary>

		Keyword__mozElement,
		/// <summary>Keyword "-moz-eventreerow"</summary>

		Keyword__mozEventreerow,
		/// <summary>Keyword "-moz-ethiopic-halehame"</summary>

		Keyword__mozEthiopicHalehame,
		/// <summary>Keyword "-moz-ethiopic-numeric"</summary>

		Keyword__mozEthiopicNumeric,
		/// <summary>Keyword "-moz-ethiopic-halehame-am"</summary>

		Keyword__mozEthiopicHalehameAm,
		/// <summary>Keyword "-moz-ethiopic-halehame-ti-er"</summary>

		Keyword__mozEthiopicHalehameTiEr,
		/// <summary>Keyword "-moz-ethiopic-halehame-ti-et"</summary>

		Keyword__mozEthiopicHalehameTiEt,
		/// <summary>Keyword "-moz-field"</summary>

		Keyword__mozField,
		/// <summary>Keyword "-moz-fieldtext"</summary>

		Keyword__mozFieldtext,
		/// <summary>Keyword "-moz-fit-content"</summary>

		Keyword__mozFitContent,
		/// <summary>Keyword "-moz-grabbing"</summary>
		Keyword__mozGrabbing,
		/// <summary>Keyword "-moz-grab"</summary>
		Keyword__mozGrab,
		/// <summary>Keyword "-moz-grid-group"</summary>
		Keyword__mozGridGroup,
		/// <summary>Keyword "-moz-grid-line"</summary>
		Keyword__mozGridLine,
		/// <summary>Keyword "-moz-grid"</summary>
		Keyword__mozGrid,
		/// <summary>Keyword "-moz-groupbox"</summary>
		Keyword__mozGroupbox,
		/// <summary>Keyword "-moz-gujarati"</summary>
		Keyword__mozGujarati,
		/// <summary>Keyword "-moz-gurmukhi"</summary>
		Keyword__mozGurmukhi,
		/// <summary>Keyword "-moz-hangul-consonant"</summary>
		Keyword__mozHangulConsonant,
		/// <summary>Keyword "-moz-hidden-unscrollable"</summary>
		Keyword__mozHiddenUnscrollable,
		/// <summary>Keyword "-moz-hangul"</summary>
		Keyword__mozHangul,
		/// <summary>Keyword "-moz-hyperlinktext"</summary>
		Keyword__mozHyperlinktext,
		/// <summary>Keyword "-moz-html-cellhighlight"</summary>
		Keyword__mozHtmlCellhighlight,
		/// <summary>Keyword "-moz-html-cellhighlighttext"</summary>
		Keyword__mozHtmlCellhighlighttext,
		/// <summary>Keyword "-moz-image-rect"</summary>
		Keyword__mozImageRect,
		/// <summary>Keyword "-moz-info"</summary>
		Keyword__mozInfo,
		/// <summary>Keyword "-moz-initial"</summary>
		Keyword__mozInitial,
		/// <summary>Keyword "-moz-inline-box"</summary>
		Keyword__mozInlineBox,
		/// <summary>Keyword "-moz-inline-grid"</summary>
		Keyword__mozInlineGrid,
		/// <summary>Keyword "-moz-inline-stack"</summary>
		Keyword__mozInlineStack,
		/// <summary>Keyword "-moz-isolate"</summary>
		Keyword__mozIsolate,
		/// <summary>Keyword "-moz-isolate-override"</summary>
		Keyword__mozIsolateOverride,
		/// <summary>Keyword "-moz-japanese-formal"</summary>
		Keyword__mozJapaneseFormal,
		/// <summary>Keyword "-moz-japanese-informal"</summary>
		Keyword__mozJapaneseInformal,
		/// <summary>Keyword "-moz-kannada"</summary>
		Keyword__mozKannada,
		/// <summary>Keyword "-moz-khmer"</summary>
		Keyword__mozKhmer,
		/// <summary>Keyword "-moz-lao"</summary>
		Keyword__mozLao,
		/// <summary>Keyword "-moz-left"</summary>
		Keyword__mozLeft,
		/// <summary>Keyword "-moz-list"</summary>
		Keyword__mozList,
		/// <summary>Keyword "-moz-mac-alternateprimaryhighlight"</summary>
		Keyword__mozMacAlternateprimaryhighlight,
		/// <summary>Keyword "-moz-mac-chrome-active"</summary>
		Keyword__mozMacChromeActive,
		/// <summary>Keyword "-moz-mac-chrome-inactive"</summary>
		Keyword__mozMacChromeInactive,
		/// <summary>Keyword "-moz-mac-focusring"</summary>
		Keyword__mozMacFocusring,
		/// <summary>Keyword "-moz-mac-menuselect"</summary>
		Keyword__mozMacMenuselect,
		/// <summary>Keyword "-moz-mac-menushadow"</summary>
		Keyword__mozMacMenushadow,
		/// <summary>Keyword "-moz-mac-menutextdisable"</summary>
		Keyword__mozMacMenutextdisable,
		/// <summary>Keyword "-moz-mac-menutextselect"</summary>
		Keyword__mozMacMenutextselect,
		/// <summary>Keyword "-moz-mac-disabledtoolbartext"</summary>
		Keyword__mozMacDisabledtoolbartext,
		/// <summary>Keyword "-moz-mac-secondaryhighlight"</summary>
		Keyword__mozMacSecondaryhighlight,
		/// <summary>Keyword "-moz-malayalam"</summary>
		Keyword__mozMalayalam,
		/// <summary>Keyword "-moz-max-content"</summary>
		Keyword__mozMaxContent,
		/// <summary>Keyword "-moz-menuhover"</summary>
		Keyword__mozMenuhover,
		/// <summary>Keyword "-moz-menuhovertext"</summary>
		Keyword__mozMenuhovertext,
		/// <summary>Keyword "-moz-menubartext"</summary>
		Keyword__mozMenubartext,
		/// <summary>Keyword "-moz-menubarhovertext"</summary>
		Keyword__mozMenubarhovertext,
		/// <summary>Keyword "-moz-middle-with-baseline"</summary>
		Keyword__mozMiddleWithBaseline,
		/// <summary>Keyword "-moz-min-content"</summary>
		Keyword__mozMinContent,
		/// <summary>Keyword "-moz-myanmar"</summary>
		Keyword__mozMyanmar,
		/// <summary>Keyword "-moz-nativehyperlinktext"</summary>
		Keyword__mozNativehyperlinktext,
		/// <summary>Keyword "-moz-none"</summary>
		Keyword__mozNone,
		/// <summary>Keyword "-moz-objectfill"</summary>
		Keyword__mozObjectfill,
		/// <summary>Keyword "-moz-objectfillopacity"</summary>
		Keyword__mozObjectfillopacity,
		/// <summary>Keyword "-moz-objectstroke"</summary>
		Keyword__mozObjectstroke,
		/// <summary>Keyword "-moz-objectstrokeopacity"</summary>
		Keyword__mozObjectstrokeopacity,
		/// <summary>Keyword "-moz-objectvalue"</summary>
		Keyword__mozObjectvalue,
		/// <summary>Keyword "-moz-oddtreerow"</summary>
		Keyword__mozOddtreerow,
		/// <summary>Keyword "-moz-oriya"</summary>
		Keyword__mozOriya,
		/// <summary>Keyword "-moz-persian"</summary>
		Keyword__mozPersian,
		/// <summary>Keyword "-moz-plaintext"</summary>
		Keyword__mozPlaintext,
		/// <summary>Keyword "-moz-popup"</summary>
		Keyword__mozPopup,
		/// <summary>Keyword "-moz-pre-discard-newlines"</summary>
		Keyword__mozPreDiscardNewlines,
		/// <summary>Keyword "-moz-pull-down-menu"</summary>
		Keyword__mozPullDownMenu,
		/// <summary>Keyword "-moz-right"</summary>
		Keyword__mozRight,
		/// <summary>Keyword "-moz-scrollbars-horizontal"</summary>
		Keyword__mozScrollbarsHorizontal,
		/// <summary>Keyword "-moz-scrollbars-none"</summary>
		Keyword__mozScrollbarsNone,
		/// <summary>Keyword "-moz-scrollbars-vertical"</summary>
		Keyword__mozScrollbarsVertical,
		/// <summary>Keyword "-moz-show-background"</summary>
		Keyword__mozShowBackground,
		/// <summary>Keyword "-moz-simp-chinese-formal"</summary>
		Keyword__mozSimpChineseFormal,
		/// <summary>Keyword "-moz-simp-chinese-informal"</summary>
		Keyword__mozSimpChineseInformal,
		/// <summary>Keyword "-moz-stack"</summary>
		Keyword__mozStack,
		/// <summary>Keyword "-moz-tamil"</summary>
		Keyword__mozTamil,
		/// <summary>Keyword "-moz-telugu"</summary>
		Keyword__mozTelugu,
		/// <summary>Keyword "-moz-thai"</summary>
		Keyword__mozThai,
		/// <summary>Keyword "-moz-trad-chinese-formal"</summary>
		Keyword__mozTradChineseFormal,
		/// <summary>Keyword "-moz-trad-chinese-informal"</summary>
		Keyword__mozTradChineseInformal,
		/// <summary>Keyword "-moz-urdu"</summary>
		Keyword__mozUrdu,
		/// <summary>Keyword "-moz-use-system-font"</summary>
		Keyword__mozUseSystemFont,
		/// <summary>Keyword "-moz-use-text-color"</summary>
		Keyword__mozUseTextColor,
		/// <summary>Keyword "-moz-visitedhyperlinktext"</summary>
		Keyword__mozVisitedhyperlinktext,
		/// <summary>Keyword "-moz-window"</summary>
		Keyword__mozWindow,
		/// <summary>Keyword "-moz-workspace"</summary>
		Keyword__mozWorkspace,
		/// <summary>Keyword "-moz-zoom-in"</summary>
		Keyword__mozZoomIn,
		/// <summary>Keyword "-moz-zoom-out"</summary>
		Keyword__mozZoomOut,
		/// <summary>Keyword "absolute"</summary>
		Keyword_absolute,
		/// <summary>Keyword "active"</summary>
		Keyword_active,
		/// <summary>Keyword "activeborder"</summary>
		Keyword_activeborder,
		/// <summary>Keyword "activecaption"</summary>
		Keyword_activecaption,
		/// <summary>Keyword "alias"</summary>
		Keyword_alias,
		/// <summary>Keyword "all"</summary>
		Keyword_all,
		/// <summary>Keyword "all-scroll"</summary>
		Keyword_allScroll,
		/// <summary>Keyword "alpha"</summary>
		Keyword_alpha,
		/// <summary>Keyword "alternate"</summary>
		Keyword_alternate,
		/// <summary>Keyword "alternate-reverse"</summary>
		Keyword_alternateReverse,
		/// <summary>Keyword "always"</summary>
		Keyword_always,
		/// <summary>Keyword "appworkspace"</summary>
		Keyword_appworkspace,
		/// <summary>Keyword "armenian"</summary>
		Keyword_armenian,
		/// <summary>Keyword "auto"</summary>
		Keyword_auto,
		/// <summary>Keyword "avoid"</summary>
		Keyword_avoid,
		/// <summary>Keyword "background"</summary>
		Keyword_Background,
		/// <summary>Keyword "backwards"</summary>
		Keyword_Backwards,
		/// <summary>Keyword "balance"</summary>
		Keyword_Balance,
		/// <summary>Keyword "baseline"</summary>
		Keyword_Baseline,
		/// <summary>Keyword "bidi-override"</summary>
		Keyword_BidiOverride,
		/// <summary>Keyword "blink"</summary>
		Keyword_Blink,
		/// <summary>Keyword "block"</summary>
		Keyword_Block,
		/// <summary>Keyword "block-axis"</summary>
		Keyword_BlockAxis,
		/// <summary>Keyword "bold"</summary>
		Keyword_Bold,
		/// <summary>Keyword "bolder"</summary>
		Keyword_Bolder,
		/// <summary>Keyword "border-box"</summary>
		Keyword_BorderBox,
		/// <summary>Keyword "both"</summary>
		Keyword_Both,
		/// <summary>Keyword "bottom"</summary>
		Keyword_Bottom,
		/// <summary>Keyword "bottom-outside"</summary>
		Keyword_BottomOutside,
		/// <summary>Keyword "bounding-box"</summary>
		Keyword_BoundingBox,
		/// <summary>Keyword "break-all"</summary>
		Keyword_BreakAll,
		/// <summary>Keyword "break-word"</summary>
		Keyword_BreakWord,
		/// <summary>Keyword "button"</summary>
		Keyword_Button,
		/// <summary>Keyword "buttonface"</summary>
		Keyword_Buttonface,
		/// <summary>Keyword "buttonhighlight"</summary>
		Keyword_Buttonhighlight,
		/// <summary>Keyword "buttonshadow"</summary>
		Keyword_Buttonshadow,
		/// <summary>Keyword "buttontext"</summary>
		Keyword_Buttontext,
		/// <summary>Keyword "capitalize"</summary>
		Keyword_Capitalize,
		/// <summary>Keyword "caption"</summary>
		Keyword_Caption,
		/// <summary>Keyword "captiontext"</summary>
		Keyword_Captiontext,
		/// <summary>Keyword "cell"</summary>
		Keyword_Cell,
		/// <summary>Keyword "center"</summary>
		Keyword_Center,
		/// <summary>Keyword "ch"</summary>
		Keyword_Ch,
		/// <summary>Keyword "circle"</summary>
		Keyword_Circle,
		/// <summary>Keyword "cjk-ideographic"</summary>
		Keyword_CjkIdeographic,
		/// <summary>Keyword "clip"</summary>
		Keyword_Clip,
		/// <summary>Keyword "close-quote"</summary>
		Keyword_CloseQuote,
		/// <summary>Keyword "closest-corner"</summary>
		Keyword_ClosestCorner,
		/// <summary>Keyword "closest-side"</summary>
		Keyword_ClosestSide,
		/// <summary>Keyword "cm"</summary>
		Keyword_Cm,
		/// <summary>Keyword "col-resize"</summary>
		Keyword_ColResize,
		/// <summary>Keyword "collapse"</summary>
		Keyword_Collapse,
		/// <summary>Keyword "column"</summary>
		Keyword_Column,
		/// <summary>Keyword "column-reverse"</summary>
		Keyword_ColumnReverse,
		/// <summary>Keyword "condensed"</summary>
		Keyword_Condensed,
		/// <summary>Keyword "contain"</summary>
		Keyword_Contain,
		/// <summary>Keyword "content-box"</summary>
		Keyword_ContentBox,
		/// <summary>Keyword "context-menu"</summary>
		Keyword_ContextMenu,
		/// <summary>Keyword "continuous"</summary>
		Keyword_Continuous,
		/// <summary>Keyword "copy"</summary>
		Keyword_Copy,
		/// <summary>Keyword "cover"</summary>
		Keyword_Cover,
		/// <summary>Keyword "crop"</summary>
		Keyword_Crop,
		/// <summary>Keyword "cross"</summary>
		Keyword_Cross,
		/// <summary>Keyword "crosshair"</summary>
		Keyword_Crosshair,
		/// <summary>Keyword "currentcolor"</summary>
		Keyword_Currentcolor,
		/// <summary>Keyword "dashed"</summary>
		Keyword_Dashed,
		/// <summary>Keyword "decimal"</summary>
		Keyword_Decimal,
		/// <summary>Keyword "decimal-leading-zero"</summary>
		Keyword_DecimalLeadingZero,
		/// <summary>Keyword "default"</summary>
		Keyword_Default,
		/// <summary>Keyword "deg"</summary>
		Keyword_Deg,
		/// <summary>Keyword "dialog"</summary>
		Keyword_Dialog,
		/// <summary>Keyword "disabled"</summary>
		Keyword_Disabled,
		/// <summary>Keyword "disc"</summary>
		Keyword_Disc,
		/// <summary>Keyword "dotted"</summary>
		Keyword_Dotted,
		/// <summary>Keyword "double"</summary>
		Keyword_Double,
		/// <summary>Keyword "e-resize"</summary>
		Keyword_EResize,
		/// <summary>Keyword "each-box"</summary>
		Keyword_EachBox,
		/// <summary>Keyword "ease"</summary>
		Keyword_Ease,
		/// <summary>Keyword "ease-in"</summary>
		Keyword_EaseIn,
		/// <summary>Keyword "ease-in-out"</summary>
		Keyword_EaseInOut,
		/// <summary>Keyword "ease-out"</summary>
		Keyword_EaseOut,
		/// <summary>Keyword "element"</summary>
		Keyword_Element,
		/// <summary>Keyword "elements"</summary>
		Keyword_Elements,
		/// <summary>Keyword "ellipse"</summary>
		Keyword_Ellipse,
		/// <summary>Keyword "ellipsis"</summary>
		Keyword_Ellipsis,
		/// <summary>Keyword "em"</summary>
		Keyword_Em,
		/// <summary>Keyword "embed"</summary>
		Keyword_Embed,
		/// <summary>Keyword "enabled"</summary>
		Keyword_Enabled,
		/// <summary>Keyword "end"</summary>
		Keyword_End,
		/// <summary>Keyword "ex"</summary>
		Keyword_Ex,
		/// <summary>Keyword "expanded"</summary>
		Keyword_Expanded,
		/// <summary>Keyword "extra-condensed"</summary>
		Keyword_ExtraCondensed,
		/// <summary>Keyword "extra-expanded"</summary>
		Keyword_ExtraExpanded,
		/// <summary>Keyword "ew-resize"</summary>
		Keyword_EwResize,
		/// <summary>Keyword "farthest-side"</summary>
		Keyword_FarthestSide,
		/// <summary>Keyword "farthest-corner"</summary>
		Keyword_FarthestCorner,
		/// <summary>Keyword "fill"</summary>
		Keyword_Fill,
		/// <summary>Keyword "fixed"</summary>
		Keyword_Fixed,
		/// <summary>Keyword "flat"</summary>
		Keyword_Flat,
		/// <summary>Keyword "flex"</summary>
		Keyword_Flex,
		/// <summary>Keyword "flex-end"</summary>
		Keyword_FlexEnd,
		/// <summary>Keyword "flex-start"</summary>
		Keyword_FlexStart,
		/// <summary>Keyword "forwards"</summary>
		Keyword_Forwards,
		/// <summary>Keyword "full-width"</summary>
		Keyword_FullWidth,
		/// <summary>Keyword "georgian"</summary>
		Keyword_Georgian,
		/// <summary>Keyword "grad"</summary>
		Keyword_Grad,
		/// <summary>Keyword "graytext"</summary>
		Keyword_Graytext,
		/// <summary>Keyword "groove"</summary>
		Keyword_Groove,
		/// <summary>Keyword "hebrew"</summary>
		Keyword_Hebrew,
		/// <summary>Keyword "help"</summary>
		Keyword_Help,
		/// <summary>Keyword "hidden"</summary>
		Keyword_Hidden,
		/// <summary>Keyword "hide"</summary>
		Keyword_Hide,
		/// <summary>Keyword "highlight"</summary>
		Keyword_Highlight,
		/// <summary>Keyword "highlighttext"</summary>
		Keyword_Highlighttext,
		/// <summary>Keyword "hiragana"</summary>
		Keyword_Hiragana,
		/// <summary>Keyword "hiragana-iroha"</summary>
		Keyword_HiraganaIroha,
		/// <summary>Keyword "horizontal"</summary>
		Keyword_Horizontal,
		/// <summary>Keyword "hz"</summary>
		Keyword_Hz,
		/// <summary>Keyword "icon"</summary>
		Keyword_Icon,
		/// <summary>Keyword "ignore"</summary>
		Keyword_Ignore,
		/// <summary>Keyword "in"</summary>
		Keyword_In,
		/// <summary>Keyword "interlace"</summary>
		Keyword_Interlace,
		/// <summary>Keyword "inactive"</summary>
		Keyword_Inactive,
		/// <summary>Keyword "inactiveborder"</summary>
		Keyword_Inactiveborder,
		/// <summary>Keyword "inactivecaption"</summary>
		Keyword_Inactivecaption,
		/// <summary>Keyword "inactivecaptiontext"</summary>
		Keyword_Inactivecaptiontext,
		/// <summary>Keyword "infinite"</summary>
		Keyword_Infinite,
		/// <summary>Keyword "infobackground"</summary>
		Keyword_Infobackground,
		/// <summary>Keyword "infotext"</summary>
		Keyword_Infotext,
		/// <summary>Keyword "inherit"</summary>
		Keyword_Inherit,
		/// <summary>Keyword "initial"</summary>
		Keyword_Initial,
		/// <summary>Keyword "inline"</summary>
		Keyword_Inline,
		/// <summary>Keyword "inline-axis"</summary>
		Keyword_InlineAxis,
		/// <summary>Keyword "inline-block"</summary>
		Keyword_InlineBlock,
		/// <summary>Keyword "inline-flex"</summary>
		Keyword_InlineFlex,
		/// <summary>Keyword "inline-table"</summary>
		Keyword_InlineTable,
		/// <summary>Keyword "inset"</summary>
		Keyword_Inset,
		/// <summary>Keyword "inside"</summary>
		Keyword_Inside,
		/// <summary>Keyword "interpolatematrix"</summary>
		Keyword_Interpolatematrix,
		/// <summary>Keyword "italic"</summary>
		Keyword_Italic,
		/// <summary>Keyword "justify"</summary>
		Keyword_Justify,
		/// <summary>Keyword "katakana"</summary>
		Keyword_Katakana,
		/// <summary>Keyword "katakana-iroha"</summary>
		Keyword_KatakanaIroha,
		/// <summary>Keyword "keep-all"</summary>
		Keyword_KeepAll,
		/// <summary>Keyword "khz"</summary>
		Keyword_Khz,
		/// <summary>Keyword "landscape"</summary>
		Keyword_Landscape,
		/// <summary>Keyword "large"</summary>
		Keyword_Large,
		/// <summary>Keyword "larger"</summary>
		Keyword_Larger,
		/// <summary>Keyword "left"</summary>
		Keyword_Left,
		/// <summary>Keyword "lighter"</summary>
		Keyword_Lighter,
		/// <summary>Keyword "line-through"</summary>
		Keyword_LineThrough,
		/// <summary>Keyword "linear"</summary>
		Keyword_Linear,
		/// <summary>Keyword "list-item"</summary>
		Keyword_ListItem,
		/// <summary>Keyword "logical"</summary>
		Keyword_Logical,
		/// <summary>Keyword "lower-alpha"</summary>
		Keyword_LowerAlpha,
		/// <summary>Keyword "lower-greek"</summary>
		Keyword_LowerGreek,
		/// <summary>Keyword "lower-latin"</summary>
		Keyword_LowerLatin,
		/// <summary>Keyword "lower-roman"</summary>
		Keyword_LowerRoman,
		/// <summary>Keyword "lowercase"</summary>
		Keyword_Lowercase,
		/// <summary>Keyword "ltr"</summary>
		Keyword_Ltr,
		/// <summary>Keyword "luminance"</summary>
		Keyword_Luminance,
		/// <summary>Keyword "manual"</summary>
		Keyword_Manual,
		/// <summary>Keyword "margin-box"</summary>
		Keyword_MarginBox,
		/// <summary>Keyword "markers"</summary>
		Keyword_Markers,
		/// <summary>Keyword "matrix"</summary>
		Keyword_Matrix,
		/// <summary>Keyword "matrix3d"</summary>
		Keyword_Matrix3d,
		/// <summary>Keyword "medium"</summary>
		Keyword_Medium,
		/// <summary>Keyword "menu"</summary>
		Keyword_Menu,
		/// <summary>Keyword "menutext"</summary>
		Keyword_Menutext,
		/// <summary>Keyword "message-box"</summary>
		Keyword_MessageBox,
		/// <summary>Keyword "middle"</summary>
		Keyword_Middle,
		/// <summary>Keyword "mix"</summary>
		Keyword_Mix,
		/// <summary>Keyword "mm"</summary>
		Keyword_Mm,
		/// <summary>Keyword "move"</summary>
		Keyword_Move,
		/// <summary>Keyword "ms"</summary>
		Keyword_Ms,
		/// <summary>Keyword "n-resize"</summary>
		Keyword_NResize,
		/// <summary>Keyword "narrower"</summary>
		Keyword_Narrower,
		/// <summary>Keyword "ne-resize"</summary>
		Keyword_NeResize,
		/// <summary>Keyword "nesw-resize"</summary>
		Keyword_NeswResize,
		/// <summary>Keyword "no-close-quote"</summary>
		Keyword_NoCloseQuote,
		/// <summary>Keyword "no-drop"</summary>
		Keyword_NoDrop,
		/// <summary>Keyword "no-open-quote"</summary>
		Keyword_NoOpenQuote,
		/// <summary>Keyword "no-repeat"</summary>
		Keyword_NoRepeat,
		/// <summary>Keyword "none"</summary>
		Keyword_None,
		/// <summary>Keyword "normal"</summary>
		Keyword_Normal,
		/// <summary>Keyword "not-allowed"</summary>
		Keyword_NotAllowed,
		/// <summary>Keyword "nowrap"</summary>
		Keyword_Nowrap,
		/// <summary>Keyword "ns-resize"</summary>
		Keyword_NsResize,
		/// <summary>Keyword "nw-resize"</summary>
		Keyword_NwResize,
		/// <summary>Keyword "nwse-resize"</summary>
		Keyword_NwseResize,
		/// <summary>Keyword "oblique"</summary>
		Keyword_Oblique,
		/// <summary>Keyword "open-quote"</summary>
		Keyword_OpenQuote,
		/// <summary>Keyword "outset"</summary>
		Keyword_Outset,
		/// <summary>Keyword "outside"</summary>
		Keyword_Outside,
		/// <summary>Keyword "overline"</summary>
		Keyword_Overline,
		/// <summary>Keyword "padding-box"</summary>
		Keyword_PaddingBox,
		/// <summary>Keyword "painted"</summary>
		Keyword_Painted,
		/// <summary>Keyword "paused"</summary>
		Keyword_Paused,
		/// <summary>Keyword "pc"</summary>
		Keyword_Pc,
		/// <summary>Keyword "perspective"</summary>
		Keyword_Perspective,
		/// <summary>Keyword "physical"</summary>
		Keyword_Physical,
		/// <summary>Keyword "pointer"</summary>
		Keyword_Pointer,
		/// <summary>Keyword "portrait"</summary>
		Keyword_Portrait,
		/// <summary>Keyword "pre"</summary>
		Keyword_Pre,
		/// <summary>Keyword "pre-wrap"</summary>
		Keyword_PreWrap,
		/// <summary>Keyword "pre-line"</summary>
		Keyword_PreLine,
		/// <summary>Keyword "preserve-3d"</summary>
		Keyword_Preserve3d,
		/// <summary>Keyword "progress"</summary>
		Keyword_Progress,
		/// <summary>Keyword "progressive"</summary>
		Keyword_Progressive,
		/// <summary>Keyword "pt"</summary>
		Keyword_Pt,
		/// <summary>Keyword "px"</summary>
		Keyword_Px,
		/// <summary>Keyword "rad"</summary>
		Keyword_Rad,
		/// <summary>Keyword "read-only"</summary>
		Keyword_ReadOnly,
		/// <summary>Keyword "read-write"</summary>
		Keyword_ReadWrite,
		/// <summary>Keyword "relative"</summary>
		Keyword_Relative,
		/// <summary>Keyword "repeat"</summary>
		Keyword_Repeat,
		/// <summary>Keyword "repeat-x"</summary>
		Keyword_RepeatX,
		/// <summary>Keyword "repeat-y"</summary>
		Keyword_RepeatY,
		/// <summary>Keyword "reverse"</summary>
		Keyword_Reverse,
		/// <summary>Keyword "ridge"</summary>
		Keyword_Ridge,
		/// <summary>Keyword "right"</summary>
		Keyword_Right,
		/// <summary>Keyword "rotate"</summary>
		Keyword_Rotate,
		/// <summary>Keyword "rotate3d"</summary>
		Keyword_Rotate3d,
		/// <summary>Keyword "rotatex"</summary>
		Keyword_Rotatex,
		/// <summary>Keyword "rotatey"</summary>
		Keyword_Rotatey,
		/// <summary>Keyword "rotatez"</summary>
		Keyword_Rotatez,
		/// <summary>Keyword "round"</summary>
		Keyword_Round,
		/// <summary>Keyword "row"</summary>
		Keyword_Row,
		/// <summary>Keyword "row-resize"</summary>
		Keyword_RowResize,
		/// <summary>Keyword "row-reverse"</summary>
		Keyword_RowReverse,
		/// <summary>Keyword "rtl"</summary>
		Keyword_Rtl,
		/// <summary>Keyword "running"</summary>
		Keyword_Running,
		/// <summary>Keyword "s"</summary>
		Keyword_S,
		/// <summary>Keyword "s-resize"</summary>
		Keyword_SResize,
		/// <summary>Keyword "scale"</summary>
		Keyword_Scale,
		/// <summary>Keyword "scale3d"</summary>
		Keyword_Scale3d,
		/// <summary>Keyword "scalex"</summary>
		Keyword_Scalex,
		/// <summary>Keyword "scaley"</summary>
		Keyword_Scaley,
		/// <summary>Keyword "scalez"</summary>
		Keyword_Scalez,
		/// <summary>Keyword "scroll"</summary>
		Keyword_Scroll,
		/// <summary>Keyword "scrollbar"</summary>
		Keyword_Scrollbar,
		/// <summary>Keyword "scrollbar-small"</summary>
		Keyword_ScrollbarSmall,
		/// <summary>Keyword "se-resize"</summary>
		Keyword_SeResize,
		/// <summary>Keyword "select-after"</summary>
		Keyword_SelectAfter,
		/// <summary>Keyword "select-all"</summary>
		Keyword_SelectAll,
		/// <summary>Keyword "select-before"</summary>
		Keyword_SelectBefore,
		/// <summary>Keyword "select-menu"</summary>
		Keyword_SelectMenu,
		/// <summary>Keyword "select-same"</summary>
		Keyword_SelectSame,
		/// <summary>Keyword "semi-condensed"</summary>
		Keyword_SemiCondensed,
		/// <summary>Keyword "semi-expanded"</summary>
		Keyword_SemiExpanded,
		/// <summary>Keyword "separate"</summary>
		Keyword_Separate,
		/// <summary>Keyword "show"</summary>
		Keyword_Show,
		/// <summary>Keyword "skew"</summary>
		Keyword_Skew,
		/// <summary>Keyword "skewx"</summary>
		Keyword_Skewx,
		/// <summary>Keyword "skewy"</summary>
		Keyword_Skewy,
		/// <summary>Keyword "small"</summary>
		Keyword_Small,
		/// <summary>Keyword "small-caps"</summary>
		Keyword_SmallCaps,
		/// <summary>Keyword "small-caption"</summary>
		Keyword_SmallCaption,
		/// <summary>Keyword "smaller"</summary>
		Keyword_Smaller,
		/// <summary>Keyword "soft"</summary>
		Keyword_Soft,
		/// <summary>Keyword "solid"</summary>
		Keyword_Solid,
		/// <summary>Keyword "space-around"</summary>
		Keyword_SpaceAround,
		/// <summary>Keyword "space-between"</summary>
		Keyword_SpaceBetween,
		/// <summary>Keyword "square"</summary>
		Keyword_Square,
		/// <summary>Keyword "start"</summary>
		Keyword_Start,
		/// <summary>Keyword "static"</summary>
		Keyword_Static,
		/// <summary>Keyword "status-bar"</summary>
		Keyword_StatusBar,
		/// <summary>Keyword "step-end"</summary>
		Keyword_StepEnd,
		/// <summary>Keyword "step-start"</summary>
		Keyword_StepStart,
		/// <summary>Keyword "stretch"</summary>
		Keyword_Stretch,
		/// <summary>Keyword "stretch-to-fit"</summary>
		Keyword_StretchToFit,
		/// <summary>Keyword "stroke"</summary>
		Keyword_Stroke,
		/// <summary>Keyword "sub"</summary>
		Keyword_Sub,
		/// <summary>Keyword "super"</summary>
		Keyword_Super,
		/// <summary>Keyword "sw-resize"</summary>
		Keyword_SwResize,
		/// <summary>Keyword "table"</summary>
		Keyword_Table,
		/// <summary>Keyword "table-caption"</summary>
		Keyword_TableCaption,
		/// <summary>Keyword "table-cell"</summary>
		Keyword_TableCell,
		/// <summary>Keyword "table-column"</summary>
		Keyword_TableColumn,
		/// <summary>Keyword "table-column-group"</summary>
		Keyword_TableColumnGroup,
		/// <summary>Keyword "table-footer-group"</summary>
		Keyword_TableFooterGroup,
		/// <summary>Keyword "table-header-group"</summary>
		Keyword_TableHeaderGroup,
		/// <summary>Keyword "table-row"</summary>
		Keyword_TableRow,
		/// <summary>Keyword "table-row-group"</summary>
		Keyword_TableRowGroup,
		/// <summary>Keyword "text"</summary>
		Keyword_Text,
		/// <summary>Keyword "text-bottom"</summary>
		Keyword_TextBottom,
		/// <summary>Keyword "text-top"</summary>
		Keyword_TextTop,
		/// <summary>Keyword "thick"</summary>
		Keyword_Thick,
		/// <summary>Keyword "thin"</summary>
		Keyword_Thin,
		/// <summary>Keyword "threeddarkshadow"</summary>
		Keyword_Threeddarkshadow,
		/// <summary>Keyword "threedface"</summary>
		Keyword_Threedface,
		/// <summary>Keyword "threedhighlight"</summary>
		Keyword_Threedhighlight,
		/// <summary>Keyword "threedlightshadow"</summary>
		Keyword_Threedlightshadow,
		/// <summary>Keyword "threedshadow"</summary>
		Keyword_Threedshadow,
		/// <summary>Keyword "toggle"</summary>
		Keyword_Toggle,
		/// <summary>Keyword "top"</summary>
		Keyword_Top,
		/// <summary>Keyword "top-outside"</summary>
		Keyword_TopOutside,
		/// <summary>Keyword "translate"</summary>
		Keyword_Translate,
		/// <summary>Keyword "translate3d"</summary>
		Keyword_Translate3d,
		/// <summary>Keyword "translatex"</summary>
		Keyword_Translatex,
		/// <summary>Keyword "translatey"</summary>
		Keyword_Translatey,
		/// <summary>Keyword "translatez"</summary>
		Keyword_Translatez,
		/// <summary>Keyword "transparent"</summary>
		Keyword_Transparent,
		/// <summary>Keyword "tri-state"</summary>
		Keyword_TriState,
		/// <summary>Keyword "ultra-condensed"</summary>
		Keyword_UltraCondensed,
		/// <summary>Keyword "ultra-expanded"</summary>
		Keyword_UltraExpanded,
		/// <summary>Keyword "underline"</summary>
		Keyword_Underline,
		/// <summary>Keyword "upper-alpha"</summary>
		Keyword_UpperAlpha,
		/// <summary>Keyword "upper-latin"</summary>
		Keyword_UpperLatin,
		/// <summary>Keyword "upper-roman"</summary>
		Keyword_UpperRoman,
		/// <summary>Keyword "uppercase"</summary>
		Keyword_Uppercase,
		/// <summary>Keyword "vertical"</summary>
		Keyword_Vertical,
		/// <summary>Keyword "vertical-text"</summary>
		Keyword_VerticalText,
		/// <summary>Keyword "visible"</summary>
		Keyword_Visible,
		/// <summary>Keyword "visiblefill"</summary>
		Keyword_Visiblefill,
		/// <summary>Keyword "visiblepainted"</summary>
		Keyword_Visiblepainted,
		/// <summary>Keyword "visiblestroke"</summary>
		Keyword_Visiblestroke,
		/// <summary>Keyword "w-resize"</summary>
		Keyword_WResize,
		/// <summary>Keyword "wait"</summary>
		Keyword_Wait,
		/// <summary>Keyword "wavy"</summary>
		Keyword_Wavy,
		/// <summary>Keyword "wider"</summary>
		Keyword_Wider,
		/// <summary>Keyword "window"</summary>
		Keyword_Window,
		/// <summary>Keyword "windowframe"</summary>
		Keyword_Windowframe,
		/// <summary>Keyword "windowtext"</summary>
		Keyword_Windowtext,
		/// <summary>Keyword "write-only"</summary>
		Keyword_WriteOnly,
		/// <summary>Keyword "x-large"</summary>
		Keyword_XLarge,
		/// <summary>Keyword "x-small"</summary>
		Keyword_XSmall,
		/// <summary>Keyword "xx-large"</summary>
		Keyword_XxLarge,
		/// <summary>Keyword "xx-small"</summary>
		Keyword_XxSmall,
		/// <summary>Keyword "radio"</summary>
		Keyword_Radio,
		/// <summary>Keyword "checkbox"</summary>
		Keyword_Checkbox,
		/// <summary>Keyword "button-bevel"</summary>
		Keyword_ButtonBevel,
		/// <summary>Keyword "toolbox"</summary>
		Keyword_Toolbox,
		/// <summary>Keyword "toolbar"</summary>
		Keyword_Toolbar,
		/// <summary>Keyword "toolbarbutton"</summary>
		Keyword_Toolbarbutton,
		/// <summary>Keyword "toolbargripper"</summary>
		Keyword_Toolbargripper,
		/// <summary>Keyword "dualbutton"</summary>
		Keyword_Dualbutton,
		/// <summary>Keyword "toolbarbutton-dropdown"</summary>
		Keyword_ToolbarbuttonDropdown,
		/// <summary>Keyword "button-arrow-up"</summary>
		Keyword_ButtonArrowUp,
		/// <summary>Keyword "button-arrow-down"</summary>
		Keyword_ButtonArrowDown,
		/// <summary>Keyword "button-arrow-next"</summary>
		Keyword_ButtonArrowNext,
		/// <summary>Keyword "button-arrow-previous"</summary>
		Keyword_ButtonArrowPrevious,
		/// <summary>Keyword "separator"</summary>
		Keyword_Separator,
		/// <summary>Keyword "splitter"</summary>
		Keyword_Splitter,
		/// <summary>Keyword "statusbar"</summary>
		Keyword_Statusbar,
		/// <summary>Keyword "statusbarpanel"</summary>
		Keyword_Statusbarpanel,
		/// <summary>Keyword "resizerpanel"</summary>
		Keyword_Resizerpanel,
		/// <summary>Keyword "resizer"</summary>
		Keyword_Resizer,
		/// <summary>Keyword "listbox"</summary>
		Keyword_Listbox,
		/// <summary>Keyword "listitem"</summary>
		Keyword_Listitem,
		/// <summary>Keyword "treeview"</summary>
		Keyword_Treeview,
		/// <summary>Keyword "treeitem"</summary>
		Keyword_Treeitem,
		/// <summary>Keyword "treetwisty"</summary>
		Keyword_Treetwisty,
		/// <summary>Keyword "treetwistyopen"</summary>
		Keyword_Treetwistyopen,
		/// <summary>Keyword "treeline"</summary>
		Keyword_Treeline,
		/// <summary>Keyword "treeheader"</summary>
		Keyword_Treeheader,
		/// <summary>Keyword "treeheadercell"</summary>
		Keyword_Treeheadercell,
		/// <summary>Keyword "treeheadersortarrow"</summary>
		Keyword_Treeheadersortarrow,
		/// <summary>Keyword "progressbar"</summary>
		Keyword_Progressbar,
		/// <summary>Keyword "progressbar-vertical"</summary>
		Keyword_ProgressbarVertical,
		/// <summary>Keyword "progresschunk"</summary>
		Keyword_Progresschunk,
		/// <summary>Keyword "progresschunk-vertical"</summary>
		Keyword_ProgresschunkVertical,
		/// <summary>Keyword "tab"</summary>
		Keyword_Tab,
		/// <summary>Keyword "tabpanels"</summary>
		Keyword_Tabpanels,
		/// <summary>Keyword "tabpanel"</summary>
		Keyword_Tabpanel,
		/// <summary>Keyword "tab-scroll-arrow-back"</summary>
		Keyword_TabScrollArrowBack,
		/// <summary>Keyword "tab-scroll-arrow-forward"</summary>
		Keyword_TabScrollArrowForward,
		/// <summary>Keyword "tooltip"</summary>
		Keyword_Tooltip,
		/// <summary>Keyword "spinner"</summary>
		Keyword_Spinner,
		/// <summary>Keyword "spinner-upbutton"</summary>
		Keyword_SpinnerUpbutton,
		/// <summary>Keyword "spinner-downbutton"</summary>
		Keyword_SpinnerDownbutton,
		/// <summary>Keyword "spinner-textfield"</summary>
		Keyword_SpinnerTextfield,
		/// <summary>Keyword "scrollbarbutton-up"</summary>
		Keyword_ScrollbarbuttonUp,
		/// <summary>Keyword "scrollbarbutton-down"</summary>
		Keyword_ScrollbarbuttonDown,
		/// <summary>Keyword "scrollbarbutton-left"</summary>
		Keyword_ScrollbarbuttonLeft,
		/// <summary>Keyword "scrollbarbutton-right"</summary>
		Keyword_ScrollbarbuttonRight,
		/// <summary>Keyword "scrollbartrack-horizontal"</summary>
		Keyword_ScrollbartrackHorizontal,
		/// <summary>Keyword "scrollbartrack-vertical"</summary>
		Keyword_ScrollbartrackVertical,
		/// <summary>Keyword "scrollbarthumb-horizontal"</summary>
		Keyword_ScrollbarthumbHorizontal,
		/// <summary>Keyword "scrollbarthumb-vertical"</summary>
		Keyword_ScrollbarthumbVertical,
		/// <summary>Keyword "sheet"</summary>
		Keyword_Sheet,
		/// <summary>Keyword "textfield"</summary>
		Keyword_Textfield,
		/// <summary>Keyword "textfield-multiline"</summary>
		Keyword_TextfieldMultiline,
		/// <summary>Keyword "caret"</summary>
		Keyword_Caret,
		/// <summary>Keyword "searchfield"</summary>
		Keyword_Searchfield,
		/// <summary>Keyword "menubar"</summary>
		Keyword_Menubar,
		/// <summary>Keyword "menupopup"</summary>
		Keyword_Menupopup,
		/// <summary>Keyword "menuitem"</summary>
		Keyword_Menuitem,
		/// <summary>Keyword "checkmenuitem"</summary>
		Keyword_Checkmenuitem,
		/// <summary>Keyword "radiomenuitem"</summary>
		Keyword_Radiomenuitem,
		/// <summary>Keyword "menucheckbox"</summary>
		Keyword_Menucheckbox,
		/// <summary>Keyword "menuradio"</summary>
		Keyword_Menuradio,
		/// <summary>Keyword "menuseparator"</summary>
		Keyword_Menuseparator,
		/// <summary>Keyword "menuarrow"</summary>
		Keyword_Menuarrow,
		/// <summary>Keyword "menuimage"</summary>
		Keyword_Menuimage,
		/// <summary>Keyword "menuitemtext"</summary>
		Keyword_Menuitemtext,
		/// <summary>Keyword "menulist"</summary>
		Keyword_Menulist,
		/// <summary>Keyword "menulist-button"</summary>
		Keyword_MenulistButton,
		/// <summary>Keyword "menulist-text"</summary>
		Keyword_MenulistText,
		/// <summary>Keyword "menulist-textfield"</summary>
		Keyword_MenulistTextfield,
		/// <summary>Keyword "meterbar"</summary>
		Keyword_Meterbar,
		/// <summary>Keyword "meterchunk"</summary>
		Keyword_Meterchunk,
		/// <summary>Keyword "range"</summary>
		Keyword_Range,
		/// <summary>Keyword "range-thumb"</summary>
		Keyword_RangeThumb,
		/// <summary>Keyword "scale-horizontal"</summary>
		Keyword_ScaleHorizontal,
		/// <summary>Keyword "scale-vertical"</summary>
		Keyword_ScaleVertical,
		/// <summary>Keyword "scalethumb-horizontal"</summary>
		Keyword_ScalethumbHorizontal,
		/// <summary>Keyword "scalethumb-vertical"</summary>
		Keyword_ScalethumbVertical,
		/// <summary>Keyword "scalethumbstart"</summary>
		Keyword_Scalethumbstart,
		/// <summary>Keyword "scalethumbend"</summary>
		Keyword_Scalethumbend,
		/// <summary>Keyword "scalethumbtick"</summary>
		Keyword_Scalethumbtick,
		/// <summary>Keyword "groupbox"</summary>
		Keyword_Groupbox,
		/// <summary>Keyword "checkbox-container"</summary>
		Keyword_CheckboxContainer,
		/// <summary>Keyword "radio-container"</summary>
		Keyword_RadioContainer,
		/// <summary>Keyword "checkbox-label"</summary>
		Keyword_CheckboxLabel,
		/// <summary>Keyword "radio-label"</summary>
		Keyword_RadioLabel,
		/// <summary>Keyword "button-focus"</summary>
		Keyword_ButtonFocus,
		/// <summary>Keyword "-moz-win-media-toolbox"</summary>
		Keyword__mozWinMediaToolbox,
		/// <summary>Keyword "-moz-win-communications-toolbox"</summary>
		Keyword__mozWinCommunicationsToolbox,
		/// <summary>Keyword "-moz-win-browsertabbar-toolbox"</summary>
		Keyword__mozWinBrowsertabbarToolbox,
		/// <summary>Keyword "-moz-win-mediatext"</summary>
		Keyword__mozWinMediatext,
		/// <summary>Keyword "-moz-win-communicationstext"</summary>
		Keyword__mozWinCommunicationstext,
		/// <summary>Keyword "-moz-win-glass"</summary>
		Keyword__mozWinGlass,
		/// <summary>Keyword "-moz-win-borderless-glass"</summary>
		Keyword__mozWinBorderlessGlass,
		/// <summary>Keyword "-moz-window-titlebar"</summary>
		Keyword__mozWindowTitlebar,
		/// <summary>Keyword "-moz-window-titlebar-maximized"</summary>
		Keyword__mozWindowTitlebarMaximized,
		/// <summary>Keyword "-moz-window-frame-left"</summary>
		Keyword__mozWindowFrameLeft,
		/// <summary>Keyword "-moz-window-frame-right"</summary>
		Keyword__mozWindowFrameRight,
		/// <summary>Keyword "-moz-window-frame-bottom"</summary>
		Keyword__mozWindowFrameBottom,
		/// <summary>Keyword "-moz-window-button-close"</summary>
		Keyword__mozWindowButtonClose,
		/// <summary>Keyword "-moz-window-button-minimize"</summary>
		Keyword__mozWindowButtonMinimize,
		/// <summary>Keyword "-moz-window-button-maximize"</summary>
		Keyword__mozWindowButtonMaximize,
		/// <summary>Keyword "-moz-window-button-restore"</summary>
		Keyword__mozWindowButtonRestore,
		/// <summary>Keyword "-moz-window-button-box"</summary>
		Keyword__mozWindowButtonBox,
		/// <summary>Keyword "-moz-window-button-box-maximized"</summary>
		Keyword__mozWindowButtonBoxMaximized,
		/// <summary>Keyword "-moz-mac-unified-toolbar"</summary>
		Keyword__mozMacUnifiedToolbar,
		/// <summary>Keyword "-moz-win-exclude-glass"</summary>
		Keyword__mozWinExcludeGlass,
		/// <summary>Keyword "alphabetic"</summary>
		Keyword_alphabetic,
		/// <summary>Keyword "bevel"</summary>
		Keyword_Bevel,
		/// <summary>Keyword "butt"</summary>
		Keyword_Butt,
		/// <summary>Keyword "central"</summary>
		Keyword_Central,
		/// <summary>Keyword "crispedges"</summary>
		Keyword_Crispedges,
		/// <summary>Keyword "evenodd"</summary>
		Keyword_Evenodd,
		/// <summary>Keyword "geometricprecision"</summary>
		Keyword_Geometricprecision,
		/// <summary>Keyword "hanging"</summary>
		Keyword_Hanging,
		/// <summary>Keyword "ideographic"</summary>
		Keyword_Ideographic,
		/// <summary>Keyword "linearrgb"</summary>
		Keyword_Linearrgb,
		/// <summary>Keyword "mathematical"</summary>
		Keyword_Mathematical,
		/// <summary>Keyword "miter"</summary>
		Keyword_Miter,
		/// <summary>Keyword "no-change"</summary>
		Keyword_NoChange,
		/// <summary>Keyword "non-scaling-stroke"</summary>
		Keyword_NonScalingStroke,
		/// <summary>Keyword "nonzero"</summary>
		Keyword_Nonzero,
		/// <summary>Keyword "optimizelegibility"</summary>
		Keyword_Optimizelegibility,
		/// <summary>Keyword "optimizequality"</summary>
		Keyword_Optimizequality,
		/// <summary>Keyword "optimizespeed"</summary>
		Keyword_Optimizespeed,
		/// <summary>Keyword "reset-size"</summary>
		Keyword_ResetSize,
		/// <summary>Keyword "srgb"</summary>
		Keyword_Srgb,
		/// <summary>Keyword "text-after-edge"</summary>
		Keyword_TextAfterEdge,
		/// <summary>Keyword "text-before-edge"</summary>
		Keyword_TextBeforeEdge,
		/// <summary>Keyword "use-script"</summary>
		Keyword_UseScript,
		/// <summary>Keyword "-moz-crisp-edges"</summary>
		Keyword__mozCrispEdges,
		Keyword_Keyword_COUNT
	};
}