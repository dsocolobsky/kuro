#include <SFML/Graphics.hpp>
#include <memory>
#include "Game.h"

int main(int argc, char *argv[]) {
	std::unique_ptr<Game> game(new Game(800, 600, "SFML Game"));
	Screen *screen = nullptr;

	screen = &game->menuScreen;

	while (game->window.isOpen()) {
		sf::Event event;

		while (game->window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				game->window.close();
			}

			screen->update(event);
		}

		game->window.clear();
		screen->render();
		game->window.display();
	}

	return 0;
}
