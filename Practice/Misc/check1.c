#include <stdio.h>
#include <conio.h>
int main()
{

    int y, flag = 0, n;
    printf("\nEnter a number to size your array: ");
    scanf("%d", &n);
    int arr4[n];

    for (y = 0; y < n; y++)

    {

        printf("\nEnter a number: ");

        scanf("%d", &arr4[y]);
    }

    //Original Order
    printf("\nArray 1:");
    for (y = 0; y < n; y++)

    {

        printf(" %d", arr4[y]);
    }

    printf("\nPalindrome Check:");
    for (y = 0; y < n; y++)
    {
        if (arr4[n - 1 - y] == arr4[y])
        {
            flag = 1;
        }
        else
        {
            goto Palindrome;
        }
        }
    if (flag == 1)
    {
        printf("\nIt is a palindrome");
    }
Palindrome:
    if (flag != 1)
    {
        printf("\nIt is not a palindrome");
    }

    return 0;
}