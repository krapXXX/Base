#pragma once
/*Для этого вы
разработали классBase,
а в нем - четыре переменные:

 int
 people_on_base; - количество людей на территории базы;


 int vehicles_on_base; - количество транспортных
 средств на территории базы;

 double
 petrol_on_base; - количество бензина на местной "заправке" (в литрах);


 double goods_on_base; - количество "груза" -
 различных материальных ценностей (в тоннах).*/
class Base
{
	int people_base;
	int vehicles_base;
	double petrol_base;
	double goods_base;
public:
	Base();
	Base(int p, int v, double petr, double g);

};
