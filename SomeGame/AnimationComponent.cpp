#include "AnimationComponent.h"


AnimationComponent::AnimationComponent(Entity& parent) : Component(parent) {
	m_current_animation = nullptr;
}

Animation& AnimationComponent::animation(const std::string &id) {
	return *m_animations[id];
}

void AnimationComponent::add_animation(std::string id, const sf::Texture &texture) {
	auto anim = std::unique_ptr<Animation>(new Animation());
	anim->setSpriteSheet(texture);
	m_animations[id] = std::move(anim);
}

Animation* AnimationComponent::current_animation(const std::string &id) {
	return m_current_animation;
}

void AnimationComponent::set_current_animation(const std::string &id) {
	m_current_animation = m_animations[id].get();
}