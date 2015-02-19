#include "Player.h"
#include "Game.h"
#include "Logger.h"

#define KEY_PRESSED(key) Game::instance().key_pressed(key)
using sf::Keyboard;

Player::Player() {
	m_physics   = PhysicsPtr(new PhysicsComponent(*this));
	m_render = RenderPtr(new RenderComponent(*this));
	
	setWidth(32);
	setHeight(32);

	m_physics->setSpeed(200);
	
	auto ptx = Game::instance().texture_holder().get("player");

	m_render->add_animation("walk_up", Game::instance().texture_holder().get("player"), sf::seconds(1));
	m_render->animation("walk_up")->add_frame(sf::IntRect(0, 0, 32, 32));
	m_render->animation("walk_up")->add_frame(sf::IntRect(32, 0, 32, 32));
	m_render->animation("walk_up")->add_frame(sf::IntRect(0, 32, 32, 32));
	m_render->animation("walk_up")->add_frame(sf::IntRect(32, 32, 32, 32));

	/*m_animation->add_animation("walk_down", Game::instance().texture_holder().get("player"), sf::seconds(0.5));
	m_animation->animation("walk_down").addFrame(sf::IntRect(0, 32, 32, 32)); 

	m_animation->add_animation("walk_left", Game::instance().texture_holder().get("player"), sf::seconds(0.5));
	m_animation->animation("walk_left").addFrame(sf::IntRect(32, 0, 32, 32));

	m_animation->add_animation("walk_right", Game::instance().texture_holder().get("player"), sf::seconds(0.5));
	m_animation->animation("walk_right").addFrame(sf::IntRect(32, 32, 32, 32));*/

	m_render->set_current_animation("walk_up");
}

void Player::update(float dt) {
	handle_input();

	if (m_physics) {
		m_position.x = m_position.x + (m_physics->speed() * dt) * m_physics->dx();
		m_position.y = m_position.y + (m_physics->speed() * dt) * m_physics->dy();

		m_physics->update();
	}

	if (m_render) {
		m_render->update(dt);
	}

}

void Player::render(sf::RenderWindow &window) {
	if (m_render) {
		m_render->render(window);
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