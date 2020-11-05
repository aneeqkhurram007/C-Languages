#include <iostream>
using namespace std;
int main()
{
    int x;
    char choice;
    cout << "\tPrint Tables" << endl;
    do
    {
        cout << "Enter a number: ";
        cin >> x;
        for (int i = 1; i < 11; i++)
        {
            cout << x << " X " << i << " = " << x * i << endl;
        }
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}