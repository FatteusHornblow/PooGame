#include "Meter.h"
#include "Graphics.h"

Meter::~Meter()
{
}

void Meter::Draw(Graphics & gfx) const
{
	gfx.DrawRectDim(x, y, scale * level, height, c);
}

void Meter::IncreaseLevel()
{
	++level;
}

int Meter::GetLevel() const
{
	return level;
}
