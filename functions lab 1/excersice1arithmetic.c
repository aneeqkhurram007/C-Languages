#include <stdio.h>
int add(int x, int y)
{

    return x + y;
}
int sub(int x, int y)
{

    return x - y;
}
int mul(int x, int y)
{

    return x * y;
}
float div(float x, float y)
{

    return x / y;
}
int mode(int x, int y)
{

    return x % y;
}
int main()
{
    int a, b;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    printf("\nAddition is: %d", add(a, b));
    printf("\nSubtraction is: %d", sub(a, b));
    printf("\nMultiplication is: %d", mul(a, b));
    printf("\nDivision is: %.2f", div(a, b));
    printf("\nMode is: %d", mode(a, b));
}