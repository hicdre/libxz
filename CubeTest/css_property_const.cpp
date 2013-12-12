#include "stdafx.h"
#include "css_property.h"
#include "css_keyword.h"

namespace css{

const int32 Property::kAnimationDirectionKTable[] = {
	Keyword_normal, NS_STYLE_ANIMATION_DIRECTION_NORMAL,
	Keyword_reverse, NS_STYLE_ANIMATION_DIRECTION_REVERSE,
	Keyword_alternate, NS_STYLE_ANIMATION_DIRECTION_ALTERNATE,
	Keyword_alternate_reverse, NS_STYLE_ANIMATION_DIRECTION_ALTERNATE_REVERSE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kAnimationFillModeKTable[] = {
	Keyword_none, NS_STYLE_ANIMATION_FILL_MODE_NONE,
	Keyword_forwards, NS_STYLE_ANIMATION_FILL_MODE_FORWARDS,
	Keyword_backwards, NS_STYLE_ANIMATION_FILL_MODE_BACKWARDS,
	Keyword_both, NS_STYLE_ANIMATION_FILL_MODE_BOTH,
	Keyword_UNKNOWN,-1
};

const int32 Property::kAnimationIterationCountKTable[] = {
	Keyword_infinite, NS_STYLE_ANIMATION_ITERATION_COUNT_INFINITE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kAnimationPlayStateKTable[] = {
	Keyword_running, NS_STYLE_ANIMATION_PLAY_STATE_RUNNING,
	Keyword_paused, NS_STYLE_ANIMATION_PLAY_STATE_PAUSED,
	Keyword_UNKNOWN,-1
};

const int32 Property::kAppearanceKTable[] = {
	Keyword_none,                   NS_THEME_NONE,
	Keyword_button,                 NS_THEME_BUTTON,
	Keyword_radio,                  NS_THEME_RADIO,
	Keyword_checkbox,               NS_THEME_CHECKBOX,
	Keyword_button_bevel,           NS_THEME_BUTTON_BEVEL,
	Keyword_toolbox,                NS_THEME_TOOLBOX,
	Keyword_toolbar,                NS_THEME_TOOLBAR,
	Keyword_toolbarbutton,          NS_THEME_TOOLBAR_BUTTON,
	Keyword_toolbargripper,         NS_THEME_TOOLBAR_GRIPPER,
	Keyword_dualbutton,             NS_THEME_TOOLBAR_DUAL_BUTTON,
	Keyword_toolbarbutton_dropdown, NS_THEME_TOOLBAR_BUTTON_DROPDOWN,
	Keyword_button_arrow_up,        NS_THEME_BUTTON_ARROW_UP,
	Keyword_button_arrow_down,      NS_THEME_BUTTON_ARROW_DOWN,
	Keyword_button_arrow_next,      NS_THEME_BUTTON_ARROW_NEXT,
	Keyword_button_arrow_previous,  NS_THEME_BUTTON_ARROW_PREVIOUS,
	Keyword_meterbar,               NS_THEME_METERBAR,
	Keyword_meterchunk,             NS_THEME_METERBAR_CHUNK,
	Keyword_separator,              NS_THEME_TOOLBAR_SEPARATOR,
	Keyword_splitter,               NS_THEME_SPLITTER,
	Keyword_statusbar,              NS_THEME_STATUSBAR,
	Keyword_statusbarpanel,         NS_THEME_STATUSBAR_PANEL,
	Keyword_resizerpanel,           NS_THEME_STATUSBAR_RESIZER_PANEL,
	Keyword_resizer,                NS_THEME_RESIZER,
	Keyword_listbox,                NS_THEME_LISTBOX,
	Keyword_listitem,               NS_THEME_LISTBOX_LISTITEM,
	Keyword_treeview,               NS_THEME_TREEVIEW,
	Keyword_treeitem,               NS_THEME_TREEVIEW_TREEITEM,
	Keyword_treetwisty,             NS_THEME_TREEVIEW_TWISTY,
	Keyword_treetwistyopen,         NS_THEME_TREEVIEW_TWISTY_OPEN,
	Keyword_treeline,               NS_THEME_TREEVIEW_LINE,
	Keyword_treeheader,             NS_THEME_TREEVIEW_HEADER,
	Keyword_treeheadercell,         NS_THEME_TREEVIEW_HEADER_CELL,
	Keyword_treeheadersortarrow,    NS_THEME_TREEVIEW_HEADER_SORTARROW,
	Keyword_progressbar,            NS_THEME_PROGRESSBAR,
	Keyword_progresschunk,          NS_THEME_PROGRESSBAR_CHUNK,
	Keyword_progressbar_vertical,   NS_THEME_PROGRESSBAR_VERTICAL,
	Keyword_progresschunk_vertical, NS_THEME_PROGRESSBAR_CHUNK_VERTICAL,
	Keyword_tab,                    NS_THEME_TAB,
	Keyword_tabpanels,              NS_THEME_TAB_PANELS,
	Keyword_tabpanel,               NS_THEME_TAB_PANEL,
	Keyword_tab_scroll_arrow_back,  NS_THEME_TAB_SCROLLARROW_BACK,
	Keyword_tab_scroll_arrow_forward, NS_THEME_TAB_SCROLLARROW_FORWARD,
	Keyword_tooltip,                NS_THEME_TOOLTIP,
	Keyword_spinner,                NS_THEME_SPINNER,
	Keyword_spinner_upbutton,       NS_THEME_SPINNER_UP_BUTTON,
	Keyword_spinner_downbutton,     NS_THEME_SPINNER_DOWN_BUTTON,
	Keyword_spinner_textfield,      NS_THEME_SPINNER_TEXTFIELD,
	Keyword_scrollbar,              NS_THEME_SCROLLBAR,
	Keyword_scrollbar_small,        NS_THEME_SCROLLBAR_SMALL,
	Keyword_scrollbarbutton_up,     NS_THEME_SCROLLBAR_BUTTON_UP,
	Keyword_scrollbarbutton_down,   NS_THEME_SCROLLBAR_BUTTON_DOWN,
	Keyword_scrollbarbutton_left,   NS_THEME_SCROLLBAR_BUTTON_LEFT,
	Keyword_scrollbarbutton_right,  NS_THEME_SCROLLBAR_BUTTON_RIGHT,
	Keyword_scrollbartrack_horizontal,    NS_THEME_SCROLLBAR_TRACK_HORIZONTAL,
	Keyword_scrollbartrack_vertical,      NS_THEME_SCROLLBAR_TRACK_VERTICAL,
	Keyword_scrollbarthumb_horizontal,    NS_THEME_SCROLLBAR_THUMB_HORIZONTAL,
	Keyword_scrollbarthumb_vertical,      NS_THEME_SCROLLBAR_THUMB_VERTICAL,
	Keyword_textfield,              NS_THEME_TEXTFIELD,
	Keyword_textfield_multiline,    NS_THEME_TEXTFIELD_MULTILINE,
	Keyword_caret,                  NS_THEME_TEXTFIELD_CARET,
	Keyword_searchfield,            NS_THEME_SEARCHFIELD,
	Keyword_menulist,               NS_THEME_DROPDOWN,
	Keyword_menulist_button,        NS_THEME_DROPDOWN_BUTTON,
	Keyword_menulist_text,          NS_THEME_DROPDOWN_TEXT,
	Keyword_menulist_textfield,     NS_THEME_DROPDOWN_TEXTFIELD,
	Keyword_range,                  NS_THEME_TEXTFIELD, // disabled on branch NS_THEME_RANGE,
	Keyword_range_thumb,            NS_THEME_NONE, // disabled on branch NS_THEME_RANGE_THUMB,
	Keyword_scale_horizontal,       NS_THEME_SCALE_HORIZONTAL,
	Keyword_scale_vertical,         NS_THEME_SCALE_VERTICAL,
	Keyword_scalethumb_horizontal,  NS_THEME_SCALE_THUMB_HORIZONTAL,
	Keyword_scalethumb_vertical,    NS_THEME_SCALE_THUMB_VERTICAL,
	Keyword_scalethumbstart,        NS_THEME_SCALE_THUMB_START,
	Keyword_scalethumbend,          NS_THEME_SCALE_THUMB_END,
	Keyword_scalethumbtick,         NS_THEME_SCALE_TICK,
	Keyword_groupbox,               NS_THEME_GROUPBOX,
	Keyword_checkbox_container,     NS_THEME_CHECKBOX_CONTAINER,
	Keyword_radio_container,        NS_THEME_RADIO_CONTAINER,
	Keyword_checkbox_label,         NS_THEME_CHECKBOX_LABEL,
	Keyword_radio_label,            NS_THEME_RADIO_LABEL,
	Keyword_button_focus,           NS_THEME_BUTTON_FOCUS,
	Keyword_window,                 NS_THEME_WINDOW,
	Keyword_dialog,                 NS_THEME_DIALOG,
	Keyword_menubar,                NS_THEME_MENUBAR,
	Keyword_menupopup,              NS_THEME_MENUPOPUP,
	Keyword_menuitem,               NS_THEME_MENUITEM,
	Keyword_checkmenuitem,          NS_THEME_CHECKMENUITEM,
	Keyword_radiomenuitem,          NS_THEME_RADIOMENUITEM,
	Keyword_menucheckbox,           NS_THEME_MENUCHECKBOX,
	Keyword_menuradio,              NS_THEME_MENURADIO,
	Keyword_menuseparator,          NS_THEME_MENUSEPARATOR,
	Keyword_menuarrow,              NS_THEME_MENUARROW,
	Keyword_menuimage,              NS_THEME_MENUIMAGE,
	Keyword_menuitemtext,           NS_THEME_MENUITEMTEXT,
	Keyword__moz_win_media_toolbox, NS_THEME_WIN_MEDIA_TOOLBOX,
	Keyword__moz_win_communications_toolbox, NS_THEME_WIN_COMMUNICATIONS_TOOLBOX,
	Keyword__moz_win_browsertabbar_toolbox,  NS_THEME_WIN_BROWSER_TAB_BAR_TOOLBOX,
	Keyword__moz_win_glass,         NS_THEME_WIN_GLASS,
	Keyword__moz_win_borderless_glass,      NS_THEME_WIN_BORDERLESS_GLASS,
	Keyword__moz_mac_unified_toolbar,       NS_THEME_MOZ_MAC_UNIFIED_TOOLBAR,
	Keyword__moz_window_titlebar,           NS_THEME_WINDOW_TITLEBAR,
	Keyword__moz_window_titlebar_maximized, NS_THEME_WINDOW_TITLEBAR_MAXIMIZED,
	Keyword__moz_window_frame_left,         NS_THEME_WINDOW_FRAME_LEFT,
	Keyword__moz_window_frame_right,        NS_THEME_WINDOW_FRAME_RIGHT,
	Keyword__moz_window_frame_bottom,       NS_THEME_WINDOW_FRAME_BOTTOM,
	Keyword__moz_window_button_close,       NS_THEME_WINDOW_BUTTON_CLOSE,
	Keyword__moz_window_button_minimize,    NS_THEME_WINDOW_BUTTON_MINIMIZE,
	Keyword__moz_window_button_maximize,    NS_THEME_WINDOW_BUTTON_MAXIMIZE,
	Keyword__moz_window_button_restore,     NS_THEME_WINDOW_BUTTON_RESTORE,
	Keyword__moz_window_button_box,         NS_THEME_WINDOW_BUTTON_BOX,
	Keyword__moz_window_button_box_maximized, NS_THEME_WINDOW_BUTTON_BOX_MAXIMIZED,
	Keyword__moz_win_exclude_glass,         NS_THEME_WIN_EXCLUDE_GLASS,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBackfaceVisibilityKTable[] = {
	Keyword_visible, NS_STYLE_BACKFACE_VISIBILITY_VISIBLE,
	Keyword_hidden, NS_STYLE_BACKFACE_VISIBILITY_HIDDEN,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTransformStyleKTable[] = {
	Keyword_flat, NS_STYLE_TRANSFORM_STYLE_FLAT,
	Keyword_preserve_3d, NS_STYLE_TRANSFORM_STYLE_PRESERVE_3D,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBackgroundAttachmentKTable[] = {
	Keyword_fixed, NS_STYLE_BG_ATTACHMENT_FIXED,
	Keyword_scroll, NS_STYLE_BG_ATTACHMENT_SCROLL,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBackgroundInlinePolicyKTable[] = {
	Keyword_each_box,     NS_STYLE_BG_INLINE_POLICY_EACH_BOX,
	Keyword_continuous,   NS_STYLE_BG_INLINE_POLICY_CONTINUOUS,
	Keyword_bounding_box, NS_STYLE_BG_INLINE_POLICY_BOUNDING_BOX,
	Keyword_UNKNOWN,-1
};

MOZ_STATIC_ASSERT(NS_STYLE_BG_CLIP_BORDER == NS_STYLE_BG_ORIGIN_BORDER &&
				  NS_STYLE_BG_CLIP_PADDING == NS_STYLE_BG_ORIGIN_PADDING &&
				  NS_STYLE_BG_CLIP_CONTENT == NS_STYLE_BG_ORIGIN_CONTENT,
				  "bg-clip and bg-origin style constants must agree");
const int32 Property::kBackgroundOriginKTable[] = {
	Keyword_border_box, NS_STYLE_BG_ORIGIN_BORDER,
	Keyword_padding_box, NS_STYLE_BG_ORIGIN_PADDING,
	Keyword_content_box, NS_STYLE_BG_ORIGIN_CONTENT,
	Keyword_UNKNOWN,-1
};

// Note: Don't change this table unless you update
// parseBackgroundPosition!

const int32 Property::kBackgroundPositionKTable[] = {
	Keyword_center, NS_STYLE_BG_POSITION_CENTER,
	Keyword_top, NS_STYLE_BG_POSITION_TOP,
	Keyword_bottom, NS_STYLE_BG_POSITION_BOTTOM,
	Keyword_left, NS_STYLE_BG_POSITION_LEFT,
	Keyword_right, NS_STYLE_BG_POSITION_RIGHT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBackgroundRepeatKTable[] = {
	Keyword_no_repeat,  NS_STYLE_BG_REPEAT_NO_REPEAT,
	Keyword_repeat,     NS_STYLE_BG_REPEAT_REPEAT,
	Keyword_repeat_x,   NS_STYLE_BG_REPEAT_REPEAT_X,
	Keyword_repeat_y,   NS_STYLE_BG_REPEAT_REPEAT_Y,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBackgroundRepeatPartKTable[] = {
	Keyword_no_repeat,  NS_STYLE_BG_REPEAT_NO_REPEAT,
	Keyword_repeat,     NS_STYLE_BG_REPEAT_REPEAT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBackgroundSizeKTable[] = {
	Keyword_contain, NS_STYLE_BG_SIZE_CONTAIN,
	Keyword_cover,   NS_STYLE_BG_SIZE_COVER,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBorderCollapseKTable[] = {
	Keyword_collapse,  NS_STYLE_BORDER_COLLAPSE,
	Keyword_separate,  NS_STYLE_BORDER_SEPARATE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBorderColorKTable[] = {
	Keyword__moz_use_text_color, NS_STYLE_COLOR_MOZ_USE_TEXT_COLOR,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBorderImageRepeatKTable[] = {
	Keyword_stretch, NS_STYLE_BORDER_IMAGE_REPEAT_STRETCH,
	Keyword_repeat, NS_STYLE_BORDER_IMAGE_REPEAT_REPEAT,
	Keyword_round, NS_STYLE_BORDER_IMAGE_REPEAT_ROUND,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBorderImageSliceKTable[] = {
	Keyword_fill, NS_STYLE_BORDER_IMAGE_SLICE_FILL,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBorderStyleKTable[] = {
	Keyword_none,   NS_STYLE_BORDER_STYLE_NONE,
	Keyword_hidden, NS_STYLE_BORDER_STYLE_HIDDEN,
	Keyword_dotted, NS_STYLE_BORDER_STYLE_DOTTED,
	Keyword_dashed, NS_STYLE_BORDER_STYLE_DASHED,
	Keyword_solid,  NS_STYLE_BORDER_STYLE_SOLID,
	Keyword_double, NS_STYLE_BORDER_STYLE_DOUBLE,
	Keyword_groove, NS_STYLE_BORDER_STYLE_GROOVE,
	Keyword_ridge,  NS_STYLE_BORDER_STYLE_RIDGE,
	Keyword_inset,  NS_STYLE_BORDER_STYLE_INSET,
	Keyword_outset, NS_STYLE_BORDER_STYLE_OUTSET,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBorderWidthKTable[] = {
	Keyword_thin, NS_STYLE_BORDER_WIDTH_THIN,
	Keyword_medium, NS_STYLE_BORDER_WIDTH_MEDIUM,
	Keyword_thick, NS_STYLE_BORDER_WIDTH_THICK,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBoxPropSourceKTable[] = {
	Keyword_physical,     NS_BOXPROP_SOURCE_PHYSICAL,
	Keyword_logical,      NS_BOXPROP_SOURCE_LOGICAL,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBoxShadowTypeKTable[] = {
	Keyword_inset, NS_STYLE_BOX_SHADOW_INSET,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBoxSizingKTable[] = {
	Keyword_content_box,  NS_STYLE_BOX_SIZING_CONTENT,
	Keyword_border_box,   NS_STYLE_BOX_SIZING_BORDER,
	Keyword_padding_box,  NS_STYLE_BOX_SIZING_PADDING,
	Keyword_UNKNOWN,-1
};

const int32 Property::kCaptionSideKTable[] = {
	Keyword_top,                  NS_STYLE_CAPTION_SIDE_TOP,
	Keyword_right,                NS_STYLE_CAPTION_SIDE_RIGHT,
	Keyword_bottom,               NS_STYLE_CAPTION_SIDE_BOTTOM,
	Keyword_left,                 NS_STYLE_CAPTION_SIDE_LEFT,
	Keyword_top_outside,          NS_STYLE_CAPTION_SIDE_TOP_OUTSIDE,
	Keyword_bottom_outside,       NS_STYLE_CAPTION_SIDE_BOTTOM_OUTSIDE,
	Keyword_UNKNOWN,              -1
};

const int32 Property::kClearKTable[] = {
	Keyword_none, NS_STYLE_CLEAR_NONE,
	Keyword_left, NS_STYLE_CLEAR_LEFT,
	Keyword_right, NS_STYLE_CLEAR_RIGHT,
	Keyword_both, NS_STYLE_CLEAR_LEFT_AND_RIGHT,
	Keyword_UNKNOWN,-1
};

// See also kObjectPatternKTable for SVG paint-specific values
const int32 Property::kColorKTable[] = {
	Keyword_activeborder, LookAndFeel::eColorID_activeborder,
	Keyword_activecaption, LookAndFeel::eColorID_activecaption,
	Keyword_appworkspace, LookAndFeel::eColorID_appworkspace,
	Keyword_background, LookAndFeel::eColorID_background,
	Keyword_buttonface, LookAndFeel::eColorID_buttonface,
	Keyword_buttonhighlight, LookAndFeel::eColorID_buttonhighlight,
	Keyword_buttonshadow, LookAndFeel::eColorID_buttonshadow,
	Keyword_buttontext, LookAndFeel::eColorID_buttontext,
	Keyword_captiontext, LookAndFeel::eColorID_captiontext,
	Keyword_graytext, LookAndFeel::eColorID_graytext,
	Keyword_highlight, LookAndFeel::eColorID_highlight,
	Keyword_highlighttext, LookAndFeel::eColorID_highlighttext,
	Keyword_inactiveborder, LookAndFeel::eColorID_inactiveborder,
	Keyword_inactivecaption, LookAndFeel::eColorID_inactivecaption,
	Keyword_inactivecaptiontext, LookAndFeel::eColorID_inactivecaptiontext,
	Keyword_infobackground, LookAndFeel::eColorID_infobackground,
	Keyword_infotext, LookAndFeel::eColorID_infotext,
	Keyword_menu, LookAndFeel::eColorID_menu,
	Keyword_menutext, LookAndFeel::eColorID_menutext,
	Keyword_scrollbar, LookAndFeel::eColorID_scrollbar,
	Keyword_threeddarkshadow, LookAndFeel::eColorID_threeddarkshadow,
	Keyword_threedface, LookAndFeel::eColorID_threedface,
	Keyword_threedhighlight, LookAndFeel::eColorID_threedhighlight,
	Keyword_threedlightshadow, LookAndFeel::eColorID_threedlightshadow,
	Keyword_threedshadow, LookAndFeel::eColorID_threedshadow,
	Keyword_window, LookAndFeel::eColorID_window,
	Keyword_windowframe, LookAndFeel::eColorID_windowframe,
	Keyword_windowtext, LookAndFeel::eColorID_windowtext,
	Keyword__moz_activehyperlinktext, NS_COLOR_MOZ_ACTIVEHYPERLINKTEXT,
	Keyword__moz_buttondefault, LookAndFeel::eColorID__moz_buttondefault,
	Keyword__moz_buttonhoverface, LookAndFeel::eColorID__moz_buttonhoverface,
	Keyword__moz_buttonhovertext, LookAndFeel::eColorID__moz_buttonhovertext,
	Keyword__moz_cellhighlight, LookAndFeel::eColorID__moz_cellhighlight,
	Keyword__moz_cellhighlighttext, LookAndFeel::eColorID__moz_cellhighlighttext,
	Keyword__moz_eventreerow, LookAndFeel::eColorID__moz_eventreerow,
	Keyword__moz_field, LookAndFeel::eColorID__moz_field,
	Keyword__moz_fieldtext, LookAndFeel::eColorID__moz_fieldtext,
	Keyword__moz_default_background_color, NS_COLOR_MOZ_DEFAULT_BACKGROUND_COLOR,
	Keyword__moz_default_color, NS_COLOR_MOZ_DEFAULT_COLOR,
	Keyword__moz_dialog, LookAndFeel::eColorID__moz_dialog,
	Keyword__moz_dialogtext, LookAndFeel::eColorID__moz_dialogtext,
	Keyword__moz_dragtargetzone, LookAndFeel::eColorID__moz_dragtargetzone,
	Keyword__moz_hyperlinktext, NS_COLOR_MOZ_HYPERLINKTEXT,
	Keyword__moz_html_cellhighlight, LookAndFeel::eColorID__moz_html_cellhighlight,
	Keyword__moz_html_cellhighlighttext, LookAndFeel::eColorID__moz_html_cellhighlighttext,
	Keyword__moz_mac_chrome_active, LookAndFeel::eColorID__moz_mac_chrome_active,
	Keyword__moz_mac_chrome_inactive, LookAndFeel::eColorID__moz_mac_chrome_inactive,
	Keyword__moz_mac_focusring, LookAndFeel::eColorID__moz_mac_focusring,
	Keyword__moz_mac_menuselect, LookAndFeel::eColorID__moz_mac_menuselect,
	Keyword__moz_mac_menushadow, LookAndFeel::eColorID__moz_mac_menushadow,
	Keyword__moz_mac_menutextdisable, LookAndFeel::eColorID__moz_mac_menutextdisable,
	Keyword__moz_mac_menutextselect, LookAndFeel::eColorID__moz_mac_menutextselect,
	Keyword__moz_mac_disabledtoolbartext, LookAndFeel::eColorID__moz_mac_disabledtoolbartext,
	Keyword__moz_mac_alternateprimaryhighlight, LookAndFeel::eColorID__moz_mac_alternateprimaryhighlight,
	Keyword__moz_mac_secondaryhighlight, LookAndFeel::eColorID__moz_mac_secondaryhighlight,
	Keyword__moz_menuhover, LookAndFeel::eColorID__moz_menuhover,
	Keyword__moz_menuhovertext, LookAndFeel::eColorID__moz_menuhovertext,
	Keyword__moz_menubartext, LookAndFeel::eColorID__moz_menubartext,
	Keyword__moz_menubarhovertext, LookAndFeel::eColorID__moz_menubarhovertext,
	Keyword__moz_oddtreerow, LookAndFeel::eColorID__moz_oddtreerow,
	Keyword__moz_visitedhyperlinktext, NS_COLOR_MOZ_VISITEDHYPERLINKTEXT,
	Keyword_currentcolor, NS_COLOR_CURRENTCOLOR,
	Keyword__moz_win_mediatext, LookAndFeel::eColorID__moz_win_mediatext,
	Keyword__moz_win_communicationstext, LookAndFeel::eColorID__moz_win_communicationstext,
	Keyword__moz_nativehyperlinktext, LookAndFeel::eColorID__moz_nativehyperlinktext,
	Keyword__moz_comboboxtext, LookAndFeel::eColorID__moz_comboboxtext,
	Keyword__moz_combobox, LookAndFeel::eColorID__moz_combobox,
	Keyword_UNKNOWN,-1
};

const int32 Property::kContentKTable[] = {
	Keyword_open_quote, NS_STYLE_CONTENT_OPEN_QUOTE,
	Keyword_close_quote, NS_STYLE_CONTENT_CLOSE_QUOTE,
	Keyword_no_open_quote, NS_STYLE_CONTENT_NO_OPEN_QUOTE,
	Keyword_no_close_quote, NS_STYLE_CONTENT_NO_CLOSE_QUOTE,
	Keyword__moz_alt_content, NS_STYLE_CONTENT_ALT_CONTENT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kCursorKTable[] = {
	// CSS 2.0
	Keyword_auto, NS_STYLE_CURSOR_AUTO,
	Keyword_crosshair, NS_STYLE_CURSOR_CROSSHAIR,
	Keyword_default, NS_STYLE_CURSOR_DEFAULT,
	Keyword_pointer, NS_STYLE_CURSOR_POINTER,
	Keyword_move, NS_STYLE_CURSOR_MOVE,
	Keyword_e_resize, NS_STYLE_CURSOR_E_RESIZE,
	Keyword_ne_resize, NS_STYLE_CURSOR_NE_RESIZE,
	Keyword_nw_resize, NS_STYLE_CURSOR_NW_RESIZE,
	Keyword_n_resize, NS_STYLE_CURSOR_N_RESIZE,
	Keyword_se_resize, NS_STYLE_CURSOR_SE_RESIZE,
	Keyword_sw_resize, NS_STYLE_CURSOR_SW_RESIZE,
	Keyword_s_resize, NS_STYLE_CURSOR_S_RESIZE,
	Keyword_w_resize, NS_STYLE_CURSOR_W_RESIZE,
	Keyword_text, NS_STYLE_CURSOR_TEXT,
	Keyword_wait, NS_STYLE_CURSOR_WAIT,
	Keyword_help, NS_STYLE_CURSOR_HELP,
	// CSS 2.1
	Keyword_progress, NS_STYLE_CURSOR_SPINNING,
	// CSS3 basic user interface module
	Keyword_copy, NS_STYLE_CURSOR_COPY,
	Keyword_alias, NS_STYLE_CURSOR_ALIAS,
	Keyword_context_menu, NS_STYLE_CURSOR_CONTEXT_MENU,
	Keyword_cell, NS_STYLE_CURSOR_CELL,
	Keyword_not_allowed, NS_STYLE_CURSOR_NOT_ALLOWED,
	Keyword_col_resize, NS_STYLE_CURSOR_COL_RESIZE,
	Keyword_row_resize, NS_STYLE_CURSOR_ROW_RESIZE,
	Keyword_no_drop, NS_STYLE_CURSOR_NO_DROP,
	Keyword_vertical_text, NS_STYLE_CURSOR_VERTICAL_TEXT,
	Keyword_all_scroll, NS_STYLE_CURSOR_ALL_SCROLL,
	Keyword_nesw_resize, NS_STYLE_CURSOR_NESW_RESIZE,
	Keyword_nwse_resize, NS_STYLE_CURSOR_NWSE_RESIZE,
	Keyword_ns_resize, NS_STYLE_CURSOR_NS_RESIZE,
	Keyword_ew_resize, NS_STYLE_CURSOR_EW_RESIZE,
	Keyword_none, NS_STYLE_CURSOR_NONE,
	// -moz- prefixed vendor specific
	Keyword__moz_grab, NS_STYLE_CURSOR_GRAB,
	Keyword__moz_grabbing, NS_STYLE_CURSOR_GRABBING,
	Keyword__moz_zoom_in, NS_STYLE_CURSOR_MOZ_ZOOM_IN,
	Keyword__moz_zoom_out, NS_STYLE_CURSOR_MOZ_ZOOM_OUT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kDirectionKTable[] = {
	Keyword_ltr,      NS_STYLE_DIRECTION_LTR,
	Keyword_rtl,      NS_STYLE_DIRECTION_RTL,
	Keyword_UNKNOWN,-1
};

int32 Property::kDisplayKTable[] = {
	Keyword_none,               NS_STYLE_DISPLAY_NONE,
	Keyword_inline,             NS_STYLE_DISPLAY_INLINE,
	Keyword_block,              NS_STYLE_DISPLAY_BLOCK,
	Keyword_inline_block,       NS_STYLE_DISPLAY_INLINE_BLOCK,
	Keyword_list_item,          NS_STYLE_DISPLAY_LIST_ITEM,
	Keyword_table,              NS_STYLE_DISPLAY_TABLE,
	Keyword_inline_table,       NS_STYLE_DISPLAY_INLINE_TABLE,
	Keyword_table_row_group,    NS_STYLE_DISPLAY_TABLE_ROW_GROUP,
	Keyword_table_header_group, NS_STYLE_DISPLAY_TABLE_HEADER_GROUP,
	Keyword_table_footer_group, NS_STYLE_DISPLAY_TABLE_FOOTER_GROUP,
	Keyword_table_row,          NS_STYLE_DISPLAY_TABLE_ROW,
	Keyword_table_column_group, NS_STYLE_DISPLAY_TABLE_COLUMN_GROUP,
	Keyword_table_column,       NS_STYLE_DISPLAY_TABLE_COLUMN,
	Keyword_table_cell,         NS_STYLE_DISPLAY_TABLE_CELL,
	Keyword_table_caption,      NS_STYLE_DISPLAY_TABLE_CAPTION,
	// Make sure this is kept in sync with the code in
	// nsCSSFrameConstructor::ConstructXULFrame
	Keyword__moz_box,           NS_STYLE_DISPLAY_BOX,
	Keyword__moz_inline_box,    NS_STYLE_DISPLAY_INLINE_BOX,
#ifdef MOZ_XUL
	Keyword__moz_grid,          NS_STYLE_DISPLAY_GRID,
	Keyword__moz_inline_grid,   NS_STYLE_DISPLAY_INLINE_GRID,
	Keyword__moz_grid_group,    NS_STYLE_DISPLAY_GRID_GROUP,
	Keyword__moz_grid_line,     NS_STYLE_DISPLAY_GRID_LINE,
	Keyword__moz_stack,         NS_STYLE_DISPLAY_STACK,
	Keyword__moz_inline_stack,  NS_STYLE_DISPLAY_INLINE_STACK,
	Keyword__moz_deck,          NS_STYLE_DISPLAY_DECK,
	Keyword__moz_popup,         NS_STYLE_DISPLAY_POPUP,
	Keyword__moz_groupbox,      NS_STYLE_DISPLAY_GROUPBOX,
#endif
#ifdef MOZ_FLEXBOX
	// XXXdholbert NOTE: These currently need to be the last entries in the
	// table, because the "is flexbox enabled" pref that disables these will
	// disable all the entries after them, too.
	Keyword_flex,               NS_STYLE_DISPLAY_FLEX,
	Keyword_inline_flex,        NS_STYLE_DISPLAY_INLINE_FLEX,
#endif // MOZ_FLEXBOX
	Keyword_UNKNOWN,-1
};

const int32 Property::kEmptyCellsKTable[] = {
	Keyword_show,                 NS_STYLE_TABLE_EMPTY_CELLS_SHOW,
	Keyword_hide,                 NS_STYLE_TABLE_EMPTY_CELLS_HIDE,
	Keyword__moz_show_background, NS_STYLE_TABLE_EMPTY_CELLS_SHOW_BACKGROUND,
	Keyword_UNKNOWN,-1
};

#ifdef MOZ_FLEXBOX
const int32 Property::kAlignItemsKTable[] = {
	Keyword_flex_start, NS_STYLE_ALIGN_ITEMS_FLEX_START,
	Keyword_flex_end,   NS_STYLE_ALIGN_ITEMS_FLEX_END,
	Keyword_center,     NS_STYLE_ALIGN_ITEMS_CENTER,
	Keyword_baseline,   NS_STYLE_ALIGN_ITEMS_BASELINE,
	Keyword_stretch,    NS_STYLE_ALIGN_ITEMS_STRETCH,
	Keyword_UNKNOWN,-1
};

// Note: 'align-self' takes the same keywords as 'align-items', plus 'auto'.
const int32 Property::kAlignSelfKTable[] = {
	Keyword_flex_start, NS_STYLE_ALIGN_ITEMS_FLEX_START,
	Keyword_flex_end,   NS_STYLE_ALIGN_ITEMS_FLEX_END,
	Keyword_center,     NS_STYLE_ALIGN_ITEMS_CENTER,
	Keyword_baseline,   NS_STYLE_ALIGN_ITEMS_BASELINE,
	Keyword_stretch,    NS_STYLE_ALIGN_ITEMS_STRETCH,
	Keyword_auto,       NS_STYLE_ALIGN_SELF_AUTO,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFlexDirectionKTable[] = {
	Keyword_row,            NS_STYLE_FLEX_DIRECTION_ROW,
	Keyword_row_reverse,    NS_STYLE_FLEX_DIRECTION_ROW_REVERSE,
	Keyword_column,         NS_STYLE_FLEX_DIRECTION_COLUMN,
	Keyword_column_reverse, NS_STYLE_FLEX_DIRECTION_COLUMN_REVERSE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kJustifyContentKTable[] = {
	Keyword_flex_start,    NS_STYLE_JUSTIFY_CONTENT_FLEX_START,
	Keyword_flex_end,      NS_STYLE_JUSTIFY_CONTENT_FLEX_END,
	Keyword_center,        NS_STYLE_JUSTIFY_CONTENT_CENTER,
	Keyword_space_between, NS_STYLE_JUSTIFY_CONTENT_SPACE_BETWEEN,
	Keyword_space_around,  NS_STYLE_JUSTIFY_CONTENT_SPACE_AROUND,
	Keyword_UNKNOWN,-1
};
#endif // MOZ_FLEXBOX

const int32 Property::kFloatKTable[] = {
	Keyword_none,  NS_STYLE_FLOAT_NONE,
	Keyword_left,  NS_STYLE_FLOAT_LEFT,
	Keyword_right, NS_STYLE_FLOAT_RIGHT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFloatEdgeKTable[] = {
	Keyword_content_box,  NS_STYLE_FLOAT_EDGE_CONTENT,
	Keyword_margin_box,  NS_STYLE_FLOAT_EDGE_MARGIN,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFontKTable[] = {
	// CSS2.
	Keyword_caption, NS_STYLE_FONT_CAPTION,
	Keyword_icon, NS_STYLE_FONT_ICON,
	Keyword_menu, NS_STYLE_FONT_MENU,
	Keyword_message_box, NS_STYLE_FONT_MESSAGE_BOX,
	Keyword_small_caption, NS_STYLE_FONT_SMALL_CAPTION,
	Keyword_status_bar, NS_STYLE_FONT_STATUS_BAR,

	// Proposed for CSS3.
	Keyword__moz_window, NS_STYLE_FONT_WINDOW,
	Keyword__moz_document, NS_STYLE_FONT_DOCUMENT,
	Keyword__moz_workspace, NS_STYLE_FONT_WORKSPACE,
	Keyword__moz_desktop, NS_STYLE_FONT_DESKTOP,
	Keyword__moz_info, NS_STYLE_FONT_INFO,
	Keyword__moz_dialog, NS_STYLE_FONT_DIALOG,
	Keyword__moz_button, NS_STYLE_FONT_BUTTON,
	Keyword__moz_pull_down_menu, NS_STYLE_FONT_PULL_DOWN_MENU,
	Keyword__moz_list, NS_STYLE_FONT_LIST,
	Keyword__moz_field, NS_STYLE_FONT_FIELD,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFontSizeKTable[] = {
	Keyword_xx_small, NS_STYLE_FONT_SIZE_XXSMALL,
	Keyword_x_small, NS_STYLE_FONT_SIZE_XSMALL,
	Keyword_small, NS_STYLE_FONT_SIZE_SMALL,
	Keyword_medium, NS_STYLE_FONT_SIZE_MEDIUM,
	Keyword_large, NS_STYLE_FONT_SIZE_LARGE,
	Keyword_x_large, NS_STYLE_FONT_SIZE_XLARGE,
	Keyword_xx_large, NS_STYLE_FONT_SIZE_XXLARGE,
	Keyword_larger, NS_STYLE_FONT_SIZE_LARGER,
	Keyword_smaller, NS_STYLE_FONT_SIZE_SMALLER,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFontStretchKTable[] = {
	Keyword_ultra_condensed, NS_STYLE_FONT_STRETCH_ULTRA_CONDENSED,
	Keyword_extra_condensed, NS_STYLE_FONT_STRETCH_EXTRA_CONDENSED,
	Keyword_condensed, NS_STYLE_FONT_STRETCH_CONDENSED,
	Keyword_semi_condensed, NS_STYLE_FONT_STRETCH_SEMI_CONDENSED,
	Keyword_normal, NS_STYLE_FONT_STRETCH_NORMAL,
	Keyword_semi_expanded, NS_STYLE_FONT_STRETCH_SEMI_EXPANDED,
	Keyword_expanded, NS_STYLE_FONT_STRETCH_EXPANDED,
	Keyword_extra_expanded, NS_STYLE_FONT_STRETCH_EXTRA_EXPANDED,
	Keyword_ultra_expanded, NS_STYLE_FONT_STRETCH_ULTRA_EXPANDED,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFontStyleKTable[] = {
	Keyword_normal, NS_STYLE_FONT_STYLE_NORMAL,
	Keyword_italic, NS_STYLE_FONT_STYLE_ITALIC,
	Keyword_oblique, NS_STYLE_FONT_STYLE_OBLIQUE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFontVariantKTable[] = {
	Keyword_normal, NS_STYLE_FONT_VARIANT_NORMAL,
	Keyword_small_caps, NS_STYLE_FONT_VARIANT_SMALL_CAPS,
	Keyword_UNKNOWN,-1
};

const int32 Property::kFontWeightKTable[] = {
	Keyword_normal, NS_STYLE_FONT_WEIGHT_NORMAL,
	Keyword_bold, NS_STYLE_FONT_WEIGHT_BOLD,
	Keyword_bolder, NS_STYLE_FONT_WEIGHT_BOLDER,
	Keyword_lighter, NS_STYLE_FONT_WEIGHT_LIGHTER,
	Keyword_UNKNOWN,-1
};

const int32 Property::kIMEModeKTable[] = {
	Keyword_normal, NS_STYLE_IME_MODE_NORMAL,
	Keyword_auto, NS_STYLE_IME_MODE_AUTO,
	Keyword_active, NS_STYLE_IME_MODE_ACTIVE,
	Keyword_disabled, NS_STYLE_IME_MODE_DISABLED,
	Keyword_inactive, NS_STYLE_IME_MODE_INACTIVE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kLineHeightKTable[] = {
	// -moz- prefixed, intended for internal use for single-line controls
	Keyword__moz_block_height, NS_STYLE_LINE_HEIGHT_BLOCK_HEIGHT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kListStylePositionKTable[] = {
	Keyword_inside, NS_STYLE_LIST_STYLE_POSITION_INSIDE,
	Keyword_outside, NS_STYLE_LIST_STYLE_POSITION_OUTSIDE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kListStyleKTable[] = {
	Keyword_none, NS_STYLE_LIST_STYLE_NONE,
	Keyword_disc, NS_STYLE_LIST_STYLE_DISC,
	Keyword_circle, NS_STYLE_LIST_STYLE_CIRCLE,
	Keyword_square, NS_STYLE_LIST_STYLE_SQUARE,
	Keyword_decimal, NS_STYLE_LIST_STYLE_DECIMAL,
	Keyword_decimal_leading_zero, NS_STYLE_LIST_STYLE_DECIMAL_LEADING_ZERO,
	Keyword_lower_roman, NS_STYLE_LIST_STYLE_LOWER_ROMAN,
	Keyword_upper_roman, NS_STYLE_LIST_STYLE_UPPER_ROMAN,
	Keyword_lower_greek, NS_STYLE_LIST_STYLE_LOWER_GREEK,
	Keyword_lower_alpha, NS_STYLE_LIST_STYLE_LOWER_ALPHA,
	Keyword_lower_latin, NS_STYLE_LIST_STYLE_LOWER_LATIN,
	Keyword_upper_alpha, NS_STYLE_LIST_STYLE_UPPER_ALPHA,
	Keyword_upper_latin, NS_STYLE_LIST_STYLE_UPPER_LATIN,
	Keyword_hebrew, NS_STYLE_LIST_STYLE_HEBREW,
	Keyword_armenian, NS_STYLE_LIST_STYLE_ARMENIAN,
	Keyword_georgian, NS_STYLE_LIST_STYLE_GEORGIAN,
	Keyword_cjk_ideographic, NS_STYLE_LIST_STYLE_CJK_IDEOGRAPHIC,
	Keyword_hiragana, NS_STYLE_LIST_STYLE_HIRAGANA,
	Keyword_katakana, NS_STYLE_LIST_STYLE_KATAKANA,
	Keyword_hiragana_iroha, NS_STYLE_LIST_STYLE_HIRAGANA_IROHA,
	Keyword_katakana_iroha, NS_STYLE_LIST_STYLE_KATAKANA_IROHA,
	Keyword__moz_cjk_heavenly_stem, NS_STYLE_LIST_STYLE_MOZ_CJK_HEAVENLY_STEM,
	Keyword__moz_cjk_earthly_branch, NS_STYLE_LIST_STYLE_MOZ_CJK_EARTHLY_BRANCH,
	Keyword__moz_trad_chinese_informal, NS_STYLE_LIST_STYLE_MOZ_TRAD_CHINESE_INFORMAL,
	Keyword__moz_trad_chinese_formal, NS_STYLE_LIST_STYLE_MOZ_TRAD_CHINESE_FORMAL,
	Keyword__moz_simp_chinese_informal, NS_STYLE_LIST_STYLE_MOZ_SIMP_CHINESE_INFORMAL,
	Keyword__moz_simp_chinese_formal, NS_STYLE_LIST_STYLE_MOZ_SIMP_CHINESE_FORMAL,
	Keyword__moz_japanese_informal, NS_STYLE_LIST_STYLE_MOZ_JAPANESE_INFORMAL,
	Keyword__moz_japanese_formal, NS_STYLE_LIST_STYLE_MOZ_JAPANESE_FORMAL,
	Keyword__moz_arabic_indic, NS_STYLE_LIST_STYLE_MOZ_ARABIC_INDIC,
	Keyword__moz_persian, NS_STYLE_LIST_STYLE_MOZ_PERSIAN,
	Keyword__moz_urdu, NS_STYLE_LIST_STYLE_MOZ_URDU,
	Keyword__moz_devanagari, NS_STYLE_LIST_STYLE_MOZ_DEVANAGARI,
	Keyword__moz_gurmukhi, NS_STYLE_LIST_STYLE_MOZ_GURMUKHI,
	Keyword__moz_gujarati, NS_STYLE_LIST_STYLE_MOZ_GUJARATI,
	Keyword__moz_oriya, NS_STYLE_LIST_STYLE_MOZ_ORIYA,
	Keyword__moz_kannada, NS_STYLE_LIST_STYLE_MOZ_KANNADA,
	Keyword__moz_malayalam, NS_STYLE_LIST_STYLE_MOZ_MALAYALAM,
	Keyword__moz_bengali, NS_STYLE_LIST_STYLE_MOZ_BENGALI,
	Keyword__moz_tamil, NS_STYLE_LIST_STYLE_MOZ_TAMIL,
	Keyword__moz_telugu, NS_STYLE_LIST_STYLE_MOZ_TELUGU,
	Keyword__moz_thai, NS_STYLE_LIST_STYLE_MOZ_THAI,
	Keyword__moz_lao, NS_STYLE_LIST_STYLE_MOZ_LAO,
	Keyword__moz_myanmar, NS_STYLE_LIST_STYLE_MOZ_MYANMAR,
	Keyword__moz_khmer, NS_STYLE_LIST_STYLE_MOZ_KHMER,
	Keyword__moz_hangul, NS_STYLE_LIST_STYLE_MOZ_HANGUL,
	Keyword__moz_hangul_consonant, NS_STYLE_LIST_STYLE_MOZ_HANGUL_CONSONANT,
	Keyword__moz_ethiopic_halehame, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME,
	Keyword__moz_ethiopic_numeric, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_NUMERIC,
	Keyword__moz_ethiopic_halehame_am, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME_AM,
	Keyword__moz_ethiopic_halehame_ti_er, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME_TI_ER,
	Keyword__moz_ethiopic_halehame_ti_et, NS_STYLE_LIST_STYLE_MOZ_ETHIOPIC_HALEHAME_TI_ET,
	Keyword_UNKNOWN,-1
};

const int32 Property::kObjectOpacityKTable[] = {
	Keyword__moz_objectfillopacity, NS_STYLE_OBJECT_FILL_OPACITY,
	Keyword__moz_objectstrokeopacity, NS_STYLE_OBJECT_STROKE_OPACITY,
	Keyword_UNKNOWN,-1
};

const int32 Property::kObjectPatternKTable[] = {
	Keyword__moz_objectfill, NS_COLOR_OBJECTFILL,
	Keyword__moz_objectstroke, NS_COLOR_OBJECTSTROKE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kOrientKTable[] = {
	Keyword_horizontal, NS_STYLE_ORIENT_HORIZONTAL,
	Keyword_vertical,   NS_STYLE_ORIENT_VERTICAL,
	Keyword_auto,       NS_STYLE_ORIENT_AUTO,
	Keyword_UNKNOWN,    -1
};

// Same as kBorderStyleKTable except 'hidden'.
const int32 Property::kOutlineStyleKTable[] = {
	Keyword_none,   NS_STYLE_BORDER_STYLE_NONE,
	Keyword_auto,   NS_STYLE_BORDER_STYLE_AUTO,
	Keyword_dotted, NS_STYLE_BORDER_STYLE_DOTTED,
	Keyword_dashed, NS_STYLE_BORDER_STYLE_DASHED,
	Keyword_solid,  NS_STYLE_BORDER_STYLE_SOLID,
	Keyword_double, NS_STYLE_BORDER_STYLE_DOUBLE,
	Keyword_groove, NS_STYLE_BORDER_STYLE_GROOVE,
	Keyword_ridge,  NS_STYLE_BORDER_STYLE_RIDGE,
	Keyword_inset,  NS_STYLE_BORDER_STYLE_INSET,
	Keyword_outset, NS_STYLE_BORDER_STYLE_OUTSET,
	Keyword_UNKNOWN,-1
};

const int32 Property::kOutlineColorKTable[] = {
	Keyword__moz_use_text_color, NS_STYLE_COLOR_MOZ_USE_TEXT_COLOR,
	Keyword_UNKNOWN,-1
};

const int32 Property::kOverflowKTable[] = {
	Keyword_auto, NS_STYLE_OVERFLOW_AUTO,
	Keyword_visible, NS_STYLE_OVERFLOW_VISIBLE,
	Keyword_hidden, NS_STYLE_OVERFLOW_HIDDEN,
	Keyword_scroll, NS_STYLE_OVERFLOW_SCROLL,
	// Deprecated:
	Keyword__moz_scrollbars_none, NS_STYLE_OVERFLOW_HIDDEN,
	Keyword__moz_scrollbars_horizontal, NS_STYLE_OVERFLOW_SCROLLBARS_HORIZONTAL,
	Keyword__moz_scrollbars_vertical, NS_STYLE_OVERFLOW_SCROLLBARS_VERTICAL,
	Keyword__moz_hidden_unscrollable, NS_STYLE_OVERFLOW_CLIP,
	Keyword_UNKNOWN,-1
};

const int32 Property::kOverflowSubKTable[] = {
	Keyword_auto, NS_STYLE_OVERFLOW_AUTO,
	Keyword_visible, NS_STYLE_OVERFLOW_VISIBLE,
	Keyword_hidden, NS_STYLE_OVERFLOW_HIDDEN,
	Keyword_scroll, NS_STYLE_OVERFLOW_SCROLL,
	// Deprecated:
	Keyword__moz_hidden_unscrollable, NS_STYLE_OVERFLOW_CLIP,
	Keyword_UNKNOWN,-1
};

const int32 Property::kPageBreakKTable[] = {
	Keyword_auto, NS_STYLE_PAGE_BREAK_AUTO,
	Keyword_always, NS_STYLE_PAGE_BREAK_ALWAYS,
	Keyword_avoid, NS_STYLE_PAGE_BREAK_AVOID,
	Keyword_left, NS_STYLE_PAGE_BREAK_LEFT,
	Keyword_right, NS_STYLE_PAGE_BREAK_RIGHT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kPageBreakInsideKTable[] = {
	Keyword_auto, NS_STYLE_PAGE_BREAK_AUTO,
	Keyword_avoid, NS_STYLE_PAGE_BREAK_AVOID,
	Keyword_UNKNOWN,-1
};

const int32 Property::kPageMarksKTable[] = {
	Keyword_none, NS_STYLE_PAGE_MARKS_NONE,
	Keyword_crop, NS_STYLE_PAGE_MARKS_CROP,
	Keyword_cross, NS_STYLE_PAGE_MARKS_REGISTER,
	Keyword_UNKNOWN,-1
};

const int32 Property::kPageSizeKTable[] = {
	Keyword_landscape, NS_STYLE_PAGE_SIZE_LANDSCAPE,
	Keyword_portrait, NS_STYLE_PAGE_SIZE_PORTRAIT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kPointerEventsKTable[] = {
	Keyword_none, NS_STYLE_POINTER_EVENTS_NONE,
	Keyword_visiblepainted, NS_STYLE_POINTER_EVENTS_VISIBLEPAINTED,
	Keyword_visiblefill, NS_STYLE_POINTER_EVENTS_VISIBLEFILL,
	Keyword_visiblestroke, NS_STYLE_POINTER_EVENTS_VISIBLESTROKE,
	Keyword_visible, NS_STYLE_POINTER_EVENTS_VISIBLE,
	Keyword_painted, NS_STYLE_POINTER_EVENTS_PAINTED,
	Keyword_fill, NS_STYLE_POINTER_EVENTS_FILL,
	Keyword_stroke, NS_STYLE_POINTER_EVENTS_STROKE,
	Keyword_all, NS_STYLE_POINTER_EVENTS_ALL,
	Keyword_auto, NS_STYLE_POINTER_EVENTS_AUTO,
	Keyword_UNKNOWN, -1
};

const int32 Property::kPositionKTable[] = {
	Keyword_static, NS_STYLE_POSITION_STATIC,
	Keyword_relative, NS_STYLE_POSITION_RELATIVE,
	Keyword_absolute, NS_STYLE_POSITION_ABSOLUTE,
	Keyword_fixed, NS_STYLE_POSITION_FIXED,
	Keyword_UNKNOWN,-1
};

const int32 Property::kRadialGradientShapeKTable[] = {
	Keyword_circle,  NS_STYLE_GRADIENT_SHAPE_CIRCULAR,
	Keyword_ellipse, NS_STYLE_GRADIENT_SHAPE_ELLIPTICAL,
	Keyword_UNKNOWN,-1
};

const int32 Property::kRadialGradientSizeKTable[] = {
	Keyword_closest_side,    NS_STYLE_GRADIENT_SIZE_CLOSEST_SIDE,
	Keyword_closest_corner,  NS_STYLE_GRADIENT_SIZE_CLOSEST_CORNER,
	Keyword_farthest_side,   NS_STYLE_GRADIENT_SIZE_FARTHEST_SIDE,
	Keyword_farthest_corner, NS_STYLE_GRADIENT_SIZE_FARTHEST_CORNER,
	Keyword_UNKNOWN,-1
};

const int32 Property::kRadialGradientLegacySizeKTable[] = {
	Keyword_closest_side,    NS_STYLE_GRADIENT_SIZE_CLOSEST_SIDE,
	Keyword_closest_corner,  NS_STYLE_GRADIENT_SIZE_CLOSEST_CORNER,
	Keyword_farthest_side,   NS_STYLE_GRADIENT_SIZE_FARTHEST_SIDE,
	Keyword_farthest_corner, NS_STYLE_GRADIENT_SIZE_FARTHEST_CORNER,
	// synonyms
	Keyword_contain,         NS_STYLE_GRADIENT_SIZE_CLOSEST_SIDE,
	Keyword_cover,           NS_STYLE_GRADIENT_SIZE_FARTHEST_CORNER,
	Keyword_UNKNOWN,-1
};

const int32 Property::kResizeKTable[] = {
	Keyword_none,       NS_STYLE_RESIZE_NONE,
	Keyword_both,       NS_STYLE_RESIZE_BOTH,
	Keyword_horizontal, NS_STYLE_RESIZE_HORIZONTAL,
	Keyword_vertical,   NS_STYLE_RESIZE_VERTICAL,
	Keyword_UNKNOWN,-1
};

const int32 Property::kStackSizingKTable[] = {
	Keyword_ignore, NS_STYLE_STACK_SIZING_IGNORE,
	Keyword_stretch_to_fit, NS_STYLE_STACK_SIZING_STRETCH_TO_FIT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTableLayoutKTable[] = {
	Keyword_auto, NS_STYLE_TABLE_LAYOUT_AUTO,
	Keyword_fixed, NS_STYLE_TABLE_LAYOUT_FIXED,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTextAlignKTable[] = {
	Keyword_left, NS_STYLE_TEXT_ALIGN_LEFT,
	Keyword_right, NS_STYLE_TEXT_ALIGN_RIGHT,
	Keyword_center, NS_STYLE_TEXT_ALIGN_CENTER,
	Keyword_justify, NS_STYLE_TEXT_ALIGN_JUSTIFY,
	Keyword__moz_center, NS_STYLE_TEXT_ALIGN_MOZ_CENTER,
	Keyword__moz_right, NS_STYLE_TEXT_ALIGN_MOZ_RIGHT,
	Keyword__moz_left, NS_STYLE_TEXT_ALIGN_MOZ_LEFT,
	Keyword_start, NS_STYLE_TEXT_ALIGN_DEFAULT,
	Keyword_end, NS_STYLE_TEXT_ALIGN_END,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTextAlignLastKTable[] = {
	Keyword_auto, NS_STYLE_TEXT_ALIGN_AUTO,
	Keyword_left, NS_STYLE_TEXT_ALIGN_LEFT,
	Keyword_right, NS_STYLE_TEXT_ALIGN_RIGHT,
	Keyword_center, NS_STYLE_TEXT_ALIGN_CENTER,
	Keyword_justify, NS_STYLE_TEXT_ALIGN_JUSTIFY,
	Keyword_start, NS_STYLE_TEXT_ALIGN_DEFAULT,
	Keyword_end, NS_STYLE_TEXT_ALIGN_END,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTextBlinkKTable[] = {
	Keyword_none, NS_STYLE_TEXT_BLINK_NONE,
	Keyword_blink, NS_STYLE_TEXT_BLINK_BLINK,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTextDecorationLineKTable[] = {
	Keyword_none, NS_STYLE_TEXT_DECORATION_LINE_NONE,
	Keyword_underline, NS_STYLE_TEXT_DECORATION_LINE_UNDERLINE,
	Keyword_overline, NS_STYLE_TEXT_DECORATION_LINE_OVERLINE,
	Keyword_line_through, NS_STYLE_TEXT_DECORATION_LINE_LINE_THROUGH,
	Keyword__moz_anchor_decoration, NS_STYLE_TEXT_DECORATION_LINE_PREF_ANCHORS,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTextDecorationStyleKTable[] = {
	Keyword__moz_none, NS_STYLE_TEXT_DECORATION_STYLE_NONE,
	Keyword_solid, NS_STYLE_TEXT_DECORATION_STYLE_SOLID,
	Keyword_double, NS_STYLE_TEXT_DECORATION_STYLE_DOUBLE,
	Keyword_dotted, NS_STYLE_TEXT_DECORATION_STYLE_DOTTED,
	Keyword_dashed, NS_STYLE_TEXT_DECORATION_STYLE_DASHED,
	Keyword_wavy, NS_STYLE_TEXT_DECORATION_STYLE_WAVY,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTextOverflowKTable[] = {
	Keyword_clip, NS_STYLE_TEXT_OVERFLOW_CLIP,
	Keyword_ellipsis, NS_STYLE_TEXT_OVERFLOW_ELLIPSIS,
	Keyword_UNKNOWN, -1
};

const int32 Property::kTextTransformKTable[] = {
	Keyword_none, NS_STYLE_TEXT_TRANSFORM_NONE,
	Keyword_capitalize, NS_STYLE_TEXT_TRANSFORM_CAPITALIZE,
	Keyword_lowercase, NS_STYLE_TEXT_TRANSFORM_LOWERCASE,
	Keyword_uppercase, NS_STYLE_TEXT_TRANSFORM_UPPERCASE,
	Keyword_full_width, NS_STYLE_TEXT_TRANSFORM_FULLWIDTH,
	Keyword_UNKNOWN,-1
};

const int32 Property::kTransitionTimingFunctionKTable[] = {
	Keyword_ease, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE,
	Keyword_linear, NS_STYLE_TRANSITION_TIMING_FUNCTION_LINEAR,
	Keyword_ease_in, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE_IN,
	Keyword_ease_out, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE_OUT,
	Keyword_ease_in_out, NS_STYLE_TRANSITION_TIMING_FUNCTION_EASE_IN_OUT,
	Keyword_step_start, NS_STYLE_TRANSITION_TIMING_FUNCTION_STEP_START,
	Keyword_step_end, NS_STYLE_TRANSITION_TIMING_FUNCTION_STEP_END,
	Keyword_UNKNOWN,-1
};

const int32 Property::kUnicodeBidiKTable[] = {
	Keyword_normal, NS_STYLE_UNICODE_BIDI_NORMAL,
	Keyword_embed, NS_STYLE_UNICODE_BIDI_EMBED,
	Keyword_bidi_override, NS_STYLE_UNICODE_BIDI_OVERRIDE,
	Keyword__moz_isolate, NS_STYLE_UNICODE_BIDI_ISOLATE,
	Keyword__moz_isolate_override, NS_STYLE_UNICODE_BIDI_ISOLATE_OVERRIDE,
	Keyword__moz_plaintext, NS_STYLE_UNICODE_BIDI_PLAINTEXT,
	Keyword_UNKNOWN,-1
};

const int32 Property::kUserFocusKTable[] = {
	Keyword_none,           NS_STYLE_USER_FOCUS_NONE,
	Keyword_normal,         NS_STYLE_USER_FOCUS_NORMAL,
	Keyword_ignore,         NS_STYLE_USER_FOCUS_IGNORE,
	Keyword_select_all,     NS_STYLE_USER_FOCUS_SELECT_ALL,
	Keyword_select_before,  NS_STYLE_USER_FOCUS_SELECT_BEFORE,
	Keyword_select_after,   NS_STYLE_USER_FOCUS_SELECT_AFTER,
	Keyword_select_same,    NS_STYLE_USER_FOCUS_SELECT_SAME,
	Keyword_select_menu,    NS_STYLE_USER_FOCUS_SELECT_MENU,
	Keyword_UNKNOWN,-1
};

const int32 Property::kUserInputKTable[] = {
	Keyword_none,     NS_STYLE_USER_INPUT_NONE,
	Keyword_auto,     NS_STYLE_USER_INPUT_AUTO,
	Keyword_enabled,  NS_STYLE_USER_INPUT_ENABLED,
	Keyword_disabled, NS_STYLE_USER_INPUT_DISABLED,
	Keyword_UNKNOWN,-1
};

const int32 Property::kUserModifyKTable[] = {
	Keyword_read_only,  NS_STYLE_USER_MODIFY_READ_ONLY,
	Keyword_read_write, NS_STYLE_USER_MODIFY_READ_WRITE,
	Keyword_write_only, NS_STYLE_USER_MODIFY_WRITE_ONLY,
	Keyword_UNKNOWN,-1
};

const int32 Property::kUserSelectKTable[] = {
	Keyword_none,       NS_STYLE_USER_SELECT_NONE,
	Keyword_auto,       NS_STYLE_USER_SELECT_AUTO,
	Keyword_text,       NS_STYLE_USER_SELECT_TEXT,
	Keyword_element,    NS_STYLE_USER_SELECT_ELEMENT,
	Keyword_elements,   NS_STYLE_USER_SELECT_ELEMENTS,
	Keyword_all,        NS_STYLE_USER_SELECT_ALL,
	Keyword_toggle,     NS_STYLE_USER_SELECT_TOGGLE,
	Keyword_tri_state,  NS_STYLE_USER_SELECT_TRI_STATE,
	Keyword__moz_all,   NS_STYLE_USER_SELECT_MOZ_ALL,
	Keyword__moz_none,  NS_STYLE_USER_SELECT_NONE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kVerticalAlignKTable[] = {
	Keyword_baseline, NS_STYLE_VERTICAL_ALIGN_BASELINE,
	Keyword_sub, NS_STYLE_VERTICAL_ALIGN_SUB,
	Keyword_super, NS_STYLE_VERTICAL_ALIGN_SUPER,
	Keyword_top, NS_STYLE_VERTICAL_ALIGN_TOP,
	Keyword_text_top, NS_STYLE_VERTICAL_ALIGN_TEXT_TOP,
	Keyword_middle, NS_STYLE_VERTICAL_ALIGN_MIDDLE,
	Keyword__moz_middle_with_baseline, NS_STYLE_VERTICAL_ALIGN_MIDDLE_WITH_BASELINE,
	Keyword_bottom, NS_STYLE_VERTICAL_ALIGN_BOTTOM,
	Keyword_text_bottom, NS_STYLE_VERTICAL_ALIGN_TEXT_BOTTOM,
	Keyword_UNKNOWN,-1
};

const int32 Property::kVisibilityKTable[] = {
	Keyword_visible, NS_STYLE_VISIBILITY_VISIBLE,
	Keyword_hidden, NS_STYLE_VISIBILITY_HIDDEN,
	Keyword_collapse, NS_STYLE_VISIBILITY_COLLAPSE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kWhitespaceKTable[] = {
	Keyword_normal, NS_STYLE_WHITESPACE_NORMAL,
	Keyword_pre, NS_STYLE_WHITESPACE_PRE,
	Keyword_nowrap, NS_STYLE_WHITESPACE_NOWRAP,
	Keyword_pre_wrap, NS_STYLE_WHITESPACE_PRE_WRAP,
	Keyword_pre_line, NS_STYLE_WHITESPACE_PRE_LINE,
	Keyword__moz_pre_discard_newlines, NS_STYLE_WHITESPACE_PRE_DISCARD_NEWLINES,
	Keyword_UNKNOWN,-1
};

const int32 Property::kWidthKTable[] = {
	Keyword__moz_max_content, NS_STYLE_WIDTH_MAX_CONTENT,
	Keyword__moz_min_content, NS_STYLE_WIDTH_MIN_CONTENT,
	Keyword__moz_fit_content, NS_STYLE_WIDTH_FIT_CONTENT,
	Keyword__moz_available, NS_STYLE_WIDTH_AVAILABLE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kWindowShadowKTable[] = {
	Keyword_none, NS_STYLE_WINDOW_SHADOW_NONE,
	Keyword_default, NS_STYLE_WINDOW_SHADOW_DEFAULT,
	Keyword_menu, NS_STYLE_WINDOW_SHADOW_MENU,
	Keyword_tooltip, NS_STYLE_WINDOW_SHADOW_TOOLTIP,
	Keyword_sheet, NS_STYLE_WINDOW_SHADOW_SHEET,
	Keyword_UNKNOWN,-1
};

const int32 Property::kWordBreakKTable[] = {
	Keyword_normal, NS_STYLE_WORDBREAK_NORMAL,
	Keyword_break_all, NS_STYLE_WORDBREAK_BREAK_ALL,
	Keyword_keep_all, NS_STYLE_WORDBREAK_KEEP_ALL,
	Keyword_UNKNOWN,-1
};

const int32 Property::kWordWrapKTable[] = {
	Keyword_normal, NS_STYLE_WORDWRAP_NORMAL,
	Keyword_break_word, NS_STYLE_WORDWRAP_BREAK_WORD,
	Keyword_UNKNOWN,-1
};

const int32 Property::kHyphensKTable[] = {
	Keyword_none, NS_STYLE_HYPHENS_NONE,
	Keyword_manual, NS_STYLE_HYPHENS_MANUAL,
	Keyword_auto, NS_STYLE_HYPHENS_AUTO,
	Keyword_UNKNOWN,-1
};

// Specific keyword tables for XUL.properties
const int32 Property::kBoxAlignKTable[] = {
	Keyword_stretch,  NS_STYLE_BOX_ALIGN_STRETCH,
	Keyword_start,   NS_STYLE_BOX_ALIGN_START,
	Keyword_center, NS_STYLE_BOX_ALIGN_CENTER,
	Keyword_baseline, NS_STYLE_BOX_ALIGN_BASELINE,
	Keyword_end, NS_STYLE_BOX_ALIGN_END,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBoxDirectionKTable[] = {
	Keyword_normal,  NS_STYLE_BOX_DIRECTION_NORMAL,
	Keyword_reverse,   NS_STYLE_BOX_DIRECTION_REVERSE,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBoxOrientKTable[] = {
	Keyword_horizontal,  NS_STYLE_BOX_ORIENT_HORIZONTAL,
	Keyword_vertical,   NS_STYLE_BOX_ORIENT_VERTICAL,
	Keyword_inline_axis, NS_STYLE_BOX_ORIENT_HORIZONTAL,
	Keyword_block_axis, NS_STYLE_BOX_ORIENT_VERTICAL,
	Keyword_UNKNOWN,-1
};

const int32 Property::kBoxPackKTable[] = {
	Keyword_start,  NS_STYLE_BOX_PACK_START,
	Keyword_center,   NS_STYLE_BOX_PACK_CENTER,
	Keyword_end, NS_STYLE_BOX_PACK_END,
	Keyword_justify, NS_STYLE_BOX_PACK_JUSTIFY,
	Keyword_UNKNOWN,-1
};

// keyword tables for SVG properties

const int32 Property::kDominantBaselineKTable[] = {
	Keyword_auto, NS_STYLE_DOMINANT_BASELINE_AUTO,
	Keyword_use_script, NS_STYLE_DOMINANT_BASELINE_USE_SCRIPT,
	Keyword_no_change, NS_STYLE_DOMINANT_BASELINE_NO_CHANGE,
	Keyword_reset_size, NS_STYLE_DOMINANT_BASELINE_RESET_SIZE,
	Keyword_alphabetic, NS_STYLE_DOMINANT_BASELINE_ALPHABETIC,
	Keyword_hanging, NS_STYLE_DOMINANT_BASELINE_HANGING,
	Keyword_ideographic, NS_STYLE_DOMINANT_BASELINE_IDEOGRAPHIC,
	Keyword_mathematical, NS_STYLE_DOMINANT_BASELINE_MATHEMATICAL,
	Keyword_central, NS_STYLE_DOMINANT_BASELINE_CENTRAL,
	Keyword_middle, NS_STYLE_DOMINANT_BASELINE_MIDDLE,
	Keyword_text_after_edge, NS_STYLE_DOMINANT_BASELINE_TEXT_AFTER_EDGE,
	Keyword_text_before_edge, NS_STYLE_DOMINANT_BASELINE_TEXT_BEFORE_EDGE,
	Keyword_UNKNOWN, -1
};

const int32 Property::kFillRuleKTable[] = {
	Keyword_nonzero, NS_STYLE_FILL_RULE_NONZERO,
	Keyword_evenodd, NS_STYLE_FILL_RULE_EVENODD,
	Keyword_UNKNOWN, -1
};

const int32 Property::kImageRenderingKTable[] = {
	Keyword_auto, NS_STYLE_IMAGE_RENDERING_AUTO,
	Keyword_optimizespeed, NS_STYLE_IMAGE_RENDERING_OPTIMIZESPEED,
	Keyword_optimizequality, NS_STYLE_IMAGE_RENDERING_OPTIMIZEQUALITY,
	Keyword__moz_crisp_edges, NS_STYLE_IMAGE_RENDERING_CRISPEDGES,
	Keyword_UNKNOWN, -1
};

const int32 Property::kMaskTypeKTable[] = {
	Keyword_luminance, NS_STYLE_MASK_TYPE_LUMINANCE,
	Keyword_alpha, NS_STYLE_MASK_TYPE_ALPHA,
	Keyword_UNKNOWN, -1
};

const int32 Property::kShapeRenderingKTable[] = {
	Keyword_auto, NS_STYLE_SHAPE_RENDERING_AUTO,
	Keyword_optimizespeed, NS_STYLE_SHAPE_RENDERING_OPTIMIZESPEED,
	Keyword_crispedges, NS_STYLE_SHAPE_RENDERING_CRISPEDGES,
	Keyword_geometricprecision, NS_STYLE_SHAPE_RENDERING_GEOMETRICPRECISION,
	Keyword_UNKNOWN, -1
};

const int32 Property::kStrokeLinecapKTable[] = {
	Keyword_butt, NS_STYLE_STROKE_LINECAP_BUTT,
	Keyword_round, NS_STYLE_STROKE_LINECAP_ROUND,
	Keyword_square, NS_STYLE_STROKE_LINECAP_SQUARE,
	Keyword_UNKNOWN, -1
};

const int32 Property::kStrokeLinejoinKTable[] = {
	Keyword_miter, NS_STYLE_STROKE_LINEJOIN_MITER,
	Keyword_round, NS_STYLE_STROKE_LINEJOIN_ROUND,
	Keyword_bevel, NS_STYLE_STROKE_LINEJOIN_BEVEL,
	Keyword_UNKNOWN, -1
};

// Lookup table to store the sole objectValue keyword to let SVG glyphs inherit
// certain stroke-* properties from the outer text object
const int32 Property::kStrokeObjectValueKTable[] = {
	Keyword__moz_objectvalue, NS_STYLE_STROKE_PROP_OBJECTVALUE,
	Keyword_UNKNOWN, -1
};

const int32 Property::kTextAnchorKTable[] = {
	Keyword_start, NS_STYLE_TEXT_ANCHOR_START,
	Keyword_middle, NS_STYLE_TEXT_ANCHOR_MIDDLE,
	Keyword_end, NS_STYLE_TEXT_ANCHOR_END,
	Keyword_UNKNOWN, -1
};

const int32 Property::kTextRenderingKTable[] = {
	Keyword_auto, NS_STYLE_TEXT_RENDERING_AUTO,
	Keyword_optimizespeed, NS_STYLE_TEXT_RENDERING_OPTIMIZESPEED,
	Keyword_optimizelegibility, NS_STYLE_TEXT_RENDERING_OPTIMIZELEGIBILITY,
	Keyword_geometricprecision, NS_STYLE_TEXT_RENDERING_GEOMETRICPRECISION,
	Keyword_UNKNOWN, -1
};

const int32 Property::kVectorEffectKTable[] = {
	Keyword_none, NS_STYLE_VECTOR_EFFECT_NONE,
	Keyword_non_scaling_stroke, NS_STYLE_VECTOR_EFFECT_NON_SCALING_STROKE,
	Keyword_UNKNOWN, -1
};

const int32 Property::kColorInterpolationKTable[] = {
	Keyword_auto, NS_STYLE_COLOR_INTERPOLATION_AUTO,
	Keyword_srgb, NS_STYLE_COLOR_INTERPOLATION_SRGB,
	Keyword_linearrgb, NS_STYLE_COLOR_INTERPOLATION_LINEARRGB,
	Keyword_UNKNOWN, -1
};

const int32 Property::kColumnFillKTable[] = {
	Keyword_auto, NS_STYLE_COLUMN_FILL_AUTO,
	Keyword_balance, NS_STYLE_COLUMN_FILL_BALANCE,
	Keyword_UNKNOWN, -1
};

}