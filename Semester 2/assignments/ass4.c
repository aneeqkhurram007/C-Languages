#include <stdio.h>
int validate(int x)
{

    while (x <= 0)
    {
        printf("\nAgain Enter your value: ");
        scanf("%d", &x);
        }
    return x;
}
void menu()
{
    printf("\nPress 1 for multiplying numbers.");
    printf("\nPress 2 for finding nCr.");
    printf("\nPress 3 for finding nPr.");
    printf("\nPress -1 for Exit");
}
int multiply(int x, int y)
{

    return x * y;
}
int factorial(int x)
{
    int i = 1, fact = 1;
    while (i <= x)
    {
        fact = fact * i;
        i++;
    }
    return fact;
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
    int choice, mul;
    int n, r;
    printf("\nEnter value for n: ");
    scanf("%d", &n);
    n = validate(n);
    printf("\nEnter value for r: ");
    scanf("%d", &r);
    r = validate(r);
    menu();
    printf("\nEnter your choice: ");
    scanf(" %d", &choice);
    while (choice != -1)
    {
        switch (choice)
        {
        case 1:

            printf("\nMultiplication for both numbers is: %d", multiply(n, r));
            break;
        case 2:
            printf("\nCombination for both numbers is: %d", comb(n, r));

            break;
        case 3:
            printf("\nPermutation for both numbers is: %d", perm(n, r));

            break;

        default:
            printf("\nYou entered wrong choice. ");
            break;
        }
        printf("\nEnter your choice: ");
        scanf(" %d", &choice);
    }
}