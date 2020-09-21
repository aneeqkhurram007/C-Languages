#include <stdio.h>
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}
int main()
{

    int x, y;
    printf("\nEnter a number x: ");
    scanf("%d", &x);
    printf("\nEnter a number y: ");
    scanf("%d", &y);
    printf("GCD is %d", gcd(x, y));
}