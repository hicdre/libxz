#include "stdafx.h"
#include "StrokeStyle.h"

namespace render
{
	UINT StrokeLineStyleToUint(StrokeLineStyle style)
	{
		if (style == StyleSolid)
			return PS_SOLID;
		else if (style == StyleDash)
			return PS_DASH;
		else if (style == StyleDot)
			return PS_DOT;
		else if (style == StyleDashDot)
			return PS_DASHDOT;
		else if (style == StyleDashDotDot)
			return PS_DASHDOTDOT;
		else if (style == StyleInsideFrame)
			return PS_INSIDEFRAME;

		return PS_SOLID;
	}

	UINT StrokeCapStyleToUint( StrokeCapStyle style )
	{
		if (style == StyleEndCapRound)
			return PS_ENDCAP_ROUND;
		else if (style == StyleEndCapSquare)
			return PS_ENDCAP_SQUARE;
		else if (style == StyleEndCapFlat)
			return PS_ENDCAP_FLAT;
		return PS_ENDCAP_ROUND;
	}

	UINT StrokeJoinStyleToUint( StrokeJoinStyle style )
	{
		if (style == StyleJoinBevel)
			return PS_JOIN_BEVEL;
		else if (style == StyleJoinMiter)
			return PS_JOIN_MITER;
		else if (style == StyleJoinRound)
			return PS_JOIN_ROUND;
		return PS_JOIN_BEVEL;
	}



	StrokeStyle::StrokeStyle()
		: line_style(StyleSolid)
		, cap_style(StyleEndCapSquare)
		, join_style(StyleJoinBevel)
	{

	}

	StrokeStyle::StrokeStyle( StrokeLineStyle line, StrokeCapStyle cap, StrokeJoinStyle join )
		: line_style(line)
		, cap_style(cap)
		, join_style(join)
	{

	}

}