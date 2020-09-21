#include <stdio.h>
int main()
{
    int number, largest, s_largest, input_status;
    input_status = scanf("%d", &number);
    int i = 1;
    printf("The %d number in file is read: %d", i, number);
    largest = number;
    s_largest = number;
    while (input_status != EOF)
    {
        input_status = scanf("%d", &number);
        printf("\nThe %d number in file is read: %d", ++i, number);
        if (number > largest)
        {
            s_largest = largest;
            largest = number;
        }
        else if (number > s_largest && number != largest)
        {
            s_largest = number;
        }
    }
    printf("\nThe Largest Element in File: %d", largest);
    printf("\nThe Second Largest Element in File: %d", s_largest);
    return 0;
}