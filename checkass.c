/*#include <stdio.h>
/*void clear1(int x[], int size)
{
    int i;
    for (i = 0; i < size; i = i + 1)
        x[i] = 0;
}

void clear2(int *x, int *y, int size1, int size2)
{
    int *p;
    int *q;
    int *r;
    int m = *x + *y;
    int ts = size1 + size2;
    for (p = x; p < (x + size1); p = p + 1)
        //OR for(p=&x[0]; p<&x[size]; p=p+1)
        *p;
    for (q = y; q < (y + size2); q++)
    {
        *q;
    }
    for (r = m; r < ts; r++)
    {
    }
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};
    int i;

    // clear1(a, 5);
    clear2(a, b, 5, 5);
    for (i = 0; i < 5; i = i + 1)
        printf("%d ", a[i]);
    return 0;
}*/

#include <stdio.h>

/* function to generate and return random numbers */
int *getRandom()
{

    static int r[10];
    int i;

    /* set the seed */
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }

    return r;
}

/* main function to call above defined function */
int main()
{

    /* a pointer to an int */
    int *p;
    int i;

    p = getRandom();

    for (i = 0; i < 10; i++)
    {
        printf("*(p + %d) : %d\n", i, *(p + i));
    }

    return 0;
}