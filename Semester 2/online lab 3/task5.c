#include <stdio.h>
#include <math.h>
int factorial(int x)
{

    if (x <= 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
void menu()
{

    printf("\nPress 1 for multiplying numbers. ");

    printf("\nPress 2 for finding nCr. ");
    printf("\nPress 3 for finding nPr. ");
    printf("\nYour choice: ");
}
int validate(int x)
{
    do
    {
        printf("Enter a number: ");
        scanf("%d", &x);
    } while (x < 0);

    return x;
}
int mul(int x, int y)
{

    return x * y;
}
int comb(int x, int y)
{

    return factorial(x) / (factorial(y) * factorial(x - y));
}
int perm(int x, int y)
{
    return factorial(x) / factorial(x - y);
}
int main()
{

    int x, y;
    printf("\nValue for X\n");
    x = validate(x);
    printf("\nValue for Y\n");
    y = validate(y);

    char option;

    menu();
Again:
    scanf(" %c", &option);

    switch (option)
    {

    case '1':
        printf("\nMultiplication for the numbers is %d: ", mul(x, y));
        break;
    case '2':
        printf("\nCombination for the numbers is %d: ", comb(x, y));
        break;

    case '3':
        printf("\nPermiability for the numbers is %d: ", perm(x, y));
        break;

       default:
        printf("\nYou entered invalid choice: ");
        printf("\nTry Again: ");
        goto Again;
        break;
    }
}