#pragma once
#include "Base.h"
class Vehicle
{
	double tank_volume;
	double petrol_amount;
	
	/*Vehicle(double petrol_amount, double tank_volume);
double getTankVolume(); - ������ ����� ��������� � ������;
double getPetrolAmount(); - ������ ������� ���������� ������� � ����;
void arrive(); - �������� �� ����;
boolean leave(); - ������ ������ ��� � �������� ����; � ������ ������������� ������ ���������� false;*/
public:
	Vehicle(double p, double t);
	double getTankVolume();
	double getPetrolAmount();
	void arrive();
	bool leave();
};
