#include <stdio.h>
#include <conio.h>
int main()
{

    int arr4[5] = {22, 5, 3, 7, 34}, y, arr5[5];

    //Original Order
    printf("\nArray 1:");
    for (y = 0; y < 5; y++)

    {

        printf(" %d", arr4[y]);
    }

    //Reverse Order
    printf("\nArray 2:");
    for (y = 4; y >= 0; y--)

    {

        arr5[y] = arr4[y];
        printf(" %d", arr5[y]);
    }
}