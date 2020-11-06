#pragma once
#include <iostream>
#include <string>
using namespace std;
class account
{
private:
    string name;
    float balance;

public:
    account(string name, float balance);
    void cashDepo();
    void cashWith();
    void accountinfo();
    void display();
    ~account();
};

account::account(string name, float balance)
{
    cout << "Current balance is: " << balance << endl;
    this->name = name;
    this->balance = balance;
}
void account::cashDepo()
{
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
}
void account::cashWith()
{
    float amount;
    cout << "Enter amount to withDraw: ";
    cin >> amount;
    balance -= amount;
}

void account::accountinfo()
{
    cout << "Account title: " << name;
    cout << "Account balance :" << balance;
}
void account::display()
{
    int choice;

    do
    {
        printf("\nPress 1 for Cash Deposit");
        printf("\nPress 2 for Cash WithDraw");
        printf("\nPress 3 for Current Balance");
        printf("\nPress 4 for Exit");
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cashDepo();
            break;
        case 2:
            cashWith();
            break;
        case 3:
            accountinfo();
            break;

        default:

            break;
        }
    } while (choice != 4);
}
account::~account()
{
    cout << "Destructor called" << endl;
}
