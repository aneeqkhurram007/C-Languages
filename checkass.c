#include <stdio.h>
/*void clear1(int x[], int size)
{
    int i;
    for (i = 0; i < size; i = i + 1)
        x[i] = 0;
}*/

void clear2(int *x, int size)
{
    int *p;
    for (p = x; p < (x + size); p = p + 1)
        //OR for(p=&x[0]; p<&x[size]; p=p+1)
        *p;
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;

    // clear1(a, 5);
    clear2(a, 5);
    for (i = 0; i < 5; i = i + 1)
        printf("%d ", a[i]);
    return 0;
}
