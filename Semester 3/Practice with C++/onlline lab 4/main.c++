#include "date.h"
#include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    cout << "Enter Date: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    date date1 = date();
    date date2 = date(day, month, year);
    date1.printInfo();
    date2 = date1;
    date2.printInfo();
    date2.setMonth(3);
    date1.printInfo();
    date2.printInfo();
}