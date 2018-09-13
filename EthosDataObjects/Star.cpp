#include "Star.h"



Star::Star()
{
}


Star::~Star()
{
}

int Star::getRadius()
{
	return Radius;
}

int Star::getRotationalVelocity()
{
	return RotationalVelocity;
}

int Star::getMass()
{
	return Mass;
}

bool Star::setRadius(int input)
{
	Radius = input;
	return true;
}

bool Star::setRotationalVelocity(int input)
{
	RotationalVelocity = input;
	return true;
}

bool Star::setMass(int input)
{
	Mass = input;
	return true;
}
