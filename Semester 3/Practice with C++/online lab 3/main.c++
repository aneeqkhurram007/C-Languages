#include "account.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    float balance;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your balance: ";
    cin >> balance;
    account acc1 = account();
    acc1.display();
}