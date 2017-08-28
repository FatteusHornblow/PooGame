#pragma once
#include "Graphics.h"

class Meter
{
public:
	Meter(int x, int y)
		:
		x(x),
		y(y)
	{}
	~Meter();
	void Draw(Graphics& gfx) const;
	void IncreaseLevel();
	int GetLevel() const;
private:
	int x;
	int y;
	int level = 0;
	static constexpr int scale = 4;
	static constexpr int height = 12;
	static constexpr Color c = Colors::Blue;
};

