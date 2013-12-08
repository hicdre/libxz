#include "stdafx.h"
#include "renderengine.h"
#include "fontfactory.h"
#include "brushfactory.h"

namespace render
{


	RenderEngine::RenderEngine()
		: font_factory_(new FontFactory)
		, brush_factory_(new BrushFactory)
	{

	}

	RenderEngine::~RenderEngine()
	{

	}

	FontFactory* RenderEngine::GetFontFactory() const
	{
		return font_factory_.get();
	}

	BrushFactory* RenderEngine::GetBrushFactory() const
	{
		return brush_factory_.get();
	}

}