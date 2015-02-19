#pragma once
#include <map>
#include <memory>
#include "Component.h"
#include "AnimatedSprite.hpp"

class AnimationComponent : public Component
{
public:
	AnimationComponent(Entity& parent);

	Animation& animation(const std::string &id);
	void add_animation(std::string id, const sf::Texture &texture);

	Animation* current_animation(const std::string &id);
	void set_current_animation(const std::string &id);
private:
	std::map<std::string, std::unique_ptr<Animation>> m_animations;
	Animation* m_current_animation;
};

