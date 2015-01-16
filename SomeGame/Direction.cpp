#include "Direction.h"

inline bool isValidDirection(short d) {
	return d >= -1 && d <= 1;
}

Direction::Direction() : m_x(0), m_y(0) {
}

Direction::Direction(short x, short y) : m_x(0), m_y(0) {
	this->setX(x);
	this->setY(y);
}

void Direction::setX(short x) {
	if (isValidDirection(x)) {
		m_x = x;
	}
}

void Direction::setY(short y) {
	if (isValidDirection(y)) {
		m_y= y;
	}
}

short Direction::x() {
	return m_x;
}

short Direction::y() {
	return m_y;
}