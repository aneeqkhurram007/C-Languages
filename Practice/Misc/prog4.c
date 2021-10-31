#include <stdio.h>
#include <conio.h>
int main()
{
    int array[5], i, search, mid, left = 0, right = 5, flag = 0, count = 0;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &array[i]);
    }
    printf("\nArray 1:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\nEnter a value to search: ");
    scanf("%d", &search);
    for (i = 0; i < 5; i++)
    {
        if (search == array[i])
        {
            count++;
        }
    }
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (array[mid] == search)
        {
            flag = 1;
        }
        if (search > array[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (flag == 1)
    {
        printf("The element %d is found %d time(s) in array.", search, count);
    }
    else
    {
        printf("The element %d is not found", search);
    }

    return 0;
}