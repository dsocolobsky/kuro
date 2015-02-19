#include "Player.h"
#include "Game.h"
#include "Logger.h"

#define KEY_PRESSED(key) Game::instance().key_pressed(key)
using sf::Keyboard;

Player::Player() {
	m_physics = PhysicsPtr(new PhysicsComponent(*this));
	m_texture = TexturePtr(new TextureComponent(*this));
	

	setWidth(32);
	setHeight(32);

	m_physics->setSpeed(200);
	
	auto ptx = Game::instance().texture_holder().get("player");
	m_texture->set_texture(Game::instance().texture_holder().get("player"));
}

void Player::update(float dt) {
	handle_input();

	if (m_physics) {
		m_position.x = m_position.x + (m_physics->speed() * dt) * m_physics->dx();
		m_position.y = m_position.y + (m_physics->speed() * dt) * m_physics->dy();

		m_physics->update();
	}

	if (m_texture) {
		m_texture->update();
	}

}

void Player::render(sf::RenderWindow &window) {
	if (m_texture) {
		m_texture->render(window);
	}
}

void Player::handle_input() {
	if (KEY_PRESSED(Keyboard::W)) {
		m_physics->setDy(-1);
	}
	
	if (KEY_PRESSED(Keyboard::S)) {
		m_physics->setDy(1);
	}

	if (KEY_PRESSED(Keyboard::A)) {
		m_physics->setDx(-1);
	}
	
	if (KEY_PRESSED(Keyboard::D)) {
		m_physics->setDx(1);
	}
}