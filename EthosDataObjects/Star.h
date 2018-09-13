#pragma once
class Star
{
public:
	//constructors
	Star();
	//destructor
	~Star();
	//getters for instance variables
	int getRadius();
	int getRotationalVelocity();
	int getMass();
	//setters for instance variables
	bool setRadius(int);
	bool setRotationalVelocity(int);
	bool setMass(int);
private:
	//instance variables
	int Radius, RotationalVelocity, Mass, Age;
	int r, g, b, a;
	//Function Declarations
};

