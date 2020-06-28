#include <stdio.h>
int largest(int x)
{
    int large = 0, inputStatus;
    do
    {
        inputStatus = scanf("%d", &x);
        if (large > x)
        {
            return large;
        }
        else
        {
            large = x;
            return large;
        }
    } while (inputStatus != EOF);
}
int smallest(int x)
{
}
int average()
{
}
int main()
{

    int x, inputStatus;

    printf("\nLargest %d", largest(x));
}