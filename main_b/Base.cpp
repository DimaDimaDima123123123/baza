#include <iostream>
#include "Base.h"
using namespace std;

void Base::showStatus()
{
    cout << "����� �� ����: " << people_on_base <<endl;

    cout << "���������� �� ����: " << vehicle_on_base << endl;

    cout << "������� �� ����(�): " << petrol_on_base << endl;

    cout << "����� �� ���� (�): " << goods_on_base << endl;

}