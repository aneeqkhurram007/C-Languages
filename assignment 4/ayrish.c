/*#include <stdio.h>

int checkwin(char square[])
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

int main()
{
    char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    int player = 1, i, choice;

    char mark;
    do

    {
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter your move number (1-9):  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
        }
        i = checkwin(square);

        player++;
    } while (i == -1);

    for (i = 1; i < 10; i++)
    {
        if (square[i] != 'X' && square[i] != 'O')
        {
            square[i] = ' ';
        }
    }

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    return 0;
}*/
#include <stdio.h>

int main()
{
    int arr1Size, arr2Size, i, z, j, k;

    printf("\nNumber of elements in 1st array: ");
    scanf("%d", &arr1Size);
    int arr1[arr1Size];
    printf("\nArray 1 elemnts: ");
    for (i = 0; i < arr1Size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nNumber of elements in 2nd array: ");
    scanf("%d", &arr2Size);
    int arr2[arr2Size];
    int merge[arr1Size + arr2Size];
    printf("\nArray 2 elements: ");
    for (i = 0; i < arr2Size; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("\nArray 1 elements: ");
    for (int i = 0; i < arr1Size; i++)
    {
        printf("%d\n", arr1[i]);
    }
    printf("\nArray 2 elements: ");
    for (int i = 0; i < arr2Size; i++)
    {
        printf("%d\n", arr2[i]);
    }

    for (i = 0; i < arr1Size; i++)
    {
        merge[i] = arr1[i];
    }

    for (z = arr1Size; z < arr2Size + arr1Size; z++)
    {

        merge[z] = arr2[z - arr1Size];
    }

    printf("\nArray 3 elements: ");
    for (i = 0; i < arr1Size + arr2Size; i++)
    {
        for (j = i + 1; j < arr1Size + arr2Size;)
        {
            if (merge[j] == merge[i])
            {
                for (k = j; k < arr1Size + arr2Size; k++)
                {
                    merge[k] = merge[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }

    for (i = 0; i < arr1Size + arr2Size; i++)
    {
        printf("%d\n", merge[i]);
    }
}
