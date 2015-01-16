#include "Game.h"
#include "MenuScreen.h"
#include "GameScreen.h"

Game::Game(int width, int height, std::string title) : m_window(sf::VideoMode(width, height), title)
{
	m_screenManager.addScreen("menu", ScreenPtr(new MenuScreen(m_screenManager)));
	m_screenManager.addScreen("game", ScreenPtr(new GameScreen(m_screenManager)));
	m_screenManager.setActiveScreen("menu");
}

void Game::run() {
	while (m_window.isOpen()) {
		sf::Event event;

		while (m_window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				m_window.close();
			}

			m_screenManager.update(event);
		}

		m_window.clear();
		m_screenManager.render(m_window);
		m_window.display();
	}
}