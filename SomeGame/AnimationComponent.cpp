#include "AnimationComponent.h"


AnimationComponent::AnimationComponent(Entity& parent) : Component(parent) {
	m_current_animation = nullptr;
}

Animation& AnimationComponent::animation(const std::string &id) {
	return *m_animations[id];
}

void AnimationComponent::add_animation(std::string id, AnimationPtr animation) {
	m_animations[id] = std::move(animation);
}

Animation* AnimationComponent::current_animation(const std::string &id) {
	return m_current_animation;
}

void AnimationComponent::set_current_animation(const std::string &id) {
	m_current_animation = m_animations[id].get();
}