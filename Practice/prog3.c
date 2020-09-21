#include <stdio.h>
#include <conio.h>
int main()
{

    int arr6[25], a, n, flag = 0, count = 0;

    for (a = 0; a < 25; a++)

    {

        printf("\nEnter a number to store: ");

        scanf("%d", &arr6[a]);
    }
    printf("\nThe array is: ");
    for (a = 0; a < 25; a++)
    {
        printf(" %d", arr6[a]);
    }

    printf("\nEnter the number for searching: ");

    scanf("%d", &n);

    for (a = 0; a < 25; a++)

    {

        if (n == arr6[a])

        {

            flag = 1;
            count++;
        }
    }

    if (flag == 1)

    {

        printf("\nThe element %d is found %d time(s) in the array", n, count);
    }

    else

    {

        printf("\nThe element %d is not found in the array", n);
    }
}