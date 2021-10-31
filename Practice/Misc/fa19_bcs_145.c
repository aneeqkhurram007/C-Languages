#include <stdio.h>
#include <conio.h>
int main()
{
    //Menu
    int menu;
    printf("\nPress 1 for Program 1 ");
    printf("\nPress 2 for Program 2 ");
    printf("\nPress 3 for Program 3 ");
    printf("\nPress 4 for Program 4 ");
    printf("\nPress 5 for Program 5 ");
    printf("\nPlease Enter your Choice: ");

    scanf("%d", &menu);

    /*--------------------------------Part 1-------------------------*/
    if (menu == 1)
    {
        printf("\nPart 1");
        int arr1[5] = {22, 5, 3, 7, 34}, y, arr2[5];

        //Original Order
        printf("\nArray 1:");
        for (y = 0; y < 5; y++)

        {

            printf(" %d", arr1[y]);
        }

        //Reverse Order
        printf("\nArray 2:");
        for (y = 4; y >= 0; y--)

        {

            arr2[y] = arr1[y];
            printf(" %d", arr1[y]);
        }
    }
    /*--------------------------------Part 2-------------------------*/
    if (menu == 2)
    {
        printf("\nPart 2");

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
    }

    /*--------------------------------Part 3-------------------------*/
    if (menu == 3)
    {
        printf("\nPart 3");

        int arr3[25], a, n, flag = 0, count = 0;

        for (a = 0; a < 25; a++)

        {

            printf("\nEnter a number to store: ");

            scanf("%d", &arr3[a]);
        }
        printf("\nThe array is: ");
        for (a = 0; a < 25; a++)
        {
            printf(" %d", arr3[a]);
        }

        printf("\nEnter the number for searching: ");

        scanf("%d", &n);

        for (a = 0; a < 25; a++)

        {

            if (n == arr3[a])

            {

                flag = 1;
                count++;
            }
        }

        if (flag == 1)

        {

            printf("\nThe element %d is found %d time(s) in the array", n, count);
        }

        else

        {

            printf("\nThe element %d is not found in the array", n);
        }
    }
    /*--------------------------------Part 4-------------------------*/
    if (menu == 4)
    {
        printf("\nPart 4");

        int array4[25], i, search, mid, left = 0, right = 25, flag1 = 0, count1 = 0;
        for (i = 0; i < 25; i++)
        {
            printf("\nEnter a number: ");
            scanf("%d", &array4[i]);
        }
        printf("\nArray 1:");
        for (i = 0; i < 25; i++)
        {
            printf(" %d", array4[i]);
        }
        printf("\nEnter a value to search: ");
        scanf("%d", &search);
        for (i = 0; i < 25; i++)
        {
            if (search == array4[i])
            {
                count1++;
            }
        }
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (array4[mid] == search)
            {
                flag1 = 1;
            }
            if (search > array4[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (flag1 == 1)
        {
            printf("The element %d is found %d time(s) in array.", search, count1);
        }
        else
        {
            printf("The element %d is not found", search);
        }
    }
    /*--------------------------------Part 5-------------------------*/
    if (menu == 5)
    {
        printf("\nPart 5");

        int arr5[15], x;

        for (x = 0; x < 15; x++)

        {

            printf("\nEnter a number: ");

            scanf("%d", &arr5[x]);
        }
        //Original Order
        printf("\nOriginal Array:");
        for (x = 0; x < 15; x++)

        {

            printf(" %d", arr5[x]);
        }

        //Reverse Order
        printf("\nReverse Array:");
        for (x = 14; x >= 0; x--)

        {

            printf(" %d", arr5[x]);
        }
    }
Exit:
    return 0;
}