#pragma once
#include "Screen.h"

class MenuScreen : public Screen
{
public:
	MenuScreen(ScreenManager &scrManager);

	void update(sf::Event &event);
	void render(sf::RenderWindow &window);
};

