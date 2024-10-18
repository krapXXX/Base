#include "Truck.h"

Truck::Truck(double G, double max_G, double p, double t) :Vehicle(p, t)
{
	goods = G;
	max_goods = max_G;
}

double Truck::getCurrentGoods()
{
	return goods;
}

double Truck::getMaxGoods()
{
	return max_goods;
}

void Truck::arrive()
{
	Base::people_base += 1;
	Base::vehicles_base += 1;
	Base::goods_base += getCurrentGoods();
}

bool Truck::leave()
{
	if (Vehicle::leave()) 
	{
		Base::goods_base -= getMaxGoods();
		return true;
	}
	else 
	{
		return false;
	}
}
