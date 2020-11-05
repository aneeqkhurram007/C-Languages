#include "account.h"
#include <iostream>
#include <string>

using namespace std;
account::account()
{
    cout << "Welcome";
    this->name = "Aneeq";
    this->balance = 60000;
}
account::account(string name, float balance)
{
    cout << "Your current balance is: " << balance;
    this->name = name;
    this->balance = balance;
}

void account::accountInfo()
{
    //cout << "Account title = " << this->name;
    cout << "Account balance = " << this->balance;
}
void account::display()
{
    int choice;
    do
    {
        cout << "\nPress 1 for chas deposit" << endl;
        cout << "Press 2 for chas withdraw" << endl;
        cout << "Press 3 for current balance" << endl;
        cout << "Press 4 for exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cashDepo();
            break;
        case 2:
            chasWith();
            break;
        case 3:
            accountInfo();
            break;
        case 4:
            break;

        default:
            cout << "you entered wrong value: ";
            break;
        }
    } while (choice != 4);
}

account::~account()
{
    cout << "Destructor";
}

void account::cashDepo()
{
    cout << "Enter amount to deposit: ";
    cin >> this->amount;
    balance += amount;
}

void account::chasWith()
{
    cout << "Enter amount to wihtdraw: ";
    cin >> amount;
    balance -= amount;
}