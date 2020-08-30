#include <stdio.h>
int main()
{
    int num, power;
    long long int sum;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nEnter a power: ");
    scanf("%d", &power);
    if (power == 0)
    {
        printf("\nThe answer is 1");
    }
    else
    {
        for (int i = 1; i <= power; i++)
        {
            if (i == 1)
            {
                sum = i * num;
            }
            else
            {
                sum = sum * num;
            }
        }
    }
    printf("\nThe answer is %lld", sum);
}