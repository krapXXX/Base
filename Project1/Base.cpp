#include "Base.h"
#include<iostream>
using namespace std;
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

void Base::Print()
{
	cout << "People on base: " << people_base
		<< endl << "Vehicles on base: " << vehicles_base
		<< endl << "Petrol on base: " << petrol_base
		<< endl << "Goods on base: " << goods_base;
}

double Base::goods_base = 0;