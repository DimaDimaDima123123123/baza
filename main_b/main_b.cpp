#include <iostream>
#include "Vehicle.h"
#include "Base.h"
#include "Truck.h"
#include "Bus.h"



using namespace std;

int Base::people_on_base = 200;
int Base::vehicle_on_base = 40;
double Base::petrol_on_base= 8000; 
double Base::goods_on_base = 100; 

int main()
{
    setlocale(LC_ALL, "ru");

    Base::showStatus();

    cout << endl;

    Bus bus(5, 10, 25, 50);

    bus.arrive();

    cout << endl;

    Base::showStatus();

    cout << endl;

    bus.setPeople(1);

    cout << "Автобус загружает людей\n";

    cout << endl;

    bus.leave();

    cout << endl;

    Base::showStatus();

    cout << endl;

    Truck truck(50, 100, 25, 50);

    truck.arrive();

    cout << endl;

    Base::showStatus();

    cout << endl;

    truck.SetLoad(100);

    cout << "Грузовик загружается\n";

    cout << endl;

    truck.leave();

    cout << endl;

    Base::showStatus();

    cout << endl;
    return 0;
}