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
	Base::people_base+=1;
	Base::vehicles_base+=1;
}

void Vehicle::leave()
{
	if (Base::petrol_base + petrol_amount >= tank_volume)
	{
		Base::petrol_base -= tank_volume - petrol_amount;
		Base::people_base -= 1;
		Base::vehicles_base -= 1;
		petrol_amount = tank_volume;
	}
	else
	{
		Base::petrol_base -= tank_volume - petrol_amount;
		Base::people_base -= 1;
		Base::vehicles_base -= 1;
		petrol_amount += Base::petrol_base;
	}
}
