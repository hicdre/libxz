#pragma once
#include "base/memory/scoped_ptr.h"

template <typename T> struct DefaultSingletonTraits;

namespace render
{
	class FontFactory;
	class BrushFactory;
	class RenderEngine
	{
	public:
		static RenderEngine* GetInstance();

		FontFactory* GetFontFactory() const;

		BrushFactory* GetBrushFactory() const;
	private:
		RenderEngine();
		~RenderEngine();
		
		scoped_ptr<FontFactory> font_factory_;
		scoped_ptr<BrushFactory> brush_factory_;

		friend struct DefaultSingletonTraits<RenderEngine>;
		DISALLOW_COPY_AND_ASSIGN(RenderEngine);
	};
}
