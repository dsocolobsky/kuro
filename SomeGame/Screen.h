#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

class Game;

class Screen
{
public:
	Screen(Game &game);
	void setActiveScreen(const std::string &id);

	virtual void update(sf::Event &event)                       = 0;
	virtual void render(sf::RenderWindow &window)               = 0;
	
protected:
	Game &game;
};

