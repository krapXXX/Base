#pragma once
/*��� ����� ��
����������� �����Base,
� � ��� - ������ ����������:

 int
 people_on_base; - ���������� ����� �� ���������� ����;


 int vehicles_on_base; - ���������� ������������
 ������� �� ���������� ����;

 double
 petrol_on_base; - ���������� ������� �� ������� "��������" (� ������);


 double goods_on_base; - ���������� "�����" -
 ��������� ������������ ��������� (� ������).*/
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
