#include "Game.h"

Game::Game(int width, int height, std::string title) : window(sf::VideoMode(width, height), title),
gameScreen(std::unique_ptr<GameScreen>(new GameScreen())), menuScreen(std::unique_ptr<MenuScreen>(new MenuScreen()))
{
	screen = menuScreen.get();
}

void Game::run() {
	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			screen->update(event);
		}

		window.clear();
		screen->render(window);
		window.display();
	}
}

Game::~Game() {
}
