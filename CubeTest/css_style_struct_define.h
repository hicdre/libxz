
/*
 * This file is intended to be used by different parts of the code, with
 * the STYLE_STRUCT macro (or the STYLE_STRUCT_INHERITED and
 * STYLE_STRUCT_RESET pair of macros) defined in different ways.
 */

#ifndef STYLE_STRUCT_INHERITED
#define STYLE_STRUCT_INHERITED(name, checkdata_cb, ctor_args) \
  STYLE_STRUCT(name, checkdata_cb, ctor_args)
#define UNDEF_STYLE_STRUCT_INHERITED
#endif

#ifndef STYLE_STRUCT_RESET
#define STYLE_STRUCT_RESET(name, checkdata_cb, ctor_args) \
  STYLE_STRUCT(name, checkdata_cb, ctor_args)
#define UNDEF_STYLE_STRUCT_RESET
#endif

// The inherited structs must be listed before the Reset structs.
// nsStyleStructID assumes this is the case, and callers other than
// nsStyleStructFwd.h that want the structs in id-order just define
// STYLE_STRUCT rather than including the file twice.

STYLE_STRUCT_INHERITED(Font, CheckFontCallback, (SSARG_PRESCONTEXT))
STYLE_STRUCT_INHERITED(Color, CheckColorCallback, (SSARG_PRESCONTEXT))
STYLE_STRUCT_INHERITED(List, nullptr, ())
STYLE_STRUCT_INHERITED(Text, CheckTextCallback, ())
STYLE_STRUCT_INHERITED(Visibility, nullptr, (SSARG_PRESCONTEXT))
STYLE_STRUCT_INHERITED(Quotes, nullptr, ())
STYLE_STRUCT_INHERITED(UserInterface, nullptr, ())
STYLE_STRUCT_INHERITED(TableBorder, nullptr, (SSARG_PRESCONTEXT))
STYLE_STRUCT_INHERITED(SVG, nullptr, ())
STYLE_STRUCT_RESET(Background, nullptr, ())
STYLE_STRUCT_RESET(Position, nullptr, ())
STYLE_STRUCT_RESET(TextReset, nullptr, ())
STYLE_STRUCT_RESET(Display, nullptr, ())
STYLE_STRUCT_RESET(Content, nullptr, ())
STYLE_STRUCT_RESET(UIReset, nullptr, ())
STYLE_STRUCT_RESET(Table, nullptr, ())
STYLE_STRUCT_RESET(Margin, nullptr, ())
STYLE_STRUCT_RESET(Padding, nullptr, ())
STYLE_STRUCT_RESET(Border, nullptr, (SSARG_PRESCONTEXT))
STYLE_STRUCT_RESET(Outline, nullptr, (SSARG_PRESCONTEXT))
STYLE_STRUCT_RESET(XUL, nullptr, ())
STYLE_STRUCT_RESET(SVGReset,nullptr, ())
STYLE_STRUCT_RESET(Column, nullptr, (SSARG_PRESCONTEXT))
      
#ifdef UNDEF_STYLE_STRUCT_INHERITED
#undef STYLE_STRUCT_INHERITED
#undef UNDEF_STYLE_STRUCT_INHERITED
#endif

#ifdef UNDEF_STYLE_STRUCT_RESET
#undef STYLE_STRUCT_RESET
#undef UNDEF_STYLE_STRUCT_RESET
#endif

