#pragma once
#include "Base.h"
class Vehicle
{
	double tank_volume;
	double petrol_amount;
public:
	Vehicle(double p, double t);
	double getTankVolume();
	double getPetrolAmount();
	void arrive();
	bool leave();
};
