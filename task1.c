#include <stdio.h>
int main()
{

    /*1*/ int array1[10];

    /*2*/ int array2[5] = {5, 4, 3, 4, 5};

    /*3*/ int array3[5] = {5, -5};

    /*4*/ float array4[3] = {3.7, -1.2, 2.0};

    /*5*/ int array5[100] = {0};

    /*6*/ printf("Part 2: 2nd = %d and 3rd = %d", array2[1], array2[2]);

    /*7*/ printf("Part 3: 1st Element = %d and last element = %d", array3[0], array3[4]);

    /*8*/ array5[0] = 0;
    array5[99] = 100;
    /*9*/ array5[0] = 0;
    array5[99] = 100;

    /*10*/ for (int i = 0; i < 3; i++)
    {
        array4[i] = -1.0;
    }

    return 0;
}