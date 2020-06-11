#include <stdio.h>
#include <conio.h>
int main()
{

    int z, flag2 = 0, m;
    printf("\nEnter a number to size your array: ");
    scanf("%d", &m);
    int arr6[m];

    for (z = 0; z < m; z++)

    {

        printf("\nEnter a number: ");

        scanf("%d", &arr6[z]);
    }

    //Original Order
    printf("\nArray 1:");
    for (z = 0; z < m; z++)

    {

        printf(" %d", arr6[z]);
    }

    printf("\nPalindrome Check:");
    for (z = 0; z < m; z++)
    {
        if (arr6[m - 1 - z] == arr6[z])
        {
            flag2 = 1;
        }
        else
        {
            goto Palindrome;
        }
    }
    if (flag2 == 1)
    {
        printf("\nIt is a palindrome");
        goto Exit;
    }

Palindrome:

    printf("\nIt is not a palindrome");

Exit:
    return 0;
}