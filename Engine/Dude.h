#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:
	Dude();
	~Dude();
	void ClampToScreen();
	void Update(const Keyboard& kbd);
	void Draw(Graphics& gfx) const;
	int GetX() const;
	int GetY() const;
	int GetWidth() const;
	int GetHeight() const;
private:
	int x = 400;
	int y = 300;
	static constexpr int speed = 3;
	static constexpr int height = 20;
	static constexpr int width = 20;
};

