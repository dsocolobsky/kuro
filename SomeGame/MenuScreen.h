#pragma once
#include "Screen.h"

class MenuScreen : public Screen
{
public:
	MenuScreen();

	void init();
	void update(sf::Event event);
	void render();

	~MenuScreen();
};

