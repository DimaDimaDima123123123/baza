#include <iostream>
#include "Base.h"
using namespace std;

void Base::showStatus()
{
    cout << "Людей на базе: " << people_on_base <<endl;

    cout << "Транспорта на базе: " << vehicle_on_base << endl;

    cout << "Бензина на базе(л): " << petrol_on_base << endl;

    cout << "Груза на базе (т): " << goods_on_base << endl;

}