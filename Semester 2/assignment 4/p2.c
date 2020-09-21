#include <stdio.h>
#include <stdio.h>
#include <conio.h>

void me(int a[10], int b[10], int c[20])
{

    int k, i = 0, j = 0, size1 = 4, size2 = 5;

    for (k = 0; k < 9; k++)
    {
        if (i >= size1 || j >= size2) // If every element of a1 is merged with a2 then break it
        {
            break;
        }
        //Merging two arrays in ascending order
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {

            c[k] = b[j];
            j++;
        }
    }
    //
    while (i < size1)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < size2)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    int size = size1 + size2;
    for (i = 0; i < size; i++)
    {

        for (j = i + 1; j < size; j++)
        {

            if (c[j] == c[i])
            {

                for (k = j; k < size; k++)
                {
                    c[k] = c[k + 1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
    int p;
    printf("\nArray merged in ascending order : \n");
    for (p = 0; p < size; p++)
    {

        printf("%d  ", c[p]);
    }
}

// Maximum size of the array

int main()
{
    int a[10] = {10, 15, 22, 80}, b[10] = {5, 8, 11, 15, 70, 90}, merge[20];
    int size1 = 4, size2 = 5;
    int ro, co;

    // Printing Array 2
    printf("Array 1: \n");

    for (ro = 0; ro < 4; ro++)
    {

        printf("%d  ", a[ro]);
    }
    printf("\n");
    // Printing Array 2
    printf("\nArray 2: \n");

    for (ro = 0; ro < 5; ro++)
    {

        printf("%d  ", b[ro]);
    }

    printf("\n");

    me(a, b, merge); // Calling function

    return 0;
}
