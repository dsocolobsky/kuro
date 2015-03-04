#include <SFML/Graphics.hpp>
#include <memory>
#include "../include/Game.h"

int main(int argc, char *argv[]) {
	const sf::Time FPS = sf::seconds(1.f / 60.f);
	sf::Clock clock;
	sf::Time lastUpdate = sf::Time::Zero;

	Game::instance().run(1024, 768, "SFML Game");
	while (Game::instance().isrunning()) {
		sf::Time elapsed = clock.restart();
		lastUpdate += elapsed;

		while (lastUpdate > FPS) {
			lastUpdate -= FPS;
			Game::instance().update(FPS.asSeconds());
		}

		Game::instance().render();
	}

	return 0;
}
