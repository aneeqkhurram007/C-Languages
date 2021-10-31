#include <stdio.h>
int main()
{
    int x, y, a, num, b;
    printf("Enter a number : ");
    scanf("%d", &num);
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
                b = b % 10;
            }

            printf("%d", b);

            b++;
        }

        b--;
        b--;

        for (int c = b; c >= x - b; c--)
        {

            if (c >= 10)
            {
                printf("%d", c % 10);
            }
            else
            {
                printf("%d", c);
            }
        }

        printf("\n");
    }
}