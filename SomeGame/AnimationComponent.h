#pragma once
#include <map>
#include <memory>
#include "Component.h"
#include "AnimatedSprite.hpp"

typedef std::unique_ptr<Animation> AnimationPtr;

class AnimationComponent : public Component
{
public:
	AnimationComponent(Entity& parent);

	Animation& animation(const std::string &id);
	void add_animation(std::string id, AnimationPtr animation);

	Animation* current_animation(const std::string &id);
	void set_current_animation(const std::string &id);
private:
	std::map<std::string, AnimationPtr> m_animations;
	Animation* m_current_animation;
};

