#include <iostream>
using namespace std;
int main()
{

    int x;
    bool check;
    cout << "\tPrime Numbers " << endl;
    cout << "Enter the upper limit for Prime Numbers: ";
    cin >> x;
    cout << "Prime Numbers are : " << endl;
    for (int i = 2; i <= x; i++)
    {
        check = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = true;
                break;
            }
        }
        if (check == false)
        {
            cout << i << endl;
        }
    }
}