//Program # 1
/*#include <stdio.h>
float percentage(float x, float y)
{

    float percent;

    percent = x / y;
    printf("%.0f %.5f", percent * 100, percent);
    if (percent * 100 >= 90)
    {
        printf(" Excellent");
    }
    if (percent * 100 >= 80 && percent * 100 < 90)
    {
        printf(" Well Done");
    }
    if (percent * 100 >= 70 && percent * 100 < 80)
    {
        printf(" Good");
    }
    if (percent * 100 >= 60 && percent * 100 < 70)
    {
        printf(" Need Improvement ");
    }
    if (percent * 100 >= 50 && percent * 100 < 60)
    {
        printf(" Fail");
    }
}
int main()
{

    char name, uni_name;
    int input_status = 1;
    float first_number, second_number;
    while (input_status != EOF)
    {
        scanf("%c", &name);
        printf("%c", name);
        while (name != ' ')
        {
            scanf("%c", &name);
            printf("%c", name);
        }
        input_status = scanf("%d %d", &first_number, &second_number);
        if (input_status == EOF)
        {
            break;
        }
        percentage(first_number, second_number);
        scanf("%c", &uni_name);
        printf("%c", uni_name);
        while (uni_name != ' ')
        {
            scanf("%c", &uni_name);
            printf("%c", uni_name);
        }
    }
}*/
//Program # 2
#include <stdio.h>

void choices()
{
    printf("\nPress 1 for multiplying numbers.");
    printf("\nPress 2 for finding nCr.");
    printf("\nPress 3 for finding nPr.");
    printf("\nPress -1 for Exit");
}
int multiplication(int x, int y)
{
    int mul = x * y;
    printf("\nMultiplication is: %d", mul);
}
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int x, int y)
{
    int comb = factorial(x) / (factorial(y) * factorial(x - y));
    printf("\nCombination is: %d", comb);
}
int permutation(int x, int y)
{
    int permu = factorial(x) / factorial(x - y);
    printf("\nPermutation is: %d", permu);
}
int main()
{
    int choice;
    int n, r;
    printf("\nEnter N: ");
    scanf("%d", &n);

    printf("\nEnter R: ");
    scanf("%d", &r);

    choices();
    printf("\nEnter your choice: ");
    scanf(" %d", &choice);
    while (choice != -1)
    {
        if (choice == 1)
        {

            multiplication(n, r);
        }
        else if (choice == 2)
        {
            combination(n, r);
        }

        else if (choice == 3)
        {
            permutation(n, r);
        }

        else
        {
            printf("\nWrong choice. ");
        }
        printf("\nEnter your choice again: ");
        scanf(" %d", &choice);
    }
}