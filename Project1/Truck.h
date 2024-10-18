#pragma once
#include "Vehicles.h"
class Truck:public Vehicle
{
	double goods;
	double max_goods;
public:
	Truck(double G, double max_G, double p, double t);
	double getCurrentGoods();
	double getMaxGoods();
	void arrive();
	void leave();
};