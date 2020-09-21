#include <stdio.h>
void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int c = 10, b = 5;
    printf("\nBefore swapping c=%d and b=%d", c, b);
    swap(&c, &b);
    printf("\nAfter swapping c=%d and b=%d", c, b);
}