#include "../../include/entities/Player.h"
#include "../../include/Game.h"
#include "../../include/Logger.h"

#define KEY_PRESSED(key) sf::Keyboard::isKeyPressed(key)
#define PLAYER_TEXTURE Game::instance().texture_holder().get("player")

using sf::Keyboard;

Player::Player() {
	m_physics   = PhysicsPtr(new PhysicsComponent(*this));
	m_animation = AnimationPtr(new AnimationComponent(*this));
	
	setWidth(32);
	setHeight(32);

	m_physics->setSpeed(200);

	m_animation->add_animation("walk_up", PLAYER_TEXTURE, sf::seconds(0.5), AnimationType::LOOP);
	m_animation->animation("walk_up")->add_frame(sf::IntRect(0, 0, 32, 32));
	m_animation->animation("walk_up")->add_frame(sf::IntRect(32, 0, 32, 32));

	m_animation->add_animation("walk_down", PLAYER_TEXTURE, sf::seconds(0.5), AnimationType::LOOP);
	m_animation->animation("walk_down")->add_frame(sf::IntRect(64, 0, 32, 32));
	m_animation->animation("walk_down")->add_frame(sf::IntRect(96, 0, 32, 32));

	m_animation->add_animation("walk_left", PLAYER_TEXTURE, sf::seconds(0.5), AnimationType::LOOP);
	m_animation->animation("walk_left")->add_frame(sf::IntRect(0, 32, 32, 32));
	m_animation->animation("walk_left")->add_frame(sf::IntRect(32, 32, 32, 32));

	m_animation->add_animation("walk_right", PLAYER_TEXTURE, sf::seconds(0.5), AnimationType::LOOP);
	m_animation->animation("walk_right")->add_frame(sf::IntRect(64, 32, 32, 32));
	m_animation->animation("walk_right")->add_frame(sf::IntRect(96, 32, 32, 32));

	m_animation->play_animation("walk_up");
}

void Player::update(float dt) {
	handle_input();

	m_position.x = m_position.x + (m_physics->speed() * dt) * m_physics->dx();
	m_position.y = m_position.y + (m_physics->speed() * dt) * m_physics->dy();

	m_physics->update();

	m_animation->update(dt);
}

void Player::render(sf::RenderWindow &window) {
	m_animation->render(window);
}

void Player::handle_input() {
	if (KEY_PRESSED(Keyboard::W)) {
		m_physics->setDy(-1);

		m_animation->play_animation("walk_up");
	}
	
	if (KEY_PRESSED(Keyboard::S)) {
		m_physics->setDy(1);

		m_animation->play_animation("walk_down");
	}

	if (KEY_PRESSED(Keyboard::A)) {
		m_physics->setDx(-1);

		m_animation->play_animation("walk_left");
	}
	
	if (KEY_PRESSED(Keyboard::D)) {
		m_physics->setDx(1);

		m_animation->play_animation("walk_right");
	}
}