#include <stdio.h>
int main()
{
    printf("\n\t__0__|__1__|__2__");
    printf("\n\t__3__|__4__|__5__");
    printf("\n\t  6  |  7  |  8  ");

    char player1 = 'O', player2 = 'X', array[9] = {0};
    int position, count1 = 0, count2 = 0, flag = 0;
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
                count1++;
                if (count1 >= 3)
                {
                    if (array[0] == array[1] && array[1] == array[2])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
                    else if (array[3] == array[4] && array[4] == array[5])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
                    else if (array[6] == array[7] && array[7] == array[8])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
                    else if (array[0] == array[3] && array[3] == array[6])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
                    else if (array[1] == array[4] && array[4] == array[7])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
                    else if (array[2] == array[5] && array[5] == array[8])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
                    else if (array[0] == array[4] && array[4] == array[8])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
                    else if (array[2] == array[4] && array[4] == array[6])
                    {
                        printf("\nPlayer O Wins");
                        break;
                    }
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
                count2++;
                if (count2 >= 3)
                {
                    if (array[0] == array[1] && array[1] == array[2])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                    else if (array[3] == array[4] && array[4] == array[5])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                    else if (array[6] == array[7] && array[7] == array[8])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                    else if (array[0] == array[3] && array[3] == array[6])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                    else if (array[1] == array[4] && array[4] == array[7])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                    else if (array[2] == array[5] && array[5] == array[8])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                    else if (array[0] == array[4] && array[4] == array[8])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                    else if (array[2] == array[4] && array[4] == array[6])
                    {
                        printf("\nPlayer X Wins");
                        break;
                    }
                }
            }
            else
            {
                printf("Already filled Try Again.");
                i--;
            }
        }
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