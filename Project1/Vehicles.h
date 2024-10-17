#pragma once
#include "Base.h"
class Vehicle
{
	double tank_volume;
	double petrol_amount;
	
	/*Vehicle(double petrol_amount, double tank_volume);
double getTankVolume(); - узнать объем бензобака в литрах;
double getPetrolAmount(); - узнать текущее количество топлива в баке;
void arrive(); - приехать на базу;
boolean leave(); - залить полный бак и покинуть базу; в случае невозможности уехать возвращает false;*/
public:
	Vehicle(double p, double t);
	double getTankVolume();
	double getPetrolAmount();
	void arrive();
	bool leave();
};
