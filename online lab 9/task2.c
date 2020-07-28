#include <stdio.h>
int main()
{
    int a[3][3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the value for A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }
    printf("\nThe sum of the elements of 2-D array is: %d", sum);
}