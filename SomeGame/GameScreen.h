#pragma once
#include "Screen.h"

class GameScreen : public Screen
{
public:
	GameScreen();

	void init();
	void update(sf::Event event);
	void render();
	
	~GameScreen();
};

