#include <stdio.h>
int main()
{
    int n, t, i, j;
    /*do
    {
        printf("\nEnter N: ");
        scanf("%d", &n);
    } while (!(n >= 2));
    for (i = 1; i <= n; i++)
    {
        do
        {
            printf("\nEnter T: ");
            scanf("%d", &t);
        } while (!(t >= 2));
        for (j = 0; j <= 4; j++)
        {

            printf("%d*%d=%d\t", t, j, t * j);
        }
    }*/
    printf("\nEnter value for N: ");
    scanf("%d", &n);
    while (n < 2)
    {
        printf("\nEnter value for N: ");
        scanf("%d", &n);
    }

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter value for T: ");
        scanf("%d", &t);
        while (t < 2)
        {
            printf("\nEnter value for T: ");
            scanf("%d", &t);
        }
        for (j = 0; j <= 4; j++)
        {
            printf("%d*%d=%d\t", t, j, t * j);
        }
    }
}