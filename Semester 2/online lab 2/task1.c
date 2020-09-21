#include <stdio.h>
int main()
{
    //Part A
    int i, j, a;
    printf("\nPart A\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //Part B
    printf("\nPart B\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    //Part C
    printf("\nPart C\n");
    for (i = 1; i <= 10; i++)
    {
        for (a = 1; a <= i; a++)
        {
            printf(" ");
        }

        for (j = 10; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    //Part D
    printf("\nPart D\n");
    for (i = 1; i <= 10; i++)
    {
        for (a = 10; a >= i; a--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}