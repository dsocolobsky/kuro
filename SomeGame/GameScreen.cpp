#include "GameScreen.h"

GameScreen::GameScreen(Game &game) : Screen(game) {
}

void GameScreen::update(float dt) {
	handle_input();
}

void GameScreen::render(sf::RenderWindow &window) {
	window.clear(sf::Color::Green);
}

void GameScreen::handle_input() {
	
}
