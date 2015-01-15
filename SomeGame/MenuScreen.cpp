#include "MenuScreen.h"

class ScreenManager;

MenuScreen::MenuScreen(ScreenManager &scrManager) : Screen(scrManager) {
}

void MenuScreen::update(sf::Event &event) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		setActiveScreen("game");
	}
}

void MenuScreen::render(sf::RenderWindow &window) {
	window.clear(sf::Color::Blue);
}