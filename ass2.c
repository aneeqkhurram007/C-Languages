#include <stdio.h>
int main()
{

    int x1, x2, y1, y2, a1, a2, num;
    printf("Enter the range of a number (4-18): ");
    scanf("%d", &num);
Reset:
    for (x1 = 1; x1 <= num / 2; x1++)
    {
        for (a1 = num / 2; a1 > x1; a1--)
        {
            printf(" ");
        }
        int b = x1;

        for (y1 = 1; y1 <= x1; y1++, b++)
        {

            printf("%d", b);
        }
        for (int c = x1; c >= x1; c++)
        {
            printf("%d", c);
        }

        printf("\n");
    }
}