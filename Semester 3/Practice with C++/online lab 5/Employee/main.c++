#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
int main()
{
    employee emp1("Aneeq", 2000);
    employee emp2 = emp1;
    emp2.setName("Sheikh");
    emp2.setSalary(30000);
    emp1.display();
    emp2.display();
    emp1.compare(emp1, emp2);
}

/*#include <iostream>
using namespace std;

// declare a class
class Wall
{
private:
    double length;
    double height;

public:
    // parameterized constructor
    Wall(double len, double hgt)
    {
        // initialize private variables
        length = len;
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    Wall(Wall &obj)
    {
        // initialize private variables
        length = obj.length;
        height = obj.height;
    }
    double calculateArea()
    {
        return length * height;
    }
};

int main()
{

    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // print area of wall1
    cout << "Area of Room 1: " << wall1.calculateArea() << endl;

    // copy contents of room1 to another object room2
    Wall wall2 = wall1;

    // print area of wall2
    cout << "Area of Room 2: " << wall2.calculateArea() << endl;

    return 0;
}*/