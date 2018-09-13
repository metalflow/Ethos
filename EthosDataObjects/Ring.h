#pragma once
class Ring
{
private:
	int Density;
	enum Type
	{
		ice, rock
	};

public:
	//Constructors
	Ring();
	//Destructor
	~Ring();
	//getters
	int getDensity();
	int getType();
	//setters


};

