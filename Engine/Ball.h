#pragma once

#include "Colors.h"
#include "Graphics.h"

class Ball
{
public:
	void Draw(Graphics& gfx);
	void Update();
private:
	int x = 200;
	int y = 200;
	static constexpr int radius = 20;
	static constexpr Color color = Colors::Blue;
};