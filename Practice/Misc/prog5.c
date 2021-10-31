#include <stdio.h>
#include <conio.h>
int main()
{
    int arr5[15], x;

    for (x = 0; x < 15; x++)

    {

        printf("\nEnter a number: ");

        scanf("%d", &arr5[x]);
    }
    //Original Order
    printf("\nOriginal Array:");
    for (x = 0; x < 15; x++)

    {

        printf(" %d", arr5[x]);
    }

    //Reverse Order
    printf("\nReverse Array:");
    for (x = 14; x >= 0; x--)

    {

        printf(" %d", arr5[x]);
    }
}