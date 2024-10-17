#include "Base.h"

Base::Base()
{
	people_base = 30; 
	vehicles_base = 5;
	petrol_base = 1000;
	goods_base = 100;
}

Base::Base(int p, int v, double petr, double g)
{
	people_base = p;
	vehicles_base = v;
	petrol_base = petr;
	goods_base = g;
}
