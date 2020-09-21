#include <stdio.h>
int main()
{

    int num, i = 1, sum1 = 0, sum2 = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        sum1 = sum1 + i;
        i++;
    }
    printf("\nSum without formula : %d", sum1);
    sum2 = (num * (num + 1)) / 2;
    printf("\nSum with formula : %d", sum2);
    if (sum1 == sum2)
    {
        printf("\nBoth are same");
    }
    else
    {
        printf("\nBoth are different");
    }
}