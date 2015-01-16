#pragma once
class Direction
{
public:
	Direction();
	Direction(short x, short y);

	void setX(short x);
	void setY(short y);

	short x();
	short y();
private:
	short m_x;
	short m_y;
};

