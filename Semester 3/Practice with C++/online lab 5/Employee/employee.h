#include <iostream>
#include <string>
#include <cstdarg>
#pragma once
using namespace std;
class employee
{
private:
    const double annualTax = 0.5;
    static double inflationRate;
    static int count;
    int id;
    string name;
    double salary;
    double netMonthlyIncome;

public:
    employee(string name, double salary)
    {

        cout << "Constructor Called" << endl;
        this->name = name;
        this->salary = salary;
        this->id = ++count;
    }
    employee(employee &employee) //(Constructors) objects as a parameter in c++
    {
        this->name = employee.name;
        this->salary = employee.salary;
        this->id = ++count;
    }
    ~employee()
    {
        }
    double getInflationrate()
    {
        return this->inflationRate;
    }
    double getNetMonthlyIncome()
    {
        return this->netMonthlyIncome;
    }
    void setNetMonthlyIncome(double netMonthlyIncome)
    {
        this->netMonthlyIncome = netMonthlyIncome;
    }
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    double getSalary()
    {
        return this->salary;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    double computeAnnualTax()
    {

        return this->salary * 12 * this->annualTax / 100;
    }
    double computeNetSalary()
    {
        this->netMonthlyIncome = salary - computeAnnualTax();
        return this->netMonthlyIncome;
    }
    static void compare(employee e1, employee e2)
    {
        if (e1.getSalary() > e2.getSalary())
        {
            cout << "Employee 1";
        }
        else
        {
            cout << "Employee 2";
        }
    }
    void display()
    {
        cout << "\n\tEmployee " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Annual Tax: " << computeAnnualTax() << endl;
        cout << "Net Salary: " << computeNetSalary() << endl;
    }
};

double employee::inflationRate = 0.3;
int employee::count = 0;
/*void employee::setAnnualTax()
{
    if (getInflationrate() > 0.5)
    {
        annualTax = 0.05;
    }
    else
    {
        annualTax = 0.10;
    }
}
*/