#include <stdio.h>
int main()
{
    int num, count = 0, temp;
    printf("\nEnter an integer to count digits: ");
    scanf("%d", &num);
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
}