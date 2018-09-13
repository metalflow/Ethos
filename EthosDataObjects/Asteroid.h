#pragma once
class Asteroid
{
private:
	int Mass;
	enum Type
	{
		ice, rock
	};

public:
	//constructor
	Asteroid();
	//destructor
	~Asteroid();

	//getters
	int getMass();
	int getType();

	//setters
	bool setMass(int);
	bool setType(Type);
};

