#include "GameScreen.h"

GameScreen::GameScreen(Game &game) : Screen(game) {
}

void GameScreen::update(float dt) {
	world.update(dt);
	handle_input();
}

void GameScreen::render(sf::RenderWindow &window) {
	window.clear(sf::Color::Green);
	world.render(window);
}

void GameScreen::handle_input() {
	
}
