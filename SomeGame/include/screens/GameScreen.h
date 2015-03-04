#pragma once
#include "Screen.h"
#include "../../include/Game.h"

class GameScreen : public Screen
{
public:
	GameScreen(Game &game);
	
	void update(float dt);
	void render(sf::RenderWindow &window);
private:
	void handle_input();
};

