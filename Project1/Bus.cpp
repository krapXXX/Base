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
	Base::people_base += people;
	Base::vehicles_base += 1;
}

void Bus::leave()
{
	Vehicle::leave();
	Base::people_base -= max_people;
}
