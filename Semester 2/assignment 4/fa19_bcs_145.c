//Task 1
#include <stdio.h>

int checkWin(char array[])
{
    if (array[0] == array[1] && array[1] == array[2])
    {
        if (array[0] != 0 && array[1] != 0 && array[2] != 0)
        {

            return 1;
        }
    }
    else if (array[3] == array[4] && array[4] == array[5])
    {
        if (array[3] != 0 && array[4] != 0 && array[5] != 0)
        {

            return 1;
        }
    }
    else if (array[6] == array[7] && array[7] == array[8])
    {
        if (array[6] != 0 && array[7] != 0 && array[8] != 0)
        {

            return 1;
        }
    }
    else if (array[0] == array[3] && array[3] == array[6])
    {
        if (array[0] != 0 && array[3] != 0 && array[6] != 0)
        {

            return 1;
        }
    }
    else if (array[1] == array[4] && array[4] == array[7])
    {
        if (array[1] != 0 && array[4] != 0 && array[7] != 0)
        {

            return 1;
        }
    }
    else if (array[2] == array[5] && array[5] == array[8])
    {
        if (array[2] != 0 && array[5] != 0 && array[8] != 0)
        {

            return 1;
        }
    }

    else if (array[0] == array[4] && array[4] == array[8])
    {
        if (array[0] != 0 && array[4] != 0 && array[8] != 0)
        {

            return 1;
        }
    }
    else if (array[2] == array[4] && array[4] == array[6])
    {
        if (array[2] != 0 && array[4] != 0 && array[6] != 0)
        {

            return 1;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("\n\t__0__|__1__|__2__");
    printf("\n\t__3__|__4__|__5__");
    printf("\n\t  6  |  7  |  8  ");

    char player1 = 'O', player2 = 'X';
    char array[9] = {0};
    int position, flag1 = 0, flag2 = 0;

    printf("\n'O' marks for player 1: ");
    printf("\n'X' marks for player 2: ");

    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            printf("\nPlayer 1 turns: ");
            printf("\nPositiion you want to place your move: ");
            scanf("%d", &position);
            if (array[position] == 0)
            {

                array[position] = 'O';
                flag1 = checkWin(array);
                if (flag1 == 1)
                {
                    break;
                }
            }
            else
            {
                printf("Already filled Try Again.");
                i--;
            }
        }
        else
        {
            printf("\nPlayer 2 turns: ");
            printf("\nPosition you want to place your move: ");
            scanf("%d", &position);

            if (array[position] == 0)
            {

                array[position] = 'X';
                flag2 = checkWin(array);
                if (flag2 == 1)
                {
                    break;
                }
            }
            else
            {
                printf("Already filled Try Again.");
                i--;
            }
        }
    }
    if (flag1 == flag2)
    {
        printf("\nMatch Draw");
    }
    else if (flag2 == 0 && flag1 == 1)
    {
        printf("\nPlayer O wins");
    }
    else if (flag1 == 0 && flag2 == 1)
    {
        printf("\nPlayer X wins");
    }

    for (int i = 0; i < 9; i++)
    {
        if (array[i] == 0)
        {
            array[i] = ' ';
        }
    }

    for (int i = 0, r = 0; r < 3; i += 3, r++)
    {
        if (r == 2)
        {
            printf("\n\t  %c  |  %c  |  %c  ", array[i], array[i + 1], array[i + 2]);
        }
        else
        {
            printf("\n\t__%c__|__%c__|__%c__", array[i], array[i + 1], array[i + 2]);
        }
    }
}
//Task 2
/*#include <stdio.h>
void merge(int array1[], int array2[], int *size1, int *size2)
{

    int totSize = *size1 + *size2;
    int array3[totSize];
    int i, z, count = 0, flag = 0, j, k;
    for (i = 0; i < *size1; i++)
    {
        array3[i] = array1[i];
    }
    for (i, z = 0; z < *size2; i++, z++)
    {

        array3[i] = array2[z];
    }

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

int main()
{
    int size1, size2;
    printf("\nEnter size for 1st array: ");
    scanf("%d", &size1);
    int array1[size1];
    printf("\nArray 1: ");
    for (int i = 0; i < size1; i++)
    {
        printf("\nElement %d of array 1: ", i + 1);
        scanf("%d", &array1[i]);
    }
    printf("\nEnter size for 2nd array: ");
    scanf("%d", &size2);
    int array2[size2];
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++)
    {
        printf("\nElement %d of array 2: ", i + 1);
        scanf("%d", &array2[i]);
    }
    printf("\nArray 1 elements are: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\nArray 2 elements are: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", array2[i]);
    }
    merge(array1, array2, &size1, &size2);
}*/