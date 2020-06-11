#include <stdio.h>
int main()
{

    int x, y, a, num;
    printf("Enter size of the pyramid (4-18) : ");
    scanf("%d", &num);
    //first half

    for (x = 1; x <= num / 2; x++)
    {
        for (a = num / 2; a > x; a--)
        {
            printf(" ");
        }

        int b = x;

        for (y = 1; y <= x; y++)
        {

            if (b > 9)
            {
                int b1 = b % 10;

                printf("%d", b1);
            }
            else
            {
                printf("%d", b);
            }
            b++;
        }
        for (int c = b - 2; c >= x; c--)
        {
            printf("%d", c);
        }

        printf("\n");
    }
    //2nd half
    for (x = num / 2; x >= 1; x--)
    {
        for (a = num / 2; a > x; a--)
        {
            printf(" ");
        }
        int b = x;
        for (y = x; y >= 1; y--)
        {
            if (b > 9)
            {
                int b1 = b % 10;

                printf("%d", b1);
            }
            else
            {
                printf("%d", b);
            }
            b++;
        }
        --b;

        for (int c = --b; c >= x; c--)
        {
            printf("%d", c);
        }

        printf("\n");
    }
}