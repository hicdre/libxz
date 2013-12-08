#pragma once

namespace render
{
	enum StrokeLineStyle
	{
		StyleSolid		= 0,
		StyleDash,
		StyleDot,
		StyleDashDot,
		StyleDashDotDot,
		StyleInsideFrame,
	};
	enum StrokeCapStyle
	{
		StyleEndCapRound = 0,
		StyleEndCapSquare,
		StyleEndCapFlat,
	};
	enum StrokeJoinStyle
	{
		StyleJoinBevel = 0,
		StyleJoinMiter,
		StyleJoinRound,
	};
	
	class StrokeStyle
	{
	public:
		StrokeStyle();
		StrokeStyle(StrokeLineStyle line, StrokeCapStyle cap, StrokeJoinStyle join);
		StrokeLineStyle line_style;
		StrokeCapStyle cap_style;
		StrokeJoinStyle join_style;
	};

	UINT StrokeLineStyleToUint(StrokeLineStyle style);
	UINT StrokeCapStyleToUint(StrokeCapStyle style);
	UINT StrokeJoinStyleToUint(StrokeJoinStyle style);
}