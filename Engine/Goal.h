#pragma once
#include "Graphics.h"
#include "Dude.h"

class Goal
{
public:
	Goal(int in_x, int in_y);
	~Goal();
	void Draw(Graphics& gfx) const;
	bool TestCollision(Dude& dude) const;
	void Respawn(int in_x, int in_y);
	void UpdateColor();
private:
	int x;
	int y;
	static constexpr int width = 20;
	static constexpr int height = 20;
	Color c{ 127, 0, 0 };
	bool colorIncreasing = true;
};

