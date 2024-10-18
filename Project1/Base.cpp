#include "Base.h"
#include<iostream>
using namespace std;

double Base::goods_base = 0;
double Base::petrol_base = 0;
int Base::people_base = 0;
int Base::vehicles_base = 0;

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
		<< endl << "Goods on base: " << goods_base << endl;
}

