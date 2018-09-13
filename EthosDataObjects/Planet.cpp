#include <vector>
#include "Ring.h"
#include "Planet.h"

Planet::Planet()
{
}

Planet::~Planet()
{
}

int Planet::getDistanceFromSun() {
	return DistanceFromTheSun;
}

int Planet::getMass() {
	return Mass;
}

int Planet::getOrbitalVelocity() {
	return OrbitalVelocity;
}

int Planet::getRadius() {
	return Radius;
}

int Planet::getRotationalVelocity() {
	return RotationalVelocity;
}

bool Planet::setDistanceFromSun(int input) {
	DistanceFromTheSun = input;
	return true;
}

bool Planet::setMass(int input) {
	Mass = input;
	return true;
}

bool Planet::setOrbitalVelocity(int input) {
	Mass = input;
	return true;
}

bool Planet::setRadius(int input) {
	Radius = input;
	return true;
}

bool Planet::setRotationalVelocity(int input) {
	RotationalVelocity = input;
	return true;
}

