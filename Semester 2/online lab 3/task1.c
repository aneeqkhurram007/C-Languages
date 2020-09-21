#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    int n, i = 1, terms = 5;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while (!(n > 1 && n < 21))
    {
        printf("\nEnter a number: ");
        scanf("%d", &n);
    }
    while (i <= terms)
    {
        printf("\n%d*%d=%d", n, i, n * i);
        if (i % 5 == 0)
        {
            printf("\nPress ESC to exit or any key to continue: ");
            //scanf(" %c", &ch);
            ch = getche();
            if (ch != 27)
            {
                terms = terms + 5;
            }
        }

        i++;
    }
}