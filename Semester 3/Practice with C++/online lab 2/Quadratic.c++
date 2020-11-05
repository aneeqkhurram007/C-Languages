#include <iostream>
#include <cmath>
using namespace std;

class Quadratic
{
private:
    float a, b, c, X1, X2, disc;

public:
    Quadratic(float a, float b, float c)
    {
        cout << "Constructor" << endl;
        this->a = a;
        this->b = b;
        this->c = c;
    }
    float discCalc()
    {
        disc = (b * b) - (4 * a * c);
        return disc;
    }
    void computeRoots()
    {
        if (discCalc() >= 0)
        {
            X1 = (-b - sqrt(discCalc())) / (2 * a);
            X2 = (-b + sqrt(discCalc())) / (2 * a);
        }
        else
        {
            disc = -disc;
            X1 = (-b - sqrt(disc)) / (2 * a);
            X2 = (-b + sqrt(disc)) / (2 * a);
        }
    }
    void display()
    {
        this->computeRoots();
        if (discCalc() >= 0)
        {
            cout << "X1 = " << this->X1 << " X2 = " << X2 << endl;
        }
        else
        {
            cout << "X1 = " << this->X1 << "i X2 = " << X2 << "i" << endl;
        }
    }
    ~Quadratic()
    {
        cout << "Destructor";
    }
};

/*Quadratic::Quadratic(/* args */ /*)
{
}

Quadratic::~Quadratic()
{
}*/
int main()
{
    float a, b, c;
    cout << "Enter value for A: ";
    cin >> a;
    cout << "Enter value for B: ";
    cin >> b;
    cout << "Enter value for C: ";
    cin >> c;
    cout << "A = " << a << " B = " << b << " C = " << c << endl;

    Quadratic qroots = Quadratic(a, b, c);
    qroots.display();
}
class Quadratic
{
private:
    float a, b, c, X1, X2, disc;

public:
    Quadratic(float a, float b, float c)
    {
        cout << "Constructor" << endl;
        this->a = a;
        this->b = b;
        this->c = c;
    }
    float discCalc()
    {
        disc = (b * b) - (4 * a * c);
        return disc;
    }
    void computeRoots()
    {
        if (discCalc() >= 0)
        {
            X1 = (-b - sqrt(discCalc())) / (2 * a);
            X2 = (-b + sqrt(discCalc())) / (2 * a);
        }
        else
        {
            disc = -disc;
            X1 = (-b - sqrt(disc)) / (2 * a);
            X2 = (-b + sqrt(disc)) / (2 * a);
        }
    }
    void display()
    {
        this->computeRoots();
        if (discCalc() >= 0)
        {
            cout << "X1 = " << this->X1 << " X2 = " << X2 << endl;
        }
        else
        {
            cout << "X1 = " << this->X1 << "i X2 = " << X2 << "i" << endl;
        }
    }
    ~Quadratic()
    {
        cout << "Destructor";
    }
};

/*Quadratic::Quadratic(/* args */ /*)
{
}

Quadratic::~Quadratic()
{
}*/
