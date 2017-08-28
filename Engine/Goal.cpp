#include "Goal.h"
#include "Graphics.h"

Goal::Goal(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

Goal::~Goal()
{
}

void Goal::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(x, y, width, height, c);
}

bool Goal::TestCollision(Dude& dude) const
{
	const int dudeRight = dude.GetX() + dude.GetWidth();
	const int dudeBottom = dude.GetY() + dude.GetHeight();
	const int goalRight = x + width;
	const int goalBottom = y + height;

	return
		(dudeRight >= x &&
		dude.GetX() <= goalRight &&
		dudeBottom >= y &&
		dude.GetY() <= goalBottom);
}

void Goal::Respawn(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

void Goal::UpdateColor()
{
	if (colorIncreasing)
	{
		if (c.GetR() >= 253)
		{
			colorIncreasing = false;
		}
		else
		{ 
			c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
		}
	}
	else
	{
		if (c.GetR() <= 127)
		{
			colorIncreasing = true;
		}
		else
		{
			c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
		}
	}
}
