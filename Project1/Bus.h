#pragma once
#include "Vehicles.h"
class Bus:public Vehicle
{
	int people;
	int max_people;
public:
	Bus(int people, int max_people, double p, double t);
	int getPeopleCount();
	int getMaxPeople();
	void arrive();
	bool leave();
};
