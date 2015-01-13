#include <SFML/Graphics.hpp>
#include <memory>
#include "Game.h"

int main(int argc, char *argv[]) {
	std::unique_ptr<Game> game(new Game(800, 600, "SFML Game"));

	game->run();
	
	return 0;
}
