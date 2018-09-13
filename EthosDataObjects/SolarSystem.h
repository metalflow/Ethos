#pragma once
class SolarSystem
{
private:
	//instance variables
	Star Sun;
	std::vector<Planet> Planets;
	std::vector<Asteroid> Asteroids;
	int age;

public:
	//instance variable declarations
	// none (unsafe?)

	//function declarations
	//constructors?
	SolarSystem();
	//destructor
	~SolarSystem();
	//getters
	Star getSun();
	std::vector<Planet> getPlanets();
	//setters
	

};

