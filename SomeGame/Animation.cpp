#include "Animation.h"
#include "RenderComponent.h"
#include <SFML/Graphics.hpp>

Animation::Animation(RenderComponent &parent) : m_parent(parent) {
	m_frame_index = 0;
	m_current_time = sf::Time::Zero;
	m_paused = false;
}

void Animation::update(float dt) {
	if (!m_paused && m_frames.size() > 0) {
		m_current_time += sf::seconds(dt);

		if (m_current_time >= m_frame_time) {
			m_current_time = sf::microseconds(m_current_time.asMicroseconds() %
				m_frame_time.asMicroseconds());

			if (m_frame_index + 1 < m_frames.size()) {
				m_frame_index++;
			}
			else {
				m_frame_index = 0;

				if (!m_looped) {
					m_paused = true;
				}
			}

			m_parent.sprite().setTextureRect(m_frames[m_frame_index]);
		}

	}

}

void Animation::render(sf::RenderWindow &window) {
	window.draw(m_parent.sprite());
}

void Animation::set_texture(sf::Texture *texture) {
	m_texture = texture;
	m_parent.sprite().setTexture(*m_texture);
}

void Animation::set_frame_time(sf::Time frame_time) {
	m_frame_time = frame_time;
}

void Animation::add_frame(sf::IntRect intrect) {
	m_frames.push_back(intrect);

	if (m_frames.size() == 1) {
		m_frame_index = 0;
	}
}

void Animation::play() {
	m_paused = false;
}

void Animation::pause() {
	m_paused = true;
}

void Animation::reset() {
	m_frame_index = 0;
	m_paused = false;
}

void Animation::stop() {
	m_frame_index = 0;
	m_paused = true;
}


