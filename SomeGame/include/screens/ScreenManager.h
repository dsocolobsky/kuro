#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <memory>
#include <map>
#include "Screen.h"

typedef std::unique_ptr<Screen> ScreenPtr;

class ScreenManager
{
public:
	ScreenManager();

	void update(float dt);
	void render(sf::RenderWindow &window);

	void addScreen(const std::string &id, ScreenPtr screen);
	void setActiveScreen(const std::string &id);
	Screen* active_screen();
private:
	std::map<std::string, ScreenPtr> m_screens;
	Screen *m_activeScreen;
};

