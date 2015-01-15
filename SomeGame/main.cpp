#include <SFML/Graphics.hpp>
#include <memory>
#include "Game.h"

int main(int argc, char *argv[]) {
	auto game = std::make_unique<Game>(800, 600, "SFML Game");

	game->run();

	return 0;
}
