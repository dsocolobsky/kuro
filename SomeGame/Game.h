#pragma once

#include <SFML/Graphics.hpp>
#include <map>
#include "ScreenManager.h"
#include "ResourceHolder.h"

class Game
{
public:
	static Game& instance();

	void run(int width, int height, std::string title);
	void update();
	void render();

	void addScreen(const std::string &id, ScreenPtr screen);
	void setActiveScreen(const std::string &id);

	bool isrunning();

	ResourceHolder<sf::Texture, std::string>& texture_holder();
private:
	Game();

	std::map<std::string, ScreenPtr> m_screens;
	Screen *m_activeScreen;

	std::unique_ptr<sf::RenderWindow> m_window;
	
	bool m_isrunning;

	void load_resources();
	ResourceHolder<sf::Texture, std::string> m_texture_holder;

	Game(Game const&)           = delete;
	void operator=(Game const&) = delete;
};

