#include "ScreenManager.h"

ScreenManager::ScreenManager() : m_activeScreen(nullptr) {

}

void ScreenManager::update(float dt) {
	if (m_activeScreen) {
		m_activeScreen->update(dt);
	}
}

void ScreenManager::render(sf::RenderWindow &window) {
	if (m_activeScreen) {
		m_activeScreen->render(window);
	}
}

void ScreenManager::addScreen(const std::string &id, ScreenPtr screen) {
	m_screens[id] = std::move(screen);
}

void ScreenManager::setActiveScreen(const std::string &id) {
	auto s = m_screens.find(id);

	if (s != m_screens.end()) {
		m_activeScreen = s->second.get();
	}
}

Screen* ScreenManager::active_screen() {
	return m_activeScreen;
}