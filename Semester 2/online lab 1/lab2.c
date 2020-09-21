#include <stdio.h>
int main()
{

    int i = 1;
    int count = 1;
    float pie, sum = 0;
    while (i <= 99)
    {

        if (count % 2 == 0)
        {
            sum = sum - 1 / (double)i;
        }
        if (count % 2 != 0)
        {
            sum = sum + 1 / (double)i;
        }
        i += 2;
        count++;
    }

    printf("\n%f", sum);

    pie = 4 * sum;
    printf("\nThe value of pi is: %f", pie);
}