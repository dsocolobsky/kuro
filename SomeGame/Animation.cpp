#include "Animation.h"

Animation::Animation(sf::Texture &texture) : texture(texture) {
	frame_index = 0;
}

void Animation::add_frame(sf::IntRect intrect) {
	frames.push_back(intrect);
}

sf::IntRect Animation::current_frame() {
	return frames[frame_index];
}