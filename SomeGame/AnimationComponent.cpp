#include "AnimationComponent.h"
#include "Logger.h"
#include "Entity.h"

AnimationComponent::AnimationComponent(Entity &parent) : Component(parent) {
	current_animation = nullptr;
}

void AnimationComponent::update(float dt) {
	m_sprite.setPosition(m_parent.x(), m_parent.y());

	if (current_animation != nullptr) {
		current_animation->update(dt);
	}
}

void AnimationComponent::render(sf::RenderWindow &window) {
	window.draw(m_sprite);
}

void AnimationComponent::add_animation(std::string id, sf::Texture &texture, sf::Time frame_time, AnimationType type) {
	m_animations[id] = std::move(std::unique_ptr<Animation>(new Animation(texture)));
	m_animations[id]->frame_time = frame_time;
	m_animations[id]->animation_type = type;
}

Animation* AnimationComponent::animation(const std::string &id) {
	return m_animations[id].get();
}

void AnimationComponent::play_animation(const std::string &id) {
	m_sprite.setTexture(m_animations[id]->texture);
	m_sprite.setTextureRect(m_animations[id]->current_frame());

	current_animation = m_animations[id].get();
}