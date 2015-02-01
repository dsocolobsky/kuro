#include "MenuScreen.h"
#include "Game.h"

MenuScreen::MenuScreen(Game &game) : Screen(game) {
}

void MenuScreen::update(sf::Event &event) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		Game::instance().setActiveScreen("game");
	}
}

void MenuScreen::render(sf::RenderWindow &window) {
	window.clear(sf::Color::Blue);	
}