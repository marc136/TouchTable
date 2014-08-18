#include "stdafx.h"
#include "Lines.h"
#include <SDLpp/Renderer.h>
#include <pbl/algorithm.h>

void Lines::draw(sdl::Renderer& renderer)
{
	renderer.drawColor(255, 0, 0, 255);

	pbl::adjacent_for_each(begin(points), end(points), [&renderer](const std::pair<short, short>& previous, const std::pair<short, short>& current)
	{
		renderer.drawLine(previous.first, previous.second, current.first, current.second);
	});
}