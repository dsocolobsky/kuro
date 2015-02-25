#pragma once
#include <string>
#include <SFML/Graphics.hpp>

enum AnimationType {
	ONCE,
	LOOP
};

class Animation
{
public:
	Animation(sf::Texture &texture);

	void update(float dt);

	void add_frame(sf::IntRect intrect);
	sf::IntRect current_frame();

	sf::Time frame_time;
	sf::Texture& texture;

	AnimationType animation_type;
private:
	int frame_index;
	std::vector<sf::IntRect> frames;

	sf::Time timer;
	bool active;
};

