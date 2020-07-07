//TASK # 1
/*
#include <stdio.h>
#include <math.h>
int main()
{

    char name;
    float obt_marks, tot_marks, inputStatus;
    float percentage, rounded;
    do
    {

        do
        {
            scanf("%c", &name);
            printf("%c", name);
        } while (name != ' ');
        inputStatus = scanf("%d %d", &obt_marks, &tot_marks);
        if (inputStatus == EOF)
        {
            break;
        }

        percentage = obt_marks / tot_marks;
        rounded = ceil(percentage * 100);
        printf("%.0f%%", rounded);
        printf(" %.5f", percentage);
        if (percentage * 100 >= 90)
        {
            printf(" Excellent");
        }
        if (percentage * 100 >= 80 && percentage * 100 < 90)
        {
            printf(" Well Done");
        }
        if (percentage * 100 >= 70 && percentage * 100 < 80)
        {
            printf(" Good");
        }
        if (percentage * 100 >= 60 && percentage * 100 < 70)
        {
            printf(" Need Improvement ");
        }
        if (percentage * 100 >= 50 && percentage * 100 < 60)
        {
            printf(" Fail");
        }

        do
        {
            scanf("%c", &name);
            printf("%c", name);

        } while (name != ' ');

        } while (inputStatus != EOF);
}
*/
//TASK # 2
#include <stdio.h>
int validate(int x)
{

    while (x <= 0)
    {
        printf("\nAgain Enter your value: ");
        scanf("%d", &x);
    }
    return x;
}
void menu()
{
    printf("\nPress 1 for multiplying numbers.");
    printf("\nPress 2 for finding nCr.");
    printf("\nPress 3 for finding nPr.");
    printf("\nPress -1 for Exit");
}
int multiply(int x, int y)
{

    return x * y;
}
int factorial(int x)
{
    int i = 1, fact = 1;
    while (i <= x)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}
int comb(int x, int y)
{
    return factorial(x) / (factorial(y) * factorial(x - y));
}
int perm(int x, int y)
{
    return factorial(x) / factorial(x - y);
}
int main()
{
    int choice, mul;
    int n, r;
    printf("\nEnter value for n: ");
    scanf("%d", &n);
    n = validate(n);
    printf("\nEnter value for r: ");
    scanf("%d", &r);
    r = validate(r);
    menu();
    printf("\nEnter your choice: ");
    scanf(" %d", &choice);
    while (choice != -1)
    {
        switch (choice)
        {
        case 1:

            printf("\nMultiplication for both numbers is: %d", multiply(n, r));
            break;
        case 2:
            printf("\nCombination for both numbers is: %d", comb(n, r));

            break;
        case 3:
            printf("\nPermutation for both numbers is: %d", perm(n, r));

            break;

        default:
            printf("\nYou entered wrong choice. ");
            break;
        }
        printf("\nEnter your choice: ");
        scanf(" %d", &choice);
    }
}