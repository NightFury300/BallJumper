#pragma once
#include "Location.h"
#include "Graphics.h"
#include <assert.h>

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(Location& loc,Color c);
	int getWidth();
	int getHeight();
private:
	static constexpr int Dimension = 20;
	static constexpr int Width = 10;
	static constexpr int Height = 10;
	Graphics& gfx;
};