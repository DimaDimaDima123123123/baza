#include "Vehicle.h"
#include <iostream>
#include "Base.h"
using namespace std;

Vehicle::Vehicle(double petrol_amount, double tank_volume) : petrol_amount(petrol_amount), tank_volume(tank_volume){}

double Vehicle::getPetrolAmount() const
{
    return petrol_amount;
}

double Vehicle::getTankVolume() const
{
    return tank_volume;
}



void Vehicle::arrive()
{
    Base::vehicle_on_base++;

    Base::people_on_base++;

}
bool Vehicle::leave()
{
    double required_fuel = tank_volume - petrol_amount;
    bool rez;

    if (Base::petrol_on_base < required_fuel || Base::people_on_base < 1)
    {
        cout << " Покинуть невозможно\n";
        rez = false;
    }

    else
    {
        petrol_amount = tank_volume;

        Base::petrol_on_base -= required_fuel;
        Base::vehicle_on_base--;
        Base::people_on_base--;

        rez = true;
    }

    return rez;
}