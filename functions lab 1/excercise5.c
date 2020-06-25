#include <stdio.h>
int gcd(int x, int y)
{
    int gcd, i;
    for (i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int x, y;
    printf("Enter number 1 and number 2: ");
    scanf("%d %d", &x, &y);
    printf("\nGCD for both numbers is: %d", gcd(x, y));
}