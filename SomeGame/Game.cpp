#include "Game.h"

Game::Game(int width, int height, std::string title) : window(sf::VideoMode(width, height), title),
menuScreen(std::make_shared<Game>(this)), gameScreen(std::make_shared<Game>(this))
{
	
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
