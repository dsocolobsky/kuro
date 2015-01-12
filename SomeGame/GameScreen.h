#pragma once
#include "Screen.h"

class GameScreen : public Screen
{
public:
	GameScreen();

	void init();
	void update();
	void render();
	
	~GameScreen();
};

