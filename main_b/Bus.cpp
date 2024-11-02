#include <iostream>
#include "Bus.h"
#include "Base.h"


using namespace std;

Bus::Bus(int people, int max_people, double petrol, double max_petrol) : Vehicle(petrol, max_petrol)
{
	this->people = people;
	this->max_people = max_people;
}

int Bus::getPeopleCount()
{
	return people;
}

int Bus::getMaxPeople()
{
	return max_people;
}

void Bus::arrive()
{
	cout << "������� ���������\n";
	Vehicle::arrive();
	Base::people_on_base += people;
}
bool Bus::leave()
{

	if (Vehicle::leave() == true)
	{
		cout << "������� ������ � ����\n";
		Base::people_on_base -= people;

		return true;
	}
	else
	{
		return false;
	}
}
void Bus::setPeople(int people)
{
	if (people <= Base::people_on_base)
	{
		this->people = people;
	}




}