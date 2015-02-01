#include <SFML/Graphics.hpp>
#include <memory>
#include "Game.h"

int main(int argc, char *argv[]) {
	Game::instance().run(1024, 768, "SFML Game");

	while (Game::instance().isrunning()) {
		Game::instance().update();
		//Game::instance().render();
	}

	return 0;
}
