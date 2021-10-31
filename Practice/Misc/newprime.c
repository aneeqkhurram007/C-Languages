#include <stdio.h>
int main()
{

    int num, i, flag = 0;
prime:
    printf("\nEnter a number : ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number", num);
        flag = num % i;
        while (flag == 1)
        {
            printf("Enter a number : ");
            scanf("%d", &num);
        }
    }
}