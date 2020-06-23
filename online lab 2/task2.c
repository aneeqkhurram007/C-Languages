#include <stdio.h>
int main()
{
    char grade;
    int age, experience;

    do
    {
        printf("Enter your grade (w,x,y,z): ");
        scanf("%c", &grade);
        printf("\nYour grade is: %c", grade);

    } while (grade == 'w' && grade == 'x' && grade == 'y' && grade == 'z');
    do
    {
        printf("\nEnter your age: ");
        scanf("%d", &age);
        printf("\nYour grade is: %d", age);

    } while (age >= 18 && age <= 150);
    do
    {
        printf("\nEnter your experience: ");
        scanf("%d", &experience);
        printf("\nYour grade is: %d", experience);

    } while (experience < 30);
}