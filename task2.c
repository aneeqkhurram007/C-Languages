#include <stdio.h>
#include <conio.h>
int main()
{

    /*Part*/ int array1[20], x;

    for (x = 0; x < 20; x++)

    {

        printf("Enter a number: ");

        scanf("%d", &array1[x]);

        printf("%d", array1[x]);
    }

    /*Part 2*/

    int array2[10], x1, array3[10];

    for (x1 = 0; x1 < 10; x1++)

    {

        printf("Enter a number:");

        scanf("%d", &array2[x1]);

        array3[x1] = array2[x1];

        printf("%d", array3[x1]);
    }

    /*Part 3*/

    int array4[10], x2, array5[10];

    for (x2 = 0; x2 < 10; x2++)

    {

        printf("Enter a number : ");

        scanf("%d", &array4[x2]);
    }

    for (x2 = 9; x2 >= 0; x2--)

    {

        array5[x2] = array4[x2];
    }

    /*Part 4*/ int array6[10], x3, n, flag = 0;

    for (x3 = 0; x3 < 10; x3++)

    {

        printf("Enter a number ");

        scanf("%d", &array6[x3]);
    }

    printf("Enter a number: ");

    scanf("%d", &n);

    for (x3 = 0; x3 < 10; x3++)

    {

        if (n == array6[x3])

        {

            flag = 1;
        }
    }

    if (flag == 1)

    {

        printf("Yes");
    }

    else

    {

        printf("No");
    }

    /*Part 5*/ int array7[10], x4, min;
    for (x4 = 0; x4 < 10; x4++)
    {
        printf("Enter a number: ");
        scanf("%d", &array7[x4]);
        printf("%d", array7[x4]);
    }
    min = array7[0];
    printf("%d", min);
    for (x4 = 1; x4 <= 10; x4++)
    {
        if (min > array7[x4])
        {
            min = array7[x4];
        }
    }
    printf("\n%d", min);
}