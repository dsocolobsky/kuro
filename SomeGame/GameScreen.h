#pragma once
#include "Screen.h"
#include "Game.h"
#include "World.h"

class GameScreen : public Screen
{
public:
	GameScreen(Game &game);
	
	void update(float dt);
	void render(sf::RenderWindow &window);
private:
	World world;
	void handle_input();
};

