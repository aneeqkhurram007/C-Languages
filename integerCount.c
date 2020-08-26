#include <stdio.h>
#include <stdlib.h>
int main()
{

    int num, count, temp;
Restart:
    count = 0;
    printf("\nEnter an integer to count digits: ");
    scanf("%d", &num);
    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        count++;
    }
    while (num != 0)
    {
        temp = num % 10;

        if (temp >= 0)
        {
            count++;
        }
        num = num / 10;
    }

    printf("\nTotal digits are : %d", count);
    char choice;
    printf("\nDo you want to continue (y/n): ");
    fflush(stdin);
    scanf("%c", &choice);
    if (choice == 'y')
    {
        goto Restart;
    }
}