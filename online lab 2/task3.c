#include <stdio.h>
int main()
{
    int n, t, i, j;
N:
    printf("\nEnter N: ");
    scanf("%d", &n);
    if (n >= 2)
    {

        printf("\nGet ready to print N tables....");
        for (i = 0; i < n; i++)
        {
        T:
            printf("\nEnter T: ");
            scanf("%d", &t);
            if (t >= 2)
            {

                for (j = 0; j < 5; j++)
                {
                    printf("%d * %d = %d", t, j, t * j);
                    printf("\t");
                }
            }
            else
            {
                goto T;
            }

            printf("\n");
        }
    }
    else
    {
        goto N;
    }
    printf("\nTa ta.... see you soon!");
}