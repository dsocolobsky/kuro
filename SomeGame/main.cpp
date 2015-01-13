#include <SFML/Graphics.hpp>
#include <memory>
#include "Game.h"

int main(int argc, char *argv[]) {
	std::unique_ptr<Game> game(new Game);
	game->window.create(sf::VideoMode(800, 600), "SFML Game");
	std::unique_ptr<Screen> screen(&game->menuScreen);

	game->run();

	return 0;
}
