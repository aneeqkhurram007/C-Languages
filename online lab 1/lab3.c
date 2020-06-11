#include <stdio.h>
int main()
{

    int num1, num2, sum = 0, i;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("\nEnter second integer: ");
    scanf("%d", &num2);
    i = num1;
    while (i <= num2)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }

        i++;
    }
    printf("\nThe sum is: %d ", sum);
}