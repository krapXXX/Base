#include "Vehicles.h"

Vehicle::Vehicle(double p, double t)
{
	petrol_amount = p;
	tank_volume = t;
}

double Vehicle::getTankVolume()
{
	return tank_volume;;
}

double Vehicle::getPetrolAmount()
{
	return petrol_amount;
}

void Vehicle::arrive()
{
	people_base+=1;
	vehicles_base+=1;
	petrol_base+=petrol_amount;
}

bool Vehicle::leave()
{
	if (petrol_base + petrol_amount >= tank_volume)
	{
		petrol_base -= tank_volume - petrol_amount;
		people_base -= 1;
		vehicles_base -= 1;
		petrol_amount = tank_volume;
	}
	else
	{
		return false;
	}
}
