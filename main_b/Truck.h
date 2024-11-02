#pragma once
#include "Vehicle.h"

class Truck : public Vehicle
{
	double load;
	double max_load;

public:
	Truck(double load, double max_load, double petrol, double max_petrol);

	double getCurrentLoad();
	double getMaxLoad();

	void arrive();
	bool leave();

	void SetLoad(double load);
};