#include <stdio.h>

int main()
{
    int size1, size2;
    //Initialization and Declaration of 1st array
    printf("\nEnter size for 1st array: ");
    scanf("%d", &size1);
    int array1[size1];
    printf("\nArray 1: ");
    for (int i = 0; i < size1; i++)
    {
        printf("\nElement %d of array 1: ", i + 1);
        scanf("%d", &array1[i]);
    }
    //Initialization and Declaration of 2nd array
    printf("\nEnter size for 2nd array: ");
    scanf("%d", &size2);
    int array2[size2];
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++)
    {
        printf("\nElement %d of array 2: ", i + 1);
        scanf("%d", &array2[i]);
    }
    //Array 1 elements
    printf("\nArray 1 elements are: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", array1[i]);
    }
    //Array 2 elements
    printf("\nArray 2 elements are: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", array2[i]);
    }
    //Array 3
    int totSize = size1 + size2;
    int array3[totSize];
    //1st half of array3
    int i, z, count = 0, flag = 0, j, k;
    for (i = 0; i < size1; i++)
    {
        array3[i] = array1[i];
    }
    //2nd half of array3
    for (i, z = 0; z < size2; i++, z++)
    {

        array3[i] = array2[z];
    }
    //Merging
    printf("\nArray 3 elements are: ");
    for (i = 0; i < totSize; i++)
    {
        for (j = i + 1; j < totSize;)
        {
            if (array3[j] == array3[i])
            {
                for (k = j; k < totSize; k++)
                {
                    array3[k] = array3[k + 1];
                }
                totSize--;
            }
            else
            {
                j++;
            }
        }
    }
    //Bubble Sort
    int temp;
    for (i = 0; i < totSize; i++)
    {
        for (j = 0; j < totSize; j++)
        {
            if (array3[j] > array3[j + 1])
            {
                temp = array3[j];
                array3[j] = array3[j + 1];
                array3[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < totSize; i++)
    {
        printf("%d ", array3[i]);
    }
}