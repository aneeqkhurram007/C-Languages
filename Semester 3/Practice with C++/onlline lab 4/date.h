#include <iostream>
#pragma once
using namespace std;
#include <string>
class date
{
private:
    int month, year, day;

public:
    date()
    {
        cout << "\nNo Arg Constructor called";
        this->day = 01;
        this->month = 01;
        this->year = 2001;
    }
    date(int day, int month, int year)
    {
        setMonth(month);
        setDay(day);
        setYear(year);
    }
    ~date()
    {
        cout << "Destructor Called";
    }
    void setDay(int day)
    {
        this->day = day;
    }
    int getDay()
    {
        return this->day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    int getMonth()
    {
        return this->month;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
        return this->year;
    }
    void printInfo()
    {
        cout << "Date dd/mm/yy: " << day << "/" << month << "/" << year;
    }
};
