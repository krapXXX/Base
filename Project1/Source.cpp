#include<iostream>
#include"Base.h"
#include"Vehicles.h"
#include"Bus.h"
#include"Truck.h"
using namespace std;

int main()
{
	Base base(130,11,3030,84);
	base.Print();
	/*Vehicle* ptr = nullptr;
	ptr = new Bus(12,30,34,100);
	ptr->arrive();
	ptr->leave();*/

	Vehicle* ptr = nullptr;
	ptr = new Truck(12, 30, 34, 100);
	ptr->arrive();
	//ptr->leave();
	base.Print();
}