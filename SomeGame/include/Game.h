#pragma once

#include <SFML/Graphics.hpp>
#include <map>
#include "screens/ScreenManager.h"
#include "ResourceHolder.h"

class Game
{
public:
	static Game& instance();

	void run(int width, int height, std::string title);
	void update(float dt);
	void render();

	ScreenManager& screen_manager();

	bool isrunning();

	bool key_pressed(const sf::Keyboard::Key &key);

	ResourceHolder<sf::Texture, std::string>& texture_holder();
private:
	Game();

	ScreenManager m_scrmanager;

	std::unique_ptr<sf::RenderWindow> m_window;
	
	bool m_isrunning;

	sf::Clock clock;
	sf::Time deltaTime;

	void load_resources();
	ResourceHolder<sf::Texture, std::string> m_texture_holder;

	std::map<sf::Keyboard::Key, bool> m_keymap;

	Game(Game const&)           = delete;
	void operator=(Game const&) = delete;
};

