#include "Game.h"
#include "Assets.h"
#include "MenuScreen.h"
#include "GameScreen.h"

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

	addScreen("menu", ScreenPtr(new MenuScreen(*this)));
	addScreen("game", ScreenPtr(new GameScreen(*this)));
	setActiveScreen("menu");

	m_isrunning = true;
}

void Game::update() {
	while (m_window->isOpen()) {
		sf::Event event;

		while (m_window->pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				m_window->close();
			}

			if (m_activeScreen) {
				m_activeScreen->update(event);
			}
		}

		render();
	}
}

void Game::render() {
	m_window->clear();

	if (m_activeScreen) {
		m_activeScreen->render(*m_window);
	}

	m_window->display();
}

bool Game::isrunning() {
	return m_isrunning;
}

void Game::addScreen(const std::string &id, ScreenPtr screen) {
	m_screens[id] = std::move(screen);
}

void Game::setActiveScreen(const std::string &id) {
	auto s = m_screens.find(id);

	if (s != m_screens.end()) {
		m_activeScreen = s->second.get();
	}
}

void Game::load_resources() {
	m_texture_holder.load("player", "Assets/Textures/player.png");
}

ResourceHolder<sf::Texture, std::string>& Game::texture_holder() {
	return m_texture_holder;
}