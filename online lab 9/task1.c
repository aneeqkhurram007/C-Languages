#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], r, s;
    //Matrix A
    printf("\nMatrix A:\n");
    for (r = 0; r < 3; r++)
    {
        for (s = 0; s < 3; s++)
        {
            printf(" a[%d][%d]: ", r, s);
            scanf("%d", &a[r][s]);
        }
        printf("\n");
    }
    //Matrix B
    printf("\nMatrix B:\n");
    for (r = 0; r < 3; r++)
    {
        for (s = 0; s < 3; s++)
        {
            printf(" b[%d][%d]: ", r, s);
            scanf("%d", &b[r][s]);
        }
        printf("\n");
    }
    //Matrix C
    printf("\nMatrix C:\n");
    for (r = 0; r < 3; r++)
    {
        for (s = 0; s < 3; s++)
        {
            c[r][s] = a[r][s] + b[r][s];
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (s = 0; s < 3; s++)
        {
            printf(" %d", c[r][s]);
        }
        printf("\n");
    }
}