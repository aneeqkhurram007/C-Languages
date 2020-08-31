#include <stdio.h>
int main()
{
    int num, power;
    long long int sum = 1;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nEnter a power: ");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {

        sum = sum * num;
    }

    printf("\nThe answer is %lld", sum);
}