#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
#include <string>
using namespace std;
class books
{
private:
    int id;

public:
    books(/* args */);
    ~books();
    void setId(int id);
    int getId();
};
#endif