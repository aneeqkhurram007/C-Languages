#include <stdio.h>
void avg(int array[])
{
    int average = 0, i;
    printf("\nMarks entered by the user: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    for (i = 0; i < 10; i++)
    {
        average = average + array[i];
    }
    printf("\nAverage is : %d", average / i);
}
int main()
{
    int marks[10], average = 0, i;
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] > 100)
        {
            i--;
            printf("\nYou enterd marks greater than 100. Try Again.");
        }
    }
    avg(marks);
    /*printf("\nMarks entered by the user: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", marks[i]);
    }

    for (i = 0; i < 10; i++)
    {
        average = average + marks[i];
    }

    printf("\nAverage for the marks is = %d", average / i);*/
}
