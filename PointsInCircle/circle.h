#pragma once

#include "Point.h"

class circle
{
	Point center;
	float radius;


public:
	circle(Point pIn, float radIn) {
		center = pIn;
		radius = radIn;
	}

	circle()
	{

	}
	~circle();
};

