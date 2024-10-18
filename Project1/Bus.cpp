#include "Bus.h"

Bus::Bus(int P, int max_P, double p, double t):Vehicle(p,t)
{
	people = P;
	max_people = max_P;
}

int Bus::getPeopleCount()
{
	return people;
}

int Bus::getMaxPeople()
{
	return max_people;
}

void Bus::arrive()
{
	Base::people_base += getPeopleCount();
	Base::vehicles_base += 1;
}

bool Bus::leave()
{
	if (Vehicle::leave())
	{
		Base::people_base -= getMaxPeople();
		return true;
	}
	else
	{
		return false;
	}
}
