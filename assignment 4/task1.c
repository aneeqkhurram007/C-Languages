#include <stdio.h>
int array[9] = {0};
int checkWin()
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
}
int main()
{
    printf("\n\t__0__|__1__|__2__");
    printf("\n\t__3__|__4__|__5__");
    printf("\n\t  6  |  7  |  8  ");

    char player1 = 'O', player2 = 'X';
    int position, flag1 = 0, flag2 = 0;
    int check[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
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
                flag1 = checkWin();
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
                flag2 = checkWin();
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
