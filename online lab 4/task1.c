#include <stdio.h>
int main()
{
    int n1, n2;
    // int count = 1;

    /*  printf("\nEnter a number: ");
    scanf("%d", &n1);

    while (n1 > 0)
    {
        n2 = n1;

        printf("\nEnter a number: ");
        scanf("%d", &n1);

        if (n1 % n2 == 0)
        {
            printf("\nThey evenly divides each other");
            break;
        }
        printf("\nThey do not divides each other");
    }*/
    do
    {
        n2 = n1;

        /* if (count > 1)
        {
            printf("\nThey do not divide each other.");
        }*/
        printf("\nEnter number: ");
        scanf("%d", &n1);

    } while (n1 % n2 != 0);
    printf("\nThey divide each other.");
}