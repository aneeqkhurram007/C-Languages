/*#include "stdio.h"

int winnerCheck(char a[]);

int main()
{

    char array[9] = {'O', ' ', 'X', ' ', 'X', 'O', 'X', 'O', ' '};

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", array[0], array[1], array[2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", array[3], array[4], array[5]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", array[6], array[7], array[8]);

    printf("     |     |     \n\n");

    if (winnerCheck(array) == 1)
    {
        printf(" Winner is 'O'");
    }
    else if (winnerCheck(array) == 0)
    {
        printf(" Match Draw");
    }
    else
    {
        printf(" Winner is 'X'");
    }

    return 0;
}
int winnerCheck(char a[9])
{

    if (a[0] == 'O' && a[1] == 'O' && a[2] == 'O')
        return 1;
    else if (a[3] == 'O' && a[4] == 'O' && a[5] == 'O')
        return 1;
    else if (a[6] == 'O' && a[7] == 'O' && a[8] == 'O')
        return 1;
    else if (a[0] == 'X' && a[1] == 'X' && a[2] == 'X')
        return -1;
    else if (a[3] == 'X' && a[4] == 'X' && a[5] == 'X')
        return -1;
    else if (a[6] == 'X' && a[7] == 'X' && a[8] == 'X')
        return -1;

    else if (a[0] == 'O' && a[3] == 'O' && a[6] == 'O')
        return 1;
    else if (a[1] == 'O' && a[4] == 'O' && a[7] == 'O')
        return 1;
    else if (a[2] == 'O' && a[5] == 'O' && a[8] == 'O')
        return 1;
    else if (a[0] == 'X' && a[3] == 'X' && a[6] == 'X')
        return -1;
    else if (a[1] == 'X' && a[4] == 'X' && a[7] == 'X')
        return -1;
    else if (a[2] == 'X' && a[5] == 'X' && a[8] == 'X')
        return -1;

    else if (a[0] == 'O' && a[4] == 'O' && a[8] == 'O')
        return 1;
    else if (a[2] == 'O' && a[4] == 'O' && a[6] == 'O')
        return 1;
    else if (a[0] == 'X' && a[4] == 'X' && a[8] == 'X')
        return -1;
    else if (a[2] == 'X' && a[4] == 'X' && a[6] == 'X')
        return -1;

    else
        return 0;
}*/
#include <stdio.h>
void merging(int merge[], int size)
{
    int i, j, k;
    printf("\nArray 3(Merged Array):\n");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size;)
        {
            if (merge[j] == merge[i])
            {
                for (k = j; k < size; k++)
                {
                    merge[k] = merge[k + 1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d\n", merge[i]);
    }
}
int main()
{
    int size1, size2, i, z, j, k;

    printf("\nEnter number of elements in 1st array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("\nArray 1:\n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter number of elements in 2nd array: ");
    scanf("%d", &size2);
    int arr2[size2];
    int size = size1 + size2;
    int merge[size];
    printf("\nArray 2:\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < size1; i++)
    {
        merge[i] = arr1[i];
    }

    for (z = size1; z < size; z++)
    {

        merge[z] = arr2[z - size1];
    }
    merging(merge, size);

    return 0;
}