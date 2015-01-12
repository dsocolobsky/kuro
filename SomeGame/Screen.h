#pragma once

class Screen
{
public:
	Screen();

	virtual void init()   = 0;
	virtual void update() = 0;
	virtual void render() = 0;

	virtual ~Screen();
};

