#pragma once
#include "base/memory/scoped_ptr.h"

namespace render
{
	class FontFactory;
	class BrushFactory;
	class RenderEngine
	{
	public:
		RenderEngine();
		~RenderEngine();

		FontFactory* GetFontFactory() const;

		BrushFactory* GetBrushFactory() const;
	public:
		scoped_ptr<FontFactory> font_factory_;
		scoped_ptr<BrushFactory> brush_factory_;
	};
}
