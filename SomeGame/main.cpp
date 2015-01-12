#include <SFML/Graphics.hpp>
#include <memory>
#include "MenuScreen.h"
#include "GameScreen.h"

struct Game {
	sf::RenderWindow window;
	MenuScreen menuScreen;
	GameScreen gameScreen;
};

int main(int argc, char *argv[]) {
	std::unique_ptr<Game> game(new Game);
	game->window.create(sf::VideoMode(800, 600), "SFML Game");
	std::unique_ptr<Screen> screen(&game->gameScreen);

	while (game->window.isOpen()) {
		sf::Event event;

		while (game->window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				game->window.close();
			}

			screen->update(event);
		}

		game->window.clear();
		game->window.display();
	}

	return 0;
}
