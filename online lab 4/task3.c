#include <stdio.h>
int prime(int x)
{
    int flag = 0, i;
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        return 1; //Not-Prime
    }
    else
    {
        return 0; //Prime
    }
}
int main()
{

    int x, y, i = 1, flag = 0;
    printf("\nEnter values for X and Y: ");
    scanf("%d %d", &x, &y);
    if (prime(x) == 0 && prime(y) == 0)
    {
        printf("\nGCD does not exist.");
    }
    else
    {
        while (i <= x && i <= y)
        {
            if (x % i == 0 && y % i == 0)
            {
                flag = i;
            }

            i++;
        }
        printf("GCD is: %d", flag);
    }
}
