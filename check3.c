#include <stdio.h>
#include <math.h>
int main()
{

    int i;

    double partial = 0;
    for (i = 0; i <= 99; i++)
        partial += pow(-1, i) / (2.0 * i + 1);
    double newPi = 4 * partial;
    printf("\nNew Piew is: %f", newPi);
}
