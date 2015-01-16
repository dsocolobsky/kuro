#pragma once
class Direction
{
public:
	Direction();
	Direction(short x, short y);

	void setX(short x);
	void setY(short y);

	short getX();
	short getY();
private:
	short x;
	short y;
};

