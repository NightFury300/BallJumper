#include "Ball.h"

void Ball::Draw(Graphics & gfx)
{
	for (int j = y - radius; j <= y + radius; j++)
	{
		for (int i = x - radius; i <= x + radius; i++)
		{
			int xcomponent = x - i;
			int ycomponent = y - j;
			if ((xcomponent * xcomponent) + (ycomponent * ycomponent) <= radius * radius)
			{
				gfx.PutPixel(i, j, color);
			}
		}
	}
}

void Ball::Update()
{
}
