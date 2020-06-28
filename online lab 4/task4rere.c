#include <stdio.h>
/*int smallestLargest(int x)
{
    int small, inputStatus, large;
    inputStatus = scanf("%d", &x);
    small = x;
    large = x;
    while (inputStatus != EOF)
    {

        if (small > x)

        {
            small = x;
        }
        if (large < x)

        {
            large = x;
        }
        inputStatus = scanf("%d", &x);
    }
    return printf("Smallest is %d and Largest is %d", small, large);
}*/

int largest(int large, int x)
{

    if (large < x)

    {
        large = x;
    }

    return large;
}
int secondLargest(int second, int x)
{
    int large = x;
    printf("\nA%d", x);

    large = largest(large, x);

    if (x != large)
    {

        if (second < x)
        {
            second = x;
            printf("\nASecond%d", second);
            return second;
        }
        else
            return 0;
    }
}
int smallest(int small, int x)
{

    if (small > x)

    {
        small = x;
    }

    return small;
}
/*int secondL(int secondLarge, int x)
{

    if (secondLarge < largest(secondLarge, x))
    {
    }
    return secondLarge;
}*/
float average(float x, float y)
{
    return printf("\nAverage is : %.1f", x / y);
}
int main()
{

    int x, small, large, inputStatus = 0, sum = 0, avg, count = 1, secondLarge;

    inputStatus = scanf("%d", &x);

    small = x;
    large = x;
    secondLarge = x;

    while (inputStatus != EOF)
    {
        sum = sum + x;

        large = largest(large, x);
        small = smallest(small, x);

        secondLarge = secondLargest(secondLarge, x);
        inputStatus = scanf("%d", &x);
        count++;
    }
    printf("\nSmallest is: %d", small);
    printf("\nLargest is: %d", large);
    average(sum, count);

    printf("\nSecond Largest is: %d", secondLarge);
}
/*
inputStatus = scanf("%d", &x);
second=x;


while(inputStatus!=EOF)
{
if(large<x)
{
    large=x;
}
else
{
if(second<x)
{
    second=x;
}
}


}









*/