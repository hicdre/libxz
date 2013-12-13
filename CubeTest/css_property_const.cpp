#include "stdafx.h"
#include "css_property.h"
#include "css_keyword.h"

namespace css{

const int32 Property::kAnimationDirectionKTable[] = {
	Keyword::normal, NS_STYLE_ANIMATION_DIRECTION_NORMAL,
	Keyword::reverse, NS_STYLE_ANIMATION_DIRECTION_REVERSE,
	Keyword::alternate, NS_STYLE_ANIMATION_DIRECTION_ALTERNATE,
	Keyword::alternate_reverse, NS_STYLE_ANIMATION_DIRECTION_ALTERNATE_REVERSE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kAnimationFillModeKTable[] = {
	Keyword::none, NS_STYLE_ANIMATION_FILL_MODE_NONE,
	Keyword::forwards, NS_STYLE_ANIMATION_FILL_MODE_FORWARDS,
	Keyword::backwards, NS_STYLE_ANIMATION_FILL_MODE_BACKWARDS,
	Keyword::both, NS_STYLE_ANIMATION_FILL_MODE_BOTH,
	Keyword::UNKNOWN,-1
};

const int32 Property::kAnimationIterationCountKTable[] = {
	Keyword::infinite, NS_STYLE_ANIMATION_ITERATION_COUNT_INFINITE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kAnimationPlayStateKTable[] = {
	Keyword::running, NS_STYLE_ANIMATION_PLAY_STATE_RUNNING,
	Keyword::paused, NS_STYLE_ANIMATION_PLAY_STATE_PAUSED,
	Keyword::UNKNOWN,-1
};

const int32 Property::kAppearanceKTable[] = {
	Keyword::none,                   NS_THEME_NONE,
	Keyword::button,                 NS_THEME_BUTTON,
	Keyword::radio,                  NS_THEME_RADIO,
	Keyword::checkbox,               NS_THEME_CHECKBOX,
	Keyword::button_bevel,           NS_THEME_BUTTON_BEVEL,
	Keyword::toolbox,                NS_THEME_TOOLBOX,
	Keyword::toolbar,                NS_THEME_TOOLBAR,
	Keyword::toolbarbutton,          NS_THEME_TOOLBAR_BUTTON,
	Keyword::toolbargripper,         NS_THEME_TOOLBAR_GRIPPER,
	Keyword::dualbutton,             NS_THEME_TOOLBAR_DUAL_BUTTON,
	Keyword::toolbarbutton_dropdown, NS_THEME_TOOLBAR_BUTTON_DROPDOWN,
	Keyword::button_arrow_up,        NS_THEME_BUTTON_ARROW_UP,
	Keyword::button_arrow_down,      NS_THEME_BUTTON_ARROW_DOWN,
	Keyword::button_arrow_next,      NS_THEME_BUTTON_ARROW_NEXT,
	Keyword::button_arrow_previous,  NS_THEME_BUTTON_ARROW_PREVIOUS,
	Keyword::meterbar,               NS_THEME_METERBAR,
	Keyword::meterchunk,             NS_THEME_METERBAR_CHUNK,
	Keyword::separator,              NS_THEME_TOOLBAR_SEPARATOR,
	Keyword::splitter,               NS_THEME_SPLITTER,
	Keyword::statusbar,              NS_THEME_STATUSBAR,
	Keyword::statusbarpanel,         NS_THEME_STATUSBAR_PANEL,
	Keyword::resizerpanel,           NS_THEME_STATUSBAR_RESIZER_PANEL,
	Keyword::resizer,                NS_THEME_RESIZER,
	Keyword::listbox,                NS_THEME_LISTBOX,
	Keyword::listitem,               NS_THEME_LISTBOX_LISTITEM,
	Keyword::treeview,               NS_THEME_TREEVIEW,
	Keyword::treeitem,               NS_THEME_TREEVIEW_TREEITEM,
	Keyword::treetwisty,             NS_THEME_TREEVIEW_TWISTY,
	Keyword::treetwistyopen,         NS_THEME_TREEVIEW_TWISTY_OPEN,
	Keyword::treeline,               NS_THEME_TREEVIEW_LINE,
	Keyword::treeheader,             NS_THEME_TREEVIEW_HEADER,
	Keyword::treeheadercell,         NS_THEME_TREEVIEW_HEADER_CELL,
	Keyword::treeheadersortarrow,    NS_THEME_TREEVIEW_HEADER_SORTARROW,
	Keyword::progressbar,            NS_THEME_PROGRESSBAR,
	Keyword::progresschunk,          NS_THEME_PROGRESSBAR_CHUNK,
	Keyword::progressbar_vertical,   NS_THEME_PROGRESSBAR_VERTICAL,
	Keyword::progresschunk_vertical, NS_THEME_PROGRESSBAR_CHUNK_VERTICAL,
	Keyword::tab,                    NS_THEME_TAB,
	Keyword::tabpanels,              NS_THEME_TAB_PANELS,
	Keyword::tabpanel,               NS_THEME_TAB_PANEL,
	Keyword::tab_scroll_arrow_back,  NS_THEME_TAB_SCROLLARROW_BACK,
	Keyword::tab_scroll_arrow_forward, NS_THEME_TAB_SCROLLARROW_FORWARD,
	Keyword::tooltip,                NS_THEME_TOOLTIP,
	Keyword::spinner,                NS_THEME_SPINNER,
	Keyword::spinner_upbutton,       NS_THEME_SPINNER_UP_BUTTON,
	Keyword::spinner_downbutton,     NS_THEME_SPINNER_DOWN_BUTTON,
	Keyword::spinner_textfield,      NS_THEME_SPINNER_TEXTFIELD,
	Keyword::scrollbar,              NS_THEME_SCROLLBAR,
	Keyword::scrollbar_small,        NS_THEME_SCROLLBAR_SMALL,
	Keyword::scrollbarbutton_up,     NS_THEME_SCROLLBAR_BUTTON_UP,
	Keyword::scrollbarbutton_down,   NS_THEME_SCROLLBAR_BUTTON_DOWN,
	Keyword::scrollbarbutton_left,   NS_THEME_SCROLLBAR_BUTTON_LEFT,
	Keyword::scrollbarbutton_right,  NS_THEME_SCROLLBAR_BUTTON_RIGHT,
	Keyword::scrollbartrack_horizontal,    NS_THEME_SCROLLBAR_TRACK_HORIZONTAL,
	Keyword::scrollbartrack_vertical,      NS_THEME_SCROLLBAR_TRACK_VERTICAL,
	Keyword::scrollbarthumb_horizontal,    NS_THEME_SCROLLBAR_THUMB_HORIZONTAL,
	Keyword::scrollbarthumb_vertical,      NS_THEME_SCROLLBAR_THUMB_VERTICAL,
	Keyword::textfield,              NS_THEME_TEXTFIELD,
	Keyword::textfield_multiline,    NS_THEME_TEXTFIELD_MULTILINE,
	Keyword::caret,                  NS_THEME_TEXTFIELD_CARET,
	Keyword::searchfield,            NS_THEME_SEARCHFIELD,
	Keyword::menulist,               NS_THEME_DROPDOWN,
	Keyword::menulist_button,        NS_THEME_DROPDOWN_BUTTON,
	Keyword::menulist_text,          NS_THEME_DROPDOWN_TEXT,
	Keyword::menulist_textfield,     NS_THEME_DROPDOWN_TEXTFIELD,
	Keyword::range,                  NS_THEME_TEXTFIELD, // disabled on branch NS_THEME_RANGE,
	Keyword::range_thumb,            NS_THEME_NONE, // disabled on branch NS_THEME_RANGE_THUMB,
	Keyword::scale_horizontal,       NS_THEME_SCALE_HORIZONTAL,
	Keyword::scale_vertical,         NS_THEME_SCALE_VERTICAL,
	Keyword::scalethumb_horizontal,  NS_THEME_SCALE_THUMB_HORIZONTAL,
	Keyword::scalethumb_vertical,    NS_THEME_SCALE_THUMB_VERTICAL,
	Keyword::scalethumbstart,        NS_THEME_SCALE_THUMB_START,
	Keyword::scalethumbend,          NS_THEME_SCALE_THUMB_END,
	Keyword::scalethumbtick,         NS_THEME_SCALE_TICK,
	Keyword::groupbox,               NS_THEME_GROUPBOX,
	Keyword::checkbox_container,     NS_THEME_CHECKBOX_CONTAINER,
	Keyword::radio_container,        NS_THEME_RADIO_CONTAINER,
	Keyword::checkbox_label,         NS_THEME_CHECKBOX_LABEL,
	Keyword::radio_label,            NS_THEME_RADIO_LABEL,
	Keyword::button_focus,           NS_THEME_BUTTON_FOCUS,
	Keyword::window,                 NS_THEME_WINDOW,
	Keyword::dialog,                 NS_THEME_DIALOG,
	Keyword::menubar,                NS_THEME_MENUBAR,
	Keyword::menupopup,              NS_THEME_MENUPOPUP,
	Keyword::menuitem,               NS_THEME_MENUITEM,
	Keyword::checkmenuitem,          NS_THEME_CHECKMENUITEM,
	Keyword::radiomenuitem,          NS_THEME_RADIOMENUITEM,
	Keyword::menucheckbox,           NS_THEME_MENUCHECKBOX,
	Keyword::menuradio,              NS_THEME_MENURADIO,
	Keyword::menuseparator,          NS_THEME_MENUSEPARATOR,
	Keyword::menuarrow,              NS_THEME_MENUARROW,
	Keyword::menuimage,              NS_THEME_MENUIMAGE,
	Keyword::menuitemtext,           NS_THEME_MENUITEMTEXT,
	Keyword::_moz_win_media_toolbox, NS_THEME_WIN_MEDIA_TOOLBOX,
	Keyword::_moz_win_communications_toolbox, NS_THEME_WIN_COMMUNICATIONS_TOOLBOX,
	Keyword::_moz_win_browsertabbar_toolbox,  NS_THEME_WIN_BROWSER_TAB_BAR_TOOLBOX,
	Keyword::_moz_win_glass,         NS_THEME_WIN_GLASS,
	Keyword::_moz_win_borderless_glass,      NS_THEME_WIN_BORDERLESS_GLASS,
	Keyword::_moz_mac_unified_toolbar,       NS_THEME_MOZ_MAC_UNIFIED_TOOLBAR,
	Keyword::_moz_window_titlebar,           NS_THEME_WINDOW_TITLEBAR,
	Keyword::_moz_window_titlebar_maximized, NS_THEME_WINDOW_TITLEBAR_MAXIMIZED,
	Keyword::_moz_window_frame_left,         NS_THEME_WINDOW_FRAME_LEFT,
	Keyword::_moz_window_frame_right,        NS_THEME_WINDOW_FRAME_RIGHT,
	Keyword::_moz_window_frame_bottom,       NS_THEME_WINDOW_FRAME_BOTTOM,
	Keyword::_moz_window_button_close,       NS_THEME_WINDOW_BUTTON_CLOSE,
	Keyword::_moz_window_button_minimize,    NS_THEME_WINDOW_BUTTON_MINIMIZE,
	Keyword::_moz_window_button_maximize,    NS_THEME_WINDOW_BUTTON_MAXIMIZE,
	Keyword::_moz_window_button_restore,     NS_THEME_WINDOW_BUTTON_RESTORE,
	Keyword::_moz_window_button_box,         NS_THEME_WINDOW_BUTTON_BOX,
	Keyword::_moz_window_button_box_maximized, NS_THEME_WINDOW_BUTTON_BOX_MAXIMIZED,
	Keyword::_moz_win_exclude_glass,         NS_THEME_WIN_EXCLUDE_GLASS,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBackfaceVisibilityKTable[] = {
	Keyword::visible, NS_STYLE_BACKFACE_VISIBILITY_VISIBLE,
	Keyword::hidden, NS_STYLE_BACKFACE_VISIBILITY_HIDDEN,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTransformStyleKTable[] = {
	Keyword::flat, NS_STYLE_TRANSFORM_STYLE_FLAT,
	Keyword::preserve_3d, NS_STYLE_TRANSFORM_STYLE_PRESERVE_3D,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBackgroundAttachmentKTable[] = {
	Keyword::fixed, NS_STYLE_BG_ATTACHMENT_FIXED,
	Keyword::scroll, NS_STYLE_BG_ATTACHMENT_SCROLL,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBackgroundInlinePolicyKTable[] = {
	Keyword::each_box,     NS_STYLE_BG_INLINE_POLICY_EACH_BOX,
	Keyword::continuous,   NS_STYLE_BG_INLINE_POLICY_CONTINUOUS,
	Keyword::bounding_box, NS_STYLE_BG_INLINE_POLICY_BOUNDING_BOX,
	Keyword::UNKNOWN,-1
};

/*MOZ_STATIC_ASSERT(NS_STYLE_BG_CLIP_BORDER == NS_STYLE_BG_ORIGIN_BORDER &&
				  NS_STYLE_BG_CLIP_PADDING == NS_STYLE_BG_ORIGIN_PADDING &&
				  NS_STYLE_BG_CLIP_CONTENT == NS_STYLE_BG_ORIGIN_CONTENT,
				  "bg-clip and bg-origin style constants must agree");*/
const int32 Property::kBackgroundOriginKTable[] = {
	Keyword::border_box, NS_STYLE_BG_ORIGIN_BORDER,
	Keyword::padding_box, NS_STYLE_BG_ORIGIN_PADDING,
	Keyword::content_box, NS_STYLE_BG_ORIGIN_CONTENT,
	Keyword::UNKNOWN,-1
};

// Note: Don't change this table unless you update
// parseBackgroundPosition!

const int32 Property::kBackgroundPositionKTable[] = {
	Keyword::center, NS_STYLE_BG_POSITION_CENTER,
	Keyword::top, NS_STYLE_BG_POSITION_TOP,
	Keyword::bottom, NS_STYLE_BG_POSITION_BOTTOM,
	Keyword::left, NS_STYLE_BG_POSITION_LEFT,
	Keyword::right, NS_STYLE_BG_POSITION_RIGHT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBackgroundRepeatKTable[] = {
	Keyword::no_repeat,  NS_STYLE_BG_REPEAT_NO_REPEAT,
	Keyword::repeat,     NS_STYLE_BG_REPEAT_REPEAT,
	Keyword::repeat_x,   NS_STYLE_BG_REPEAT_REPEAT_X,
	Keyword::repeat_y,   NS_STYLE_BG_REPEAT_REPEAT_Y,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBackgroundRepeatPartKTable[] = {
	Keyword::no_repeat,  NS_STYLE_BG_REPEAT_NO_REPEAT,
	Keyword::repeat,     NS_STYLE_BG_REPEAT_REPEAT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBackgroundSizeKTable[] = {
	Keyword::contain, NS_STYLE_BG_SIZE_CONTAIN,
	Keyword::cover,   NS_STYLE_BG_SIZE_COVER,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBorderCollapseKTable[] = {
	Keyword::collapse,  NS_STYLE_BORDER_COLLAPSE,
	Keyword::separate,  NS_STYLE_BORDER_SEPARATE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBorderColorKTable[] = {
	Keyword::_moz_use_text_color, NS_STYLE_COLOR_MOZ_USE_TEXT_COLOR,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBorderImageRepeatKTable[] = {
	Keyword::stretch, NS_STYLE_BORDER_IMAGE_REPEAT_STRETCH,
	Keyword::repeat, NS_STYLE_BORDER_IMAGE_REPEAT_REPEAT,
	Keyword::round, NS_STYLE_BORDER_IMAGE_REPEAT_ROUND,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBorderImageSliceKTable[] = {
	Keyword::fill, NS_STYLE_BORDER_IMAGE_SLICE_FILL,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBorderStyleKTable[] = {
	Keyword::none,   NS_STYLE_BORDER_STYLE_NONE,
	Keyword::hidden, NS_STYLE_BORDER_STYLE_HIDDEN,
	Keyword::dotted, NS_STYLE_BORDER_STYLE_DOTTED,
	Keyword::dashed, NS_STYLE_BORDER_STYLE_DASHED,
	Keyword::solid,  NS_STYLE_BORDER_STYLE_SOLID,
	Keyword::double_, NS_STYLE_BORDER_STYLE_DOUBLE,
	Keyword::groove, NS_STYLE_BORDER_STYLE_GROOVE,
	Keyword::ridge,  NS_STYLE_BORDER_STYLE_RIDGE,
	Keyword::inset,  NS_STYLE_BORDER_STYLE_INSET,
	Keyword::outset, NS_STYLE_BORDER_STYLE_OUTSET,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBorderWidthKTable[] = {
	Keyword::thin, NS_STYLE_BORDER_WIDTH_THIN,
	Keyword::medium, NS_STYLE_BORDER_WIDTH_MEDIUM,
	Keyword::thick, NS_STYLE_BORDER_WIDTH_THICK,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBoxPropSourceKTable[] = {
	Keyword::physical,     NS_BOXPROP_SOURCE_PHYSICAL,
	Keyword::logical,      NS_BOXPROP_SOURCE_LOGICAL,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBoxShadowTypeKTable[] = {
	Keyword::inset, NS_STYLE_BOX_SHADOW_INSET,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBoxSizingKTable[] = {
	Keyword::content_box,  NS_STYLE_BOX_SIZING_CONTENT,
	Keyword::border_box,   NS_STYLE_BOX_SIZING_BORDER,
	Keyword::padding_box,  NS_STYLE_BOX_SIZING_PADDING,
	Keyword::UNKNOWN,-1
};

const int32 Property::kCaptionSideKTable[] = {
	Keyword::top,                  NS_STYLE_CAPTION_SIDE_TOP,
	Keyword::right,                NS_STYLE_CAPTION_SIDE_RIGHT,
	Keyword::bottom,               NS_STYLE_CAPTION_SIDE_BOTTOM,
	Keyword::left,                 NS_STYLE_CAPTION_SIDE_LEFT,
	Keyword::top_outside,          NS_STYLE_CAPTION_SIDE_TOP_OUTSIDE,
	Keyword::bottom_outside,       NS_STYLE_CAPTION_SIDE_BOTTOM_OUTSIDE,
	Keyword::UNKNOWN,              -1
};

const int32 Property::kClearKTable[] = {
	Keyword::none, NS_STYLE_CLEAR_NONE,
	Keyword::left, NS_STYLE_CLEAR_LEFT,
	Keyword::right, NS_STYLE_CLEAR_RIGHT,
	Keyword::both, NS_STYLE_CLEAR_LEFT_AND_RIGHT,
	Keyword::UNKNOWN,-1
};

// See also kObjectPatternKTable for SVG paint-specific values
const int32 Property::kColorKTable[] = {
	Keyword::activeborder, LookAndFeel::eColorID_activeborder,
	Keyword::activecaption, LookAndFeel::eColorID_activecaption,
	Keyword::appworkspace, LookAndFeel::eColorID_appworkspace,
	Keyword::background, LookAndFeel::eColorID_background,
	Keyword::buttonface, LookAndFeel::eColorID_buttonface,
	Keyword::buttonhighlight, LookAndFeel::eColorID_buttonhighlight,
	Keyword::buttonshadow, LookAndFeel::eColorID_buttonshadow,
	Keyword::buttontext, LookAndFeel::eColorID_buttontext,
	Keyword::captiontext, LookAndFeel::eColorID_captiontext,
	Keyword::graytext, LookAndFeel::eColorID_graytext,
	Keyword::highlight, LookAndFeel::eColorID_highlight,
	Keyword::highlighttext, LookAndFeel::eColorID_highlighttext,
	Keyword::inactiveborder, LookAndFeel::eColorID_inactiveborder,
	Keyword::inactivecaption, LookAndFeel::eColorID_inactivecaption,
	Keyword::inactivecaptiontext, LookAndFeel::eColorID_inactivecaptiontext,
	Keyword::infobackground, LookAndFeel::eColorID_infobackground,
	Keyword::infotext, LookAndFeel::eColorID_infotext,
	Keyword::menu, LookAndFeel::eColorID_menu,
	Keyword::menutext, LookAndFeel::eColorID_menutext,
	Keyword::scrollbar, LookAndFeel::eColorID_scrollbar,
	Keyword::threeddarkshadow, LookAndFeel::eColorID_threeddarkshadow,
	Keyword::threedface, LookAndFeel::eColorID_threedface,
	Keyword::threedhighlight, LookAndFeel::eColorID_threedhighlight,
	Keyword::threedlightshadow, LookAndFeel::eColorID_threedlightshadow,
	Keyword::threedshadow, LookAndFeel::eColorID_threedshadow,
	Keyword::window, LookAndFeel::eColorID_window,
	Keyword::windowframe, LookAndFeel::eColorID_windowframe,
	Keyword::windowtext, LookAndFeel::eColorID_windowtext,
	Keyword::_moz_activehyperlinktext, NS_COLOR_MOZ_ACTIVEHYPERLINKTEXT,
	Keyword::_moz_buttondefault, LookAndFeel::eColorID__moz_buttondefault,
	Keyword::_moz_buttonhoverface, LookAndFeel::eColorID__moz_buttonhoverface,
	Keyword::_moz_buttonhovertext, LookAndFeel::eColorID__moz_buttonhovertext,
	Keyword::_moz_cellhighlight, LookAndFeel::eColorID__moz_cellhighlight,
	Keyword::_moz_cellhighlighttext, LookAndFeel::eColorID__moz_cellhighlighttext,
	Keyword::_moz_eventreerow, LookAndFeel::eColorID__moz_eventreerow,
	Keyword::_moz_field, LookAndFeel::eColorID__moz_field,
	Keyword::_moz_fieldtext, LookAndFeel::eColorID__moz_fieldtext,
	Keyword::_moz_default_background_color, NS_COLOR_MOZ_DEFAULT_BACKGROUND_COLOR,
	Keyword::_moz_default_color, NS_COLOR_MOZ_DEFAULT_COLOR,
	Keyword::_moz_dialog, LookAndFeel::eColorID__moz_dialog,
	Keyword::_moz_dialogtext, LookAndFeel::eColorID__moz_dialogtext,
	Keyword::_moz_dragtargetzone, LookAndFeel::eColorID__moz_dragtargetzone,
	Keyword::_moz_hyperlinktext, NS_COLOR_MOZ_HYPERLINKTEXT,
	Keyword::_moz_html_cellhighlight, LookAndFeel::eColorID__moz_html_cellhighlight,
	Keyword::_moz_html_cellhighlighttext, LookAndFeel::eColorID__moz_html_cellhighlighttext,
	Keyword::_moz_mac_chrome_active, LookAndFeel::eColorID__moz_mac_chrome_active,
	Keyword::_moz_mac_chrome_inactive, LookAndFeel::eColorID__moz_mac_chrome_inactive,
	Keyword::_moz_mac_focusring, LookAndFeel::eColorID__moz_mac_focusring,
	Keyword::_moz_mac_menuselect, LookAndFeel::eColorID__moz_mac_menuselect,
	Keyword::_moz_mac_menushadow, LookAndFeel::eColorID__moz_mac_menushadow,
	Keyword::_moz_mac_menutextdisable, LookAndFeel::eColorID__moz_mac_menutextdisable,
	Keyword::_moz_mac_menutextselect, LookAndFeel::eColorID__moz_mac_menutextselect,
	Keyword::_moz_mac_disabledtoolbartext, LookAndFeel::eColorID__moz_mac_disabledtoolbartext,
	Keyword::_moz_mac_alternateprimaryhighlight, LookAndFeel::eColorID__moz_mac_alternateprimaryhighlight,
	Keyword::_moz_mac_secondaryhighlight, LookAndFeel::eColorID__moz_mac_secondaryhighlight,
	Keyword::_moz_menuhover, LookAndFeel::eColorID__moz_menuhover,
	Keyword::_moz_menuhovertext, LookAndFeel::eColorID__moz_menuhovertext,
	Keyword::_moz_menubartext, LookAndFeel::eColorID__moz_menubartext,
	Keyword::_moz_menubarhovertext, LookAndFeel::eColorID__moz_menubarhovertext,
	Keyword::_moz_oddtreerow, LookAndFeel::eColorID__moz_oddtreerow,
	Keyword::_moz_visitedhyperlinktext, NS_COLOR_MOZ_VISITEDHYPERLINKTEXT,
	Keyword::currentcolor, NS_COLOR_CURRENTCOLOR,
	Keyword::_moz_win_mediatext, LookAndFeel::eColorID__moz_win_mediatext,
	Keyword::_moz_win_communicationstext, LookAndFeel::eColorID__moz_win_communicationstext,
	Keyword::_moz_nativehyperlinktext, LookAndFeel::eColorID__moz_nativehyperlinktext,
	Keyword::_moz_comboboxtext, LookAndFeel::eColorID__moz_comboboxtext,
	Keyword::_moz_combobox, LookAndFeel::eColorID__moz_combobox,
	Keyword::UNKNOWN,-1
};

const int32 Property::kContentKTable[] = {
	Keyword::open_quote, NS_STYLE_CONTENT_OPEN_QUOTE,
	Keyword::close_quote, NS_STYLE_CONTENT_CLOSE_QUOTE,
	Keyword::no_open_quote, NS_STYLE_CONTENT_NO_OPEN_QUOTE,
	Keyword::no_close_quote, NS_STYLE_CONTENT_NO_CLOSE_QUOTE,
	Keyword::_moz_alt_content, NS_STYLE_CONTENT_ALT_CONTENT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kCursorKTable[] = {
	// CSS 2.0
	Keyword::auto_, NS_STYLE_CURSOR_AUTO,
	Keyword::crosshair, NS_STYLE_CURSOR_CROSSHAIR,
	Keyword::default, NS_STYLE_CURSOR_DEFAULT,
	Keyword::pointer, NS_STYLE_CURSOR_POINTER,
	Keyword::move, NS_STYLE_CURSOR_MOVE,
	Keyword::e_resize, NS_STYLE_CURSOR_E_RESIZE,
	Keyword::ne_resize, NS_STYLE_CURSOR_NE_RESIZE,
	Keyword::nw_resize, NS_STYLE_CURSOR_NW_RESIZE,
	Keyword::n_resize, NS_STYLE_CURSOR_N_RESIZE,
	Keyword::se_resize, NS_STYLE_CURSOR_SE_RESIZE,
	Keyword::sw_resize, NS_STYLE_CURSOR_SW_RESIZE,
	Keyword::s_resize, NS_STYLE_CURSOR_S_RESIZE,
	Keyword::w_resize, NS_STYLE_CURSOR_W_RESIZE,
	Keyword::text, NS_STYLE_CURSOR_TEXT,
	Keyword::wait, NS_STYLE_CURSOR_WAIT,
	Keyword::help, NS_STYLE_CURSOR_HELP,
	// CSS 2.1
	Keyword::progress, NS_STYLE_CURSOR_SPINNING,
	// CSS3 basic user interface module
	Keyword::copy, NS_STYLE_CURSOR_COPY,
	Keyword::alias, NS_STYLE_CURSOR_ALIAS,
	Keyword::context_menu, NS_STYLE_CURSOR_CONTEXT_MENU,
	Keyword::cell, NS_STYLE_CURSOR_CELL,
	Keyword::not_allowed, NS_STYLE_CURSOR_NOT_ALLOWED,
	Keyword::col_resize, NS_STYLE_CURSOR_COL_RESIZE,
	Keyword::row_resize, NS_STYLE_CURSOR_ROW_RESIZE,
	Keyword::no_drop, NS_STYLE_CURSOR_NO_DROP,
	Keyword::vertical_text, NS_STYLE_CURSOR_VERTICAL_TEXT,
	Keyword::all_scroll, NS_STYLE_CURSOR_ALL_SCROLL,
	Keyword::nesw_resize, NS_STYLE_CURSOR_NESW_RESIZE,
	Keyword::nwse_resize, NS_STYLE_CURSOR_NWSE_RESIZE,
	Keyword::ns_resize, NS_STYLE_CURSOR_NS_RESIZE,
	Keyword::ew_resize, NS_STYLE_CURSOR_EW_RESIZE,
	Keyword::none, NS_STYLE_CURSOR_NONE,
	// -moz- prefixed vendor specific
	Keyword::_moz_grab, NS_STYLE_CURSOR_GRAB,
	Keyword::_moz_grabbing, NS_STYLE_CURSOR_GRABBING,
	Keyword::_moz_zoom_in, NS_STYLE_CURSOR_MOZ_ZOOM_IN,
	Keyword::_moz_zoom_out, NS_STYLE_CURSOR_MOZ_ZOOM_OUT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kDirectionKTable[] = {
	Keyword::ltr,      NS_STYLE_DIRECTION_LTR,
	Keyword::rtl,      NS_STYLE_DIRECTION_RTL,
	Keyword::UNKNOWN,-1
};

int32 Property::kDisplayKTable[] = {
	Keyword::none,               NS_STYLE_DISPLAY_NONE,
	Keyword::inline_,             NS_STYLE_DISPLAY_INLINE,
	Keyword::block,              NS_STYLE_DISPLAY_BLOCK,
	Keyword::inline_block,       NS_STYLE_DISPLAY_INLINE_BLOCK,
	Keyword::list_item,          NS_STYLE_DISPLAY_LIST_ITEM,
	Keyword::table,              NS_STYLE_DISPLAY_TABLE,
	Keyword::inline_table,       NS_STYLE_DISPLAY_INLINE_TABLE,
	Keyword::table_row_group,    NS_STYLE_DISPLAY_TABLE_ROW_GROUP,
	Keyword::table_header_group, NS_STYLE_DISPLAY_TABLE_HEADER_GROUP,
	Keyword::table_footer_group, NS_STYLE_DISPLAY_TABLE_FOOTER_GROUP,
	Keyword::table_row,          NS_STYLE_DISPLAY_TABLE_ROW,
	Keyword::table_column_group, NS_STYLE_DISPLAY_TABLE_COLUMN_GROUP,
	Keyword::table_column,       NS_STYLE_DISPLAY_TABLE_COLUMN,
	Keyword::table_cell,         NS_STYLE_DISPLAY_TABLE_CELL,
	Keyword::table_caption,      NS_STYLE_DISPLAY_TABLE_CAPTION,
	// Make sure this is kept in sync with the code in
	// nsCSSFrameConstructor::ConstructXULFrame
	Keyword::_moz_box,           NS_STYLE_DISPLAY_BOX,
	Keyword::_moz_inline_box,    NS_STYLE_DISPLAY_INLINE_BOX,
	Keyword::UNKNOWN,-1
};

const int32 Property::kEmptyCellsKTable[] = {
	Keyword::show,                 NS_STYLE_TABLE_EMPTY_CELLS_SHOW,
	Keyword::hide,                 NS_STYLE_TABLE_EMPTY_CELLS_HIDE,
	Keyword::_moz_show_background, NS_STYLE_TABLE_EMPTY_CELLS_SHOW_BACKGROUND,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFloatKTable[] = {
	Keyword::none,  NS_STYLE_FLOAT_NONE,
	Keyword::left,  NS_STYLE_FLOAT_LEFT,
	Keyword::right, NS_STYLE_FLOAT_RIGHT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFloatEdgeKTable[] = {
	Keyword::content_box,  NS_STYLE_FLOAT_EDGE_CONTENT,
	Keyword::margin_box,  NS_STYLE_FLOAT_EDGE_MARGIN,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFontKTable[] = {
	// CSS2.
	Keyword::caption, NS_STYLE_FONT_CAPTION,
	Keyword::icon, NS_STYLE_FONT_ICON,
	Keyword::menu, NS_STYLE_FONT_MENU,
	Keyword::message_box, NS_STYLE_FONT_MESSAGE_BOX,
	Keyword::small_caption, NS_STYLE_FONT_SMALL_CAPTION,
	Keyword::status_bar, NS_STYLE_FONT_STATUS_BAR,

	// Proposed for CSS3.
	Keyword::_moz_window, NS_STYLE_FONT_WINDOW,
	Keyword::_moz_document, NS_STYLE_FONT_DOCUMENT,
	Keyword::_moz_workspace, NS_STYLE_FONT_WORKSPACE,
	Keyword::_moz_desktop, NS_STYLE_FONT_DESKTOP,
	Keyword::_moz_info, NS_STYLE_FONT_INFO,
	Keyword::_moz_dialog, NS_STYLE_FONT_DIALOG,
	Keyword::_moz_button, NS_STYLE_FONT_BUTTON,
	Keyword::_moz_pull_down_menu, NS_STYLE_FONT_PULL_DOWN_MENU,
	Keyword::_moz_list, NS_STYLE_FONT_LIST,
	Keyword::_moz_field, NS_STYLE_FONT_FIELD,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFontSizeKTable[] = {
	Keyword::xx_small, NS_STYLE_FONT_SIZE_XXSMALL,
	Keyword::x_small, NS_STYLE_FONT_SIZE_XSMALL,
	Keyword::small, NS_STYLE_FONT_SIZE_SMALL,
	Keyword::medium, NS_STYLE_FONT_SIZE_MEDIUM,
	Keyword::large, NS_STYLE_FONT_SIZE_LARGE,
	Keyword::x_large, NS_STYLE_FONT_SIZE_XLARGE,
	Keyword::xx_large, NS_STYLE_FONT_SIZE_XXLARGE,
	Keyword::larger, NS_STYLE_FONT_SIZE_LARGER,
	Keyword::smaller, NS_STYLE_FONT_SIZE_SMALLER,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFontStretchKTable[] = {
	Keyword::ultra_condensed, NS_STYLE_FONT_STRETCH_ULTRA_CONDENSED,
	Keyword::extra_condensed, NS_STYLE_FONT_STRETCH_EXTRA_CONDENSED,
	Keyword::condensed, NS_STYLE_FONT_STRETCH_CONDENSED,
	Keyword::semi_condensed, NS_STYLE_FONT_STRETCH_SEMI_CONDENSED,
	Keyword::normal, NS_STYLE_FONT_STRETCH_NORMAL,
	Keyword::semi_expanded, NS_STYLE_FONT_STRETCH_SEMI_EXPANDED,
	Keyword::expanded, NS_STYLE_FONT_STRETCH_EXPANDED,
	Keyword::extra_expanded, NS_STYLE_FONT_STRETCH_EXTRA_EXPANDED,
	Keyword::ultra_expanded, NS_STYLE_FONT_STRETCH_ULTRA_EXPANDED,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFontStyleKTable[] = {
	Keyword::normal, NS_STYLE_FONT_STYLE_NORMAL,
	Keyword::italic, NS_STYLE_FONT_STYLE_ITALIC,
	Keyword::oblique, NS_STYLE_FONT_STYLE_OBLIQUE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFontVariantKTable[] = {
	Keyword::normal, NS_STYLE_FONT_VARIANT_NORMAL,
	Keyword::small_caps, NS_STYLE_FONT_VARIANT_SMALL_CAPS,
	Keyword::UNKNOWN,-1
};

const int32 Property::kFontWeightKTable[] = {
	Keyword::normal, NS_STYLE_FONT_WEIGHT_NORMAL,
	Keyword::bold, NS_STYLE_FONT_WEIGHT_BOLD,
	Keyword::bolder, NS_STYLE_FONT_WEIGHT_BOLDER,
	Keyword::lighter, NS_STYLE_FONT_WEIGHT_LIGHTER,
	Keyword::UNKNOWN,-1
};

const int32 Property::kIMEModeKTable[] = {
	Keyword::normal, NS_STYLE_IME_MODE_NORMAL,
	Keyword::auto_, NS_STYLE_IME_MODE_AUTO,
	Keyword::active, NS_STYLE_IME_MODE_ACTIVE,
	Keyword::disabled, NS_STYLE_IME_MODE_DISABLED,
	Keyword::inactive, NS_STYLE_IME_MODE_INACTIVE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kLineHeightKTable[] = {
	// -moz- prefixed, intended for internal use for single-line controls
	Keyword::_moz_block_height, NS_STYLE_LINE_HEIGHT_BLOCK_HEIGHT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kListStylePositionKTable[] = {
	Keyword::inside, NS_STYLE_LIST_STYLE_POSITION_INSIDE,
	Keyword::outside, NS_STYLE_LIST_STYLE_POSITION_OUTSIDE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kListStyleKTable[] = {
	Keyword::none, NS_STYLE_LIST_STYLE_NONE,
	Keyword::disc, NS_STYLE_LIST_STYLE_DISC,
	Keyword::circle, NS_STYLE_LIST_STYLE_CIRCLE,
	Keyword::square, NS_STYLE_LIST_STYLE_SQUARE,
	Keyword::decimal, NS_STYLE_LIST_STYLE_DECIMAL,
	Keyword::decimal_leading_zero, NS_STYLE_LIST_STYLE_DECIMAL_LEADING_ZERO,
	Keyword::lower_roman, NS_STYLE_LIST_STYLE_LOWER_ROMAN,
	Keyword::upper_roman, NS_STYLE_LIST_STYLE_UPPER_ROMAN,
	Keyword::lower_greek, NS_STYLE_LIST_STYLE_LOWER_GREEK,
	Keyword::lower_alpha, NS_STYLE_LIST_STYLE_LOWER_ALPHA,
	Keyword::lower_latin, NS_STYLE_LIST_STYLE_LOWER_LATIN,
	Keyword::upper_alpha, NS_STYLE_LIST_STYLE_UPPER_ALPHA,
	Keyword::upper_latin, NS_STYLE_LIST_STYLE_UPPER_LATIN,
	Keyword::hebrew, NS_STYLE_LIST_STYLE_HEBREW,
	Keyword::armenian, NS_STYLE_LIST_STYLE_ARMENIAN,
	Keyword::georgian, NS_STYLE_LIST_STYLE_GEORGIAN,
	Keyword::cjk_ideographic, NS_STYLE_LIST_STYLE_CJK_IDEOGRAPHIC,
	Keyword::hiragana, NS_STYLE_LIST_STYLE_HIRAGANA,
	Keyword::katakana, NS_STYLE_LIST_STYLE_KATAKANA,
	Keyword::hiragana_iroha, NS_STYLE_LIST_STYLE_HIRAGANA_IROHA,
	Keyword::katakana_iroha, NS_STYLE_LIST_STYLE_KATAKANA_IROHA,
	Keyword::_moz_cjk_heavenly_stem, NS_STYLE_LIST_STYLE_MOZ_CJK_HEAVENLY_STEM,
	Keyword::_moz_cjk_earthly_branch, NS_STYLE_LIST_STYLE_MOZ_CJK_EARTHLY_BRANCH,
	Keyword::_moz_trad_chinese_informal, NS_STYLE_LIST_STYLE_MOZ_TRAD_CHINESE_INFORMAL,
	Keyword::_moz_trad_chinese_formal, NS_STYLE_LIST_STYLE_MOZ_TRAD_CHINESE_FORMAL,
	Keyword::_moz_simp_chinese_informal, NS_STYLE_LIST_STYLE_MOZ_SIMP_CHINESE_INFORMAL,
	Keyword::_moz_simp_chinese_formal, NS_STYLE_LIST_STYLE_MOZ_SIMP_CHINESE_FORMAL,
	Keyword::_moz_japanese_informal, NS_STYLE_LIST_STYLE_MOZ_JAPANESE_INFORMAL,
	Keyword::_moz_japanese_formal, NS_STYLE_LIST_STYLE_MOZ_JAPANESE_FORMAL,
	Keyword::_moz_arabic_indic, NS_STYLE_LIST_STYLE_MOZ_ARABIC_INDIC,
	Keyword::_moz_persian, NS_STYLE_LIST_STYLE_MOZ_PERSIAN,
	Keyword::_moz_urdu, NS_STYLE_LIST_STYLE_MOZ_URDU,
	Keyword::_moz_devanagari, NS_STYLE_LIST_STYLE_MOZ_DEVANAGARI,
	Keyword::_moz_gurmukhi, NS_STYLE_LIST_STYLE_MOZ_GURMUKHI,
	Keyword::_moz_gujarati, NS_STYLE_LIST_STYLE_MOZ_GUJARATI,
	Keyword::_moz_oriya, NS_STYLE_LIST_STYLE_MOZ_ORIYA,
	Keyword::_moz_kannada, NS_STYLE_LIST_STYLE_MOZ_KANNADA,
	Keyword::_moz_malayalam, NS_STYLE_LIST_STYLE_MOZ_MALAYALAM,
	Keyword::_moz_bengali, NS_STYLE_LIST_STYLE_MOZ_BENGALI,
	Keyword::_moz_tamil, NS_STYLE_LIST_STYLE_MOZ_TAMIL,
	Keyword::_moz_telugu, NS_STYLE_LIST_STYLE_MOZ_TELUGU,
	Keyword::_moz_thai, NS_STYLE_LIST_STYLE_MOZ_THAI,
	Keyword::_moz_lao, NS_STYLE_LIST_STYLE_MOZ_LAO,
	Keyword::_moz_myanmar, NS_STYLE_LIST_STYLE_MOZ_MYANMAR,
	Keyword::_moz_khmer, NS_STYLE_LIST_STYLE_MOZ_KHMER,
	Keyword::_moz_hangul, NS_STYLE_LIST_STYLE_MOZ_HANGUL,
	Keyword::_moz_hangul_consonant, NS_STYLE_LIST_STYLE_MOZ_HANGUL_CONSONANT,
	Keyword::_moz_ethiopic_halehame, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME,
	Keyword::_moz_ethiopic_numeric, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_NUMERIC,
	Keyword::_moz_ethiopic_halehame_am, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME_AM,
	Keyword::_moz_ethiopic_halehame_ti_er, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME_TI_ER,
	Keyword::_moz_ethiopic_halehame_ti_et, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME_TI_ET,
	Keyword::UNKNOWN,-1
};

const int32 Property::kObjectOpacityKTable[] = {
	Keyword::_moz_objectfillopacity, NS_STYLE_OBJECT_FILL_OPACITY,
	Keyword::_moz_objectstrokeopacity, NS_STYLE_OBJECT_STROKE_OPACITY,
	Keyword::UNKNOWN,-1
};

const int32 Property::kObjectPatternKTable[] = {
	Keyword::_moz_objectfill, NS_COLOR_OBJECTFILL,
	Keyword::_moz_objectstroke, NS_COLOR_OBJECTSTROKE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kOrientKTable[] = {
	Keyword::horizontal, NS_STYLE_ORIENT_HORIZONTAL,
	Keyword::vertical,   NS_STYLE_ORIENT_VERTICAL,
	Keyword::auto_,       NS_STYLE_ORIENT_AUTO,
	Keyword::UNKNOWN,    -1
};

// Same as kBorderStyleKTable except 'hidden'.
const int32 Property::kOutlineStyleKTable[] = {
	Keyword::none,   NS_STYLE_BORDER_STYLE_NONE,
	Keyword::auto_,   NS_STYLE_BORDER_STYLE_AUTO,
	Keyword::dotted, NS_STYLE_BORDER_STYLE_DOTTED,
	Keyword::dashed, NS_STYLE_BORDER_STYLE_DASHED,
	Keyword::solid,  NS_STYLE_BORDER_STYLE_SOLID,
	Keyword::double_, NS_STYLE_BORDER_STYLE_DOUBLE,
	Keyword::groove, NS_STYLE_BORDER_STYLE_GROOVE,
	Keyword::ridge,  NS_STYLE_BORDER_STYLE_RIDGE,
	Keyword::inset,  NS_STYLE_BORDER_STYLE_INSET,
	Keyword::outset, NS_STYLE_BORDER_STYLE_OUTSET,
	Keyword::UNKNOWN,-1
};

const int32 Property::kOutlineColorKTable[] = {
	Keyword::_moz_use_text_color, NS_STYLE_COLOR_MOZ_USE_TEXT_COLOR,
	Keyword::UNKNOWN,-1
};

const int32 Property::kOverflowKTable[] = {
	Keyword::auto_, NS_STYLE_OVERFLOW_AUTO,
	Keyword::visible, NS_STYLE_OVERFLOW_VISIBLE,
	Keyword::hidden, NS_STYLE_OVERFLOW_HIDDEN,
	Keyword::scroll, NS_STYLE_OVERFLOW_SCROLL,
	// Deprecated:
	Keyword::_moz_scrollbars_none, NS_STYLE_OVERFLOW_HIDDEN,
	Keyword::_moz_scrollbars_horizontal, NS_STYLE_OVERFLOW_SCROLLBARS_HORIZONTAL,
	Keyword::_moz_scrollbars_vertical, NS_STYLE_OVERFLOW_SCROLLBARS_VERTICAL,
	Keyword::_moz_hidden_unscrollable, NS_STYLE_OVERFLOW_CLIP,
	Keyword::UNKNOWN,-1
};

const int32 Property::kOverflowSubKTable[] = {
	Keyword::auto_, NS_STYLE_OVERFLOW_AUTO,
	Keyword::visible, NS_STYLE_OVERFLOW_VISIBLE,
	Keyword::hidden, NS_STYLE_OVERFLOW_HIDDEN,
	Keyword::scroll, NS_STYLE_OVERFLOW_SCROLL,
	// Deprecated:
	Keyword::_moz_hidden_unscrollable, NS_STYLE_OVERFLOW_CLIP,
	Keyword::UNKNOWN,-1
};

const int32 Property::kPageBreakKTable[] = {
	Keyword::auto_, NS_STYLE_PAGE_BREAK_AUTO,
	Keyword::always, NS_STYLE_PAGE_BREAK_ALWAYS,
	Keyword::avoid, NS_STYLE_PAGE_BREAK_AVOID,
	Keyword::left, NS_STYLE_PAGE_BREAK_LEFT,
	Keyword::right, NS_STYLE_PAGE_BREAK_RIGHT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kPageBreakInsideKTable[] = {
	Keyword::auto_, NS_STYLE_PAGE_BREAK_AUTO,
	Keyword::avoid, NS_STYLE_PAGE_BREAK_AVOID,
	Keyword::UNKNOWN,-1
};

const int32 Property::kPageMarksKTable[] = {
	Keyword::none, NS_STYLE_PAGE_MARKS_NONE,
	Keyword::crop, NS_STYLE_PAGE_MARKS_CROP,
	Keyword::cross, NS_STYLE_PAGE_MARKS_REGISTER,
	Keyword::UNKNOWN,-1
};

const int32 Property::kPageSizeKTable[] = {
	Keyword::landscape, NS_STYLE_PAGE_SIZE_LANDSCAPE,
	Keyword::portrait, NS_STYLE_PAGE_SIZE_PORTRAIT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kPointerEventsKTable[] = {
	Keyword::none, NS_STYLE_POINTER_EVENTS_NONE,
	Keyword::visiblepainted, NS_STYLE_POINTER_EVENTS_VISIBLEPAINTED,
	Keyword::visiblefill, NS_STYLE_POINTER_EVENTS_VISIBLEFILL,
	Keyword::visiblestroke, NS_STYLE_POINTER_EVENTS_VISIBLESTROKE,
	Keyword::visible, NS_STYLE_POINTER_EVENTS_VISIBLE,
	Keyword::painted, NS_STYLE_POINTER_EVENTS_PAINTED,
	Keyword::fill, NS_STYLE_POINTER_EVENTS_FILL,
	Keyword::stroke, NS_STYLE_POINTER_EVENTS_STROKE,
	Keyword::all, NS_STYLE_POINTER_EVENTS_ALL,
	Keyword::auto_, NS_STYLE_POINTER_EVENTS_AUTO,
	Keyword::UNKNOWN, -1
};

const int32 Property::kPositionKTable[] = {
	Keyword::static_, NS_STYLE_POSITION_STATIC,
	Keyword::relative, NS_STYLE_POSITION_RELATIVE,
	Keyword::absolute, NS_STYLE_POSITION_ABSOLUTE,
	Keyword::fixed, NS_STYLE_POSITION_FIXED,
	Keyword::UNKNOWN,-1
};

const int32 Property::kRadialGradientShapeKTable[] = {
	Keyword::circle,  NS_STYLE_GRADIENT_SHAPE_CIRCULAR,
	Keyword::ellipse, NS_STYLE_GRADIENT_SHAPE_ELLIPTICAL,
	Keyword::UNKNOWN,-1
};

const int32 Property::kRadialGradientSizeKTable[] = {
	Keyword::closest_side,    NS_STYLE_GRADIENT_SIZE_CLOSEST_SIDE,
	Keyword::closest_corner,  NS_STYLE_GRADIENT_SIZE_CLOSEST_CORNER,
	Keyword::farthest_side,   NS_STYLE_GRADIENT_SIZE_FARTHEST_SIDE,
	Keyword::farthest_corner, NS_STYLE_GRADIENT_SIZE_FARTHEST_CORNER,
	Keyword::UNKNOWN,-1
};

const int32 Property::kRadialGradientLegacySizeKTable[] = {
	Keyword::closest_side,    NS_STYLE_GRADIENT_SIZE_CLOSEST_SIDE,
	Keyword::closest_corner,  NS_STYLE_GRADIENT_SIZE_CLOSEST_CORNER,
	Keyword::farthest_side,   NS_STYLE_GRADIENT_SIZE_FARTHEST_SIDE,
	Keyword::farthest_corner, NS_STYLE_GRADIENT_SIZE_FARTHEST_CORNER,
	// synonyms
	Keyword::contain,         NS_STYLE_GRADIENT_SIZE_CLOSEST_SIDE,
	Keyword::cover,           NS_STYLE_GRADIENT_SIZE_FARTHEST_CORNER,
	Keyword::UNKNOWN,-1
};

const int32 Property::kResizeKTable[] = {
	Keyword::none,       NS_STYLE_RESIZE_NONE,
	Keyword::both,       NS_STYLE_RESIZE_BOTH,
	Keyword::horizontal, NS_STYLE_RESIZE_HORIZONTAL,
	Keyword::vertical,   NS_STYLE_RESIZE_VERTICAL,
	Keyword::UNKNOWN,-1
};

const int32 Property::kStackSizingKTable[] = {
	Keyword::ignore, NS_STYLE_STACK_SIZING_IGNORE,
	Keyword::stretch_to_fit, NS_STYLE_STACK_SIZING_STRETCH_TO_FIT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTableLayoutKTable[] = {
	Keyword::auto_, NS_STYLE_TABLE_LAYOUT_AUTO,
	Keyword::fixed, NS_STYLE_TABLE_LAYOUT_FIXED,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTextAlignKTable[] = {
	Keyword::left, NS_STYLE_TEXT_ALIGN_LEFT,
	Keyword::right, NS_STYLE_TEXT_ALIGN_RIGHT,
	Keyword::center, NS_STYLE_TEXT_ALIGN_CENTER,
	Keyword::justify, NS_STYLE_TEXT_ALIGN_JUSTIFY,
	Keyword::_moz_center, NS_STYLE_TEXT_ALIGN_MOZ_CENTER,
	Keyword::_moz_right, NS_STYLE_TEXT_ALIGN_MOZ_RIGHT,
	Keyword::_moz_left, NS_STYLE_TEXT_ALIGN_MOZ_LEFT,
	Keyword::start, NS_STYLE_TEXT_ALIGN_DEFAULT,
	Keyword::end, NS_STYLE_TEXT_ALIGN_END,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTextAlignLastKTable[] = {
	Keyword::auto_, NS_STYLE_TEXT_ALIGN_AUTO,
	Keyword::left, NS_STYLE_TEXT_ALIGN_LEFT,
	Keyword::right, NS_STYLE_TEXT_ALIGN_RIGHT,
	Keyword::center, NS_STYLE_TEXT_ALIGN_CENTER,
	Keyword::justify, NS_STYLE_TEXT_ALIGN_JUSTIFY,
	Keyword::start, NS_STYLE_TEXT_ALIGN_DEFAULT,
	Keyword::end, NS_STYLE_TEXT_ALIGN_END,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTextBlinkKTable[] = {
	Keyword::none, NS_STYLE_TEXT_BLINK_NONE,
	Keyword::blink, NS_STYLE_TEXT_BLINK_BLINK,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTextDecorationLineKTable[] = {
	Keyword::none, NS_STYLE_TEXT_DECORATION_LINE_NONE,
	Keyword::underline, NS_STYLE_TEXT_DECORATION_LINE_UNDERLINE,
	Keyword::overline, NS_STYLE_TEXT_DECORATION_LINE_OVERLINE,
	Keyword::line_through, NS_STYLE_TEXT_DECORATION_LINE_LINE_THROUGH,
	Keyword::_moz_anchor_decoration, NS_STYLE_TEXT_DECORATION_LINE_PREF_ANCHORS,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTextDecorationStyleKTable[] = {
	Keyword::_moz_none, NS_STYLE_TEXT_DECORATION_STYLE_NONE,
	Keyword::solid, NS_STYLE_TEXT_DECORATION_STYLE_SOLID,
	Keyword::double_, NS_STYLE_TEXT_DECORATION_STYLE_DOUBLE,
	Keyword::dotted, NS_STYLE_TEXT_DECORATION_STYLE_DOTTED,
	Keyword::dashed, NS_STYLE_TEXT_DECORATION_STYLE_DASHED,
	Keyword::wavy, NS_STYLE_TEXT_DECORATION_STYLE_WAVY,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTextOverflowKTable[] = {
	Keyword::clip, NS_STYLE_TEXT_OVERFLOW_CLIP,
	Keyword::ellipsis, NS_STYLE_TEXT_OVERFLOW_ELLIPSIS,
	Keyword::UNKNOWN, -1
};

const int32 Property::kTextTransformKTable[] = {
	Keyword::none, NS_STYLE_TEXT_TRANSFORM_NONE,
	Keyword::capitalize, NS_STYLE_TEXT_TRANSFORM_CAPITALIZE,
	Keyword::lowercase, NS_STYLE_TEXT_TRANSFORM_LOWERCASE,
	Keyword::uppercase, NS_STYLE_TEXT_TRANSFORM_UPPERCASE,
	Keyword::full_width, NS_STYLE_TEXT_TRANSFORM_FULLWIDTH,
	Keyword::UNKNOWN,-1
};

const int32 Property::kTransitionTimingFunctionKTable[] = {
	Keyword::ease, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE,
	Keyword::linear, NS_STYLE_TRANSITION_TIMING_FUNCTION_LINEAR,
	Keyword::ease_in, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE_IN,
	Keyword::ease_out, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE_OUT,
	Keyword::ease_in_out, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE_IN_OUT,
	Keyword::step_start, NS_STYLE_TRANSITION_TIMING_FUNCTION_STEP_START,
	Keyword::step_end, NS_STYLE_TRANSITION_TIMING_FUNCTION_STEP_END,
	Keyword::UNKNOWN,-1
};

const int32 Property::kUnicodeBidiKTable[] = {
	Keyword::normal, NS_STYLE_UNICODE_BIDI_NORMAL,
	Keyword::embed, NS_STYLE_UNICODE_BIDI_EMBED,
	Keyword::bidi_override, NS_STYLE_UNICODE_BIDI_OVERRIDE,
	Keyword::_moz_isolate, NS_STYLE_UNICODE_BIDI_ISOLATE,
	Keyword::_moz_isolate_override, NS_STYLE_UNICODE_BIDI_ISOLATE_OVERRIDE,
	Keyword::_moz_plaintext, NS_STYLE_UNICODE_BIDI_PLAINTEXT,
	Keyword::UNKNOWN,-1
};

const int32 Property::kUserFocusKTable[] = {
	Keyword::none,           NS_STYLE_USER_FOCUS_NONE,
	Keyword::normal,         NS_STYLE_USER_FOCUS_NORMAL,
	Keyword::ignore,         NS_STYLE_USER_FOCUS_IGNORE,
	Keyword::select_all,     NS_STYLE_USER_FOCUS_SELECT_ALL,
	Keyword::select_before,  NS_STYLE_USER_FOCUS_SELECT_BEFORE,
	Keyword::select_after,   NS_STYLE_USER_FOCUS_SELECT_AFTER,
	Keyword::select_same,    NS_STYLE_USER_FOCUS_SELECT_SAME,
	Keyword::select_menu,    NS_STYLE_USER_FOCUS_SELECT_MENU,
	Keyword::UNKNOWN,-1
};

const int32 Property::kUserInputKTable[] = {
	Keyword::none,     NS_STYLE_USER_INPUT_NONE,
	Keyword::auto_,     NS_STYLE_USER_INPUT_AUTO,
	Keyword::enabled,  NS_STYLE_USER_INPUT_ENABLED,
	Keyword::disabled, NS_STYLE_USER_INPUT_DISABLED,
	Keyword::UNKNOWN,-1
};

const int32 Property::kUserModifyKTable[] = {
	Keyword::read_only,  NS_STYLE_USER_MODIFY_READ_ONLY,
	Keyword::read_write, NS_STYLE_USER_MODIFY_READ_WRITE,
	Keyword::write_only, NS_STYLE_USER_MODIFY_WRITE_ONLY,
	Keyword::UNKNOWN,-1
};

const int32 Property::kUserSelectKTable[] = {
	Keyword::none,       NS_STYLE_USER_SELECT_NONE,
	Keyword::auto_,       NS_STYLE_USER_SELECT_AUTO,
	Keyword::text,       NS_STYLE_USER_SELECT_TEXT,
	Keyword::element,    NS_STYLE_USER_SELECT_ELEMENT,
	Keyword::elements,   NS_STYLE_USER_SELECT_ELEMENTS,
	Keyword::all,        NS_STYLE_USER_SELECT_ALL,
	Keyword::toggle,     NS_STYLE_USER_SELECT_TOGGLE,
	Keyword::tri_state,  NS_STYLE_USER_SELECT_TRI_STATE,
	Keyword::_moz_all,   NS_STYLE_USER_SELECT_MOZ_ALL,
	Keyword::_moz_none,  NS_STYLE_USER_SELECT_NONE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kVerticalAlignKTable[] = {
	Keyword::baseline, NS_STYLE_VERTICAL_ALIGN_BASELINE,
	Keyword::sub, NS_STYLE_VERTICAL_ALIGN_SUB,
	Keyword::super, NS_STYLE_VERTICAL_ALIGN_SUPER,
	Keyword::top, NS_STYLE_VERTICAL_ALIGN_TOP,
	Keyword::text_top, NS_STYLE_VERTICAL_ALIGN_TEXT_TOP,
	Keyword::middle, NS_STYLE_VERTICAL_ALIGN_MIDDLE,
	Keyword::_moz_middle_with_baseline, NS_STYLE_VERTICAL_ALIGN_MIDDLE_WITH_BASELINE,
	Keyword::bottom, NS_STYLE_VERTICAL_ALIGN_BOTTOM,
	Keyword::text_bottom, NS_STYLE_VERTICAL_ALIGN_TEXT_BOTTOM,
	Keyword::UNKNOWN,-1
};

const int32 Property::kVisibilityKTable[] = {
	Keyword::visible, NS_STYLE_VISIBILITY_VISIBLE,
	Keyword::hidden, NS_STYLE_VISIBILITY_HIDDEN,
	Keyword::collapse, NS_STYLE_VISIBILITY_COLLAPSE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kWhitespaceKTable[] = {
	Keyword::normal, NS_STYLE_WHITESPACE_NORMAL,
	Keyword::pre, NS_STYLE_WHITESPACE_PRE,
	Keyword::nowrap, NS_STYLE_WHITESPACE_NOWRAP,
	Keyword::pre_wrap, NS_STYLE_WHITESPACE_PRE_WRAP,
	Keyword::pre_line, NS_STYLE_WHITESPACE_PRE_LINE,
	Keyword::_moz_pre_discard_newlines, NS_STYLE_WHITESPACE_PRE_DISCARD_NEWLINES,
	Keyword::UNKNOWN,-1
};

const int32 Property::kWidthKTable[] = {
	Keyword::_moz_max_content, NS_STYLE_WIDTH_MAX_CONTENT,
	Keyword::_moz_min_content, NS_STYLE_WIDTH_MIN_CONTENT,
	Keyword::_moz_fit_content, NS_STYLE_WIDTH_FIT_CONTENT,
	Keyword::_moz_available, NS_STYLE_WIDTH_AVAILABLE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kWindowShadowKTable[] = {
	Keyword::none, NS_STYLE_WINDOW_SHADOW_NONE,
	Keyword::default, NS_STYLE_WINDOW_SHADOW_DEFAULT,
	Keyword::menu, NS_STYLE_WINDOW_SHADOW_MENU,
	Keyword::tooltip, NS_STYLE_WINDOW_SHADOW_TOOLTIP,
	Keyword::sheet, NS_STYLE_WINDOW_SHADOW_SHEET,
	Keyword::UNKNOWN,-1
};

const int32 Property::kWordBreakKTable[] = {
	Keyword::normal, NS_STYLE_WORDBREAK_NORMAL,
	Keyword::break_all, NS_STYLE_WORDBREAK_BREAK_ALL,
	Keyword::keep_all, NS_STYLE_WORDBREAK_KEEP_ALL,
	Keyword::UNKNOWN,-1
};

const int32 Property::kWordWrapKTable[] = {
	Keyword::normal, NS_STYLE_WORDWRAP_NORMAL,
	Keyword::break_word, NS_STYLE_WORDWRAP_BREAK_WORD,
	Keyword::UNKNOWN,-1
};

const int32 Property::kHyphensKTable[] = {
	Keyword::none, NS_STYLE_HYPHENS_NONE,
	Keyword::manual, NS_STYLE_HYPHENS_MANUAL,
	Keyword::auto_, NS_STYLE_HYPHENS_AUTO,
	Keyword::UNKNOWN,-1
};

// Specific keyword tables for XUL.properties
const int32 Property::kBoxAlignKTable[] = {
	Keyword::stretch,  NS_STYLE_BOX_ALIGN_STRETCH,
	Keyword::start,   NS_STYLE_BOX_ALIGN_START,
	Keyword::center, NS_STYLE_BOX_ALIGN_CENTER,
	Keyword::baseline, NS_STYLE_BOX_ALIGN_BASELINE,
	Keyword::end, NS_STYLE_BOX_ALIGN_END,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBoxDirectionKTable[] = {
	Keyword::normal,  NS_STYLE_BOX_DIRECTION_NORMAL,
	Keyword::reverse,   NS_STYLE_BOX_DIRECTION_REVERSE,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBoxOrientKTable[] = {
	Keyword::horizontal,  NS_STYLE_BOX_ORIENT_HORIZONTAL,
	Keyword::vertical,   NS_STYLE_BOX_ORIENT_VERTICAL,
	Keyword::inline_axis, NS_STYLE_BOX_ORIENT_HORIZONTAL,
	Keyword::block_axis, NS_STYLE_BOX_ORIENT_VERTICAL,
	Keyword::UNKNOWN,-1
};

const int32 Property::kBoxPackKTable[] = {
	Keyword::start,  NS_STYLE_BOX_PACK_START,
	Keyword::center,   NS_STYLE_BOX_PACK_CENTER,
	Keyword::end, NS_STYLE_BOX_PACK_END,
	Keyword::justify, NS_STYLE_BOX_PACK_JUSTIFY,
	Keyword::UNKNOWN,-1
};

// keyword tables for SVG properties

const int32 Property::kDominantBaselineKTable[] = {
	Keyword::auto_, NS_STYLE_DOMINANT_BASELINE_AUTO,
	Keyword::use_script, NS_STYLE_DOMINANT_BASELINE_USE_SCRIPT,
	Keyword::no_change, NS_STYLE_DOMINANT_BASELINE_NO_CHANGE,
	Keyword::reset_size, NS_STYLE_DOMINANT_BASELINE_RESET_SIZE,
	Keyword::alphabetic, NS_STYLE_DOMINANT_BASELINE_ALPHABETIC,
	Keyword::hanging, NS_STYLE_DOMINANT_BASELINE_HANGING,
	Keyword::ideographic, NS_STYLE_DOMINANT_BASELINE_IDEOGRAPHIC,
	Keyword::mathematical, NS_STYLE_DOMINANT_BASELINE_MATHEMATICAL,
	Keyword::central, NS_STYLE_DOMINANT_BASELINE_CENTRAL,
	Keyword::middle, NS_STYLE_DOMINANT_BASELINE_MIDDLE,
	Keyword::text_after_edge, NS_STYLE_DOMINANT_BASELINE_TEXT_AFTER_EDGE,
	Keyword::text_before_edge, NS_STYLE_DOMINANT_BASELINE_TEXT_BEFORE_EDGE,
	Keyword::UNKNOWN, -1
};

const int32 Property::kFillRuleKTable[] = {
	Keyword::nonzero, NS_STYLE_FILL_RULE_NONZERO,
	Keyword::evenodd, NS_STYLE_FILL_RULE_EVENODD,
	Keyword::UNKNOWN, -1
};

const int32 Property::kImageRenderingKTable[] = {
	Keyword::auto_, NS_STYLE_IMAGE_RENDERING_AUTO,
	Keyword::optimizespeed, NS_STYLE_IMAGE_RENDERING_OPTIMIZESPEED,
	Keyword::optimizequality, NS_STYLE_IMAGE_RENDERING_OPTIMIZEQUALITY,
	Keyword::_moz_crisp_edges, NS_STYLE_IMAGE_RENDERING_CRISPEDGES,
	Keyword::UNKNOWN, -1
};

const int32 Property::kMaskTypeKTable[] = {
	Keyword::luminance, NS_STYLE_MASK_TYPE_LUMINANCE,
	Keyword::alpha, NS_STYLE_MASK_TYPE_ALPHA,
	Keyword::UNKNOWN, -1
};

const int32 Property::kShapeRenderingKTable[] = {
	Keyword::auto_, NS_STYLE_SHAPE_RENDERING_AUTO,
	Keyword::optimizespeed, NS_STYLE_SHAPE_RENDERING_OPTIMIZESPEED,
	Keyword::crispedges, NS_STYLE_SHAPE_RENDERING_CRISPEDGES,
	Keyword::geometricprecision, NS_STYLE_SHAPE_RENDERING_GEOMETRICPRECISION,
	Keyword::UNKNOWN, -1
};

const int32 Property::kStrokeLinecapKTable[] = {
	Keyword::butt, NS_STYLE_STROKE_LINECAP_BUTT,
	Keyword::round, NS_STYLE_STROKE_LINECAP_ROUND,
	Keyword::square, NS_STYLE_STROKE_LINECAP_SQUARE,
	Keyword::UNKNOWN, -1
};

const int32 Property::kStrokeLinejoinKTable[] = {
	Keyword::miter, NS_STYLE_STROKE_LINEJOIN_MITER,
	Keyword::round, NS_STYLE_STROKE_LINEJOIN_ROUND,
	Keyword::bevel, NS_STYLE_STROKE_LINEJOIN_BEVEL,
	Keyword::UNKNOWN, -1
};

// Lookup table to store the sole objectValue keyword to let SVG glyphs inherit
// certain stroke-* properties from the outer text object
const int32 Property::kStrokeObjectValueKTable[] = {
	Keyword::_moz_objectvalue, NS_STYLE_STROKE_PROP_OBJECTVALUE,
	Keyword::UNKNOWN, -1
};

const int32 Property::kTextAnchorKTable[] = {
	Keyword::start, NS_STYLE_TEXT_ANCHOR_START,
	Keyword::middle, NS_STYLE_TEXT_ANCHOR_MIDDLE,
	Keyword::end, NS_STYLE_TEXT_ANCHOR_END,
	Keyword::UNKNOWN, -1
};

const int32 Property::kTextRenderingKTable[] = {
	Keyword::auto_, NS_STYLE_TEXT_RENDERING_AUTO,
	Keyword::optimizespeed, NS_STYLE_TEXT_RENDERING_OPTIMIZESPEED,
	Keyword::optimizelegibility, NS_STYLE_TEXT_RENDERING_OPTIMIZELEGIBILITY,
	Keyword::geometricprecision, NS_STYLE_TEXT_RENDERING_GEOMETRICPRECISION,
	Keyword::UNKNOWN, -1
};

const int32 Property::kVectorEffectKTable[] = {
	Keyword::none, NS_STYLE_VECTOR_EFFECT_NONE,
	Keyword::non_scaling_stroke, NS_STYLE_VECTOR_EFFECT_NON_SCALING_STROKE,
	Keyword::UNKNOWN, -1
};

const int32 Property::kColorInterpolationKTable[] = {
	Keyword::auto_, NS_STYLE_COLOR_INTERPOLATION_AUTO,
	Keyword::srgb, NS_STYLE_COLOR_INTERPOLATION_SRGB,
	Keyword::linearrgb, NS_STYLE_COLOR_INTERPOLATION_LINEARRGB,
	Keyword::UNKNOWN, -1
};

const int32 Property::kColumnFillKTable[] = {
	Keyword::auto_, NS_STYLE_COLUMN_FILL_AUTO,
	Keyword::balance, NS_STYLE_COLUMN_FILL_BALANCE,
	Keyword::UNKNOWN, -1
};

}