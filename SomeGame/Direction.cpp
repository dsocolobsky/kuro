#include "Direction.h"

inline bool isValidDirection(short d) {
	return d >= -1 && d <= 1;
}

Direction::Direction() : x(0), y(0) {
}

Direction::Direction(short x, short y) : x(0), y(0) {
	this->setX(x);
	this->setY(y);
}

void Direction::setX(short x) {
	if (isValidDirection(x)) {
		this->x = x;
	}
}

void Direction::setY(short y) {
	if (isValidDirection(y)) {
		this->y= y;
	}
}

short Direction::getX() {
	return this->x;
}

short Direction::getY() {
	return this->y;
}