#include "Board.h"

Board::Board(Graphics & gfx)
	:
	gfx ( gfx)
{
}

void Board::DrawCell(Location & loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x < Width);
	assert(loc.y >= 0);
	assert(loc.y < Height);
	gfx.DrawRectDim(loc.x * Dimension, loc.y * Dimension, Dimension, Dimension, c);
}

int Board::getWidth()
{
	return Width;
}

int Board::getHeight()
{
	return Height;
}
