#include "Game.h"
#include "Assets.h"
#include "MenuScreen.h"
#include "GameScreen.h"

sf::Sprite sprite;

// Private constructor
Game::Game() {
	
}

// Get a reference to the static instance of this class
Game& Game::instance() {
	static Game instance;
	return instance;
}

void Game::run(int width, int height, std::string title) {
	load_resources();

	m_window = std::unique_ptr<sf::RenderWindow>(new sf::RenderWindow(sf::VideoMode(width, height), title));

	m_scrmanager.addScreen("menu", ScreenPtr(new MenuScreen(*this)));
	m_scrmanager.addScreen("game", ScreenPtr(new GameScreen(*this)));
	m_scrmanager.setActiveScreen("menu");

	m_isrunning = true;
}

void Game::update(float dt) {
	sf::Event event;

	while (m_window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			m_window->close();
		}

		if (event.type == sf::Event::KeyPressed) {
			m_keymap[event.key.code] = true;
		}

		if (event.type == sf::Event::KeyReleased) {
			m_keymap[event.key.code] = false;
		}
	}

	m_scrmanager.update(dt);
}

void Game::render() {
	m_window->clear();

	m_scrmanager.render(*m_window);

	m_window->display();
}

bool Game::isrunning() {
	return m_isrunning;
}

ScreenManager& Game::screen_manager() {
	return m_scrmanager;
}

bool Game::key_pressed(const sf::Keyboard::Key &key) {
	return m_keymap[key];
}

void Game::load_resources() {
	m_texture_holder.load("player", "Assets/Textures/player.png");
}

ResourceHolder<sf::Texture, std::string>& Game::texture_holder() {
	return m_texture_holder;
}