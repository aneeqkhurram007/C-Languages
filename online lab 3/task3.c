#include <stdio.h>
int main()
{

    int n1, n2;
    printf("Enter integer 1 and 2: ");
    scanf("%d %d", &n1, &n2);
    while (!(n1 % n2 == 0))
    {
        printf("\nThey are not dividing each other.");
        printf("\nEnter integer 1 and 2: ");
        scanf("%d %d", &n1, &n2);
    }
    printf("\nThey are dividing each other");
}