#include <stdio.h>
char grade(char x)
{

    do
    {
        printf("\nEnter your grade (w,x,y,z): ");
        scanf(" %c", &x);
        printf("\nYour grade is: %c", x);

    } while (!(x == 'w' || x == 'x' || x == 'y' || x == 'z'));

    return x;
}
int age(int x)
{

    do
    {
        printf("\nEnter your age: ");
        scanf("%d", &x);
        printf("\nYour age is: %d", x);

    } while (!(x >= 18 && x <= 150));
    return x;
}
int experience(int x)
{
    do
    {
        printf("\nEnter your experience: ");
        scanf("%d", &x);
        printf("\nYour experience is: %d", x);

    } while (!(x < 30));
    return x;
}
int main()
{
    char ch = grade(ch);
    int ages = age(ages), experiences = experience(experiences);

    /*do
    {
        printf("Enter your grade (w,x,y,z): ");
        scanf("%c", &grade);
        printf("\nYour grade is: %c", grade);

    } while (grade == 'w' || grade == 'x' || grade == 'y' || grade == 'z');
    */
    /*do
    {
        printf("\nEnter your age: ");
        scanf("%d", &age);
        printf("\nYour age is: %d", age);

    } while (!(age >= 18 && age <= 150));*/
    /*do
    {
        printf("\nEnter your experience: ");
        scanf("%d", &experience);
        printf("\nYour experience is: %d", experience);

    } while (!(experience < 30));*/
}