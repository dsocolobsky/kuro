#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

class ScreenManager;

class Screen
{
public:
	Screen(ScreenManager &scrManager);
	void setActiveScreen(const std::string &id);

	virtual void update(sf::Event &event)                       = 0;
	virtual void render(sf::RenderWindow &window)               = 0;
	
protected:
	ScreenManager &screenManager;
};

