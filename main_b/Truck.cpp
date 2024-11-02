#include "Truck.h"
#include "Base.h"
#include <iostream>

using namespace std;

Truck::Truck(double load, double max_load, double petrol, double max_petrol) : Vehicle(petrol, max_petrol)
{
	this->load = load;
	this->max_load = max_load;
}


double Truck::getMaxLoad()
{
	return max_load;
}

double Truck::getCurrentLoad()
{
	return load;
}

void Truck::arrive()
{
	cout << "�������� ���������\n";
	Vehicle::arrive();

	Base::goods_on_base += load;
}

bool Truck::leave()
{

	if (Vehicle::leave() == true)
	{
		cout << "�������� ������ � ����\n";
		Base::goods_on_base -= load;

		return true;
	}

	else
	{
		return false;
	}
}
void Truck::SetLoad(double load)
{
	if (load <= Base::goods_on_base)
	{
		this->load = load;
	}

}