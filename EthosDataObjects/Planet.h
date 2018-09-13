/* This class defines the Planet Object*/
#pragma once
class Planet {
public:
	//instance variables
	//none (unsafe for public variables?)

	//Function Declarations
	//constructors?
	Planet();
	//destructor
	~Planet();
	//getters for instance variables
	int getDistanceFromSun();
	int getRadius();
	int getRotationalVelocity();
	int getOrbitalVelocity();
	int getMass();
	//setters for instance variables
	bool setDistanceFromSun(int);
	bool setRadius(int);
	bool setRotationalVelocity(int);
	bool setOrbitalVelocity(int);
	bool setMass(int);

private:
	//instance variables
	int DistanceFromTheSun, Radius, RotationalVelocity, OrbitalVelocity, Mass;
	std::vector<Planet> Moons;
	//std::vector<Ring> Rings;
	//Ring[] Rings;
	//Function Declarations
};
