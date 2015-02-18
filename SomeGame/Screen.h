#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

class Game;

class Screen
{
public:
	Screen(Game &game);

	virtual void update(float dt)                   = 0;
	virtual void render(sf::RenderWindow &window)	= 0;
	
protected:
	Game &game;
	virtual void handle_input() = 0;
};

