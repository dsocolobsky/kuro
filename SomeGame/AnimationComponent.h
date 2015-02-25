#pragma once
#include <map>
#include <string>
#include <SFML/Graphics.hpp>
#include "Component.h"
#include "Animation.h"

class AnimationComponent : public Component
{
public:
	AnimationComponent(Entity &parent);

	sf::Sprite &sprite();

	void update(float dt);
	void render(sf::RenderWindow &window);

	Animation* animation(const std::string &id);
	void add_animation(std::string id, sf::Texture &texture, sf::Time frame_time, AnimationType type);
	void play_animation(const std::string &id);

	void AnimationComponent::add_frame(const std::string &id, sf::IntRect intrect);
private:
	sf::Sprite m_sprite;
	std::map<std::string, std::unique_ptr<Animation>> m_animations;
	Animation* current_animation;
};

