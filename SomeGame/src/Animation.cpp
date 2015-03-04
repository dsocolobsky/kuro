#include "../include/Animation.h"
#include "../include/Logger.h"

Animation::Animation(sf::Texture &texture) : texture(texture) {
	frame_index = 0;
}

void Animation::update(float dt) {
	if (active) {
		timer += sf::seconds(dt);

		if (timer >= frame_time) {
			timer = sf::Time::Zero;

			if (frame_index + 1 < frames.size()) {
				frame_index++;
			} else {
				if (animation_type == AnimationType::ONCE) {
					active = false;
				}

				frame_index = 0;
			}
		}

		LOG_DEBUG(timer.asSeconds())

	}
}

void Animation::add_frame(sf::IntRect intrect) {
	frames.push_back(intrect);
}

sf::IntRect Animation::current_frame() {
	return frames[frame_index];
}