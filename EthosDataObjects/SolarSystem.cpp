#include <vector>
#include "Star.h"
#include "Asteroid.h"
#include "Planet.h"
#include "SolarSystem.h"




SolarSystem::SolarSystem()
{
}


SolarSystem::~SolarSystem()
{
}

Star SolarSystem::getSun()
{
	return Sun;
}

std::vector<Planet> SolarSystem::getPlanets()
{
	return Planets;
}