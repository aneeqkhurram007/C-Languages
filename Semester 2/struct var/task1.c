#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct students
    {
        int roll;
        char name[50];
        int mark1;
        int mark2;
        int mark3;
    }STUDENTS;
    STUDENTS s[3];




    for (int i = 0; i <3; i++)
    {

        printf("\nEnter your roll number: ");
        fflush(stdin);
        scanf("%d", &s[i].roll);
        printf("\nEnter your name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("\nEnter your 1st marks: ");
        fflush(stdin);
        scanf("%d", &s[i].mark1);
        printf("\nEnter your 2nd marks: ");
        fflush(stdin);
        scanf("%d", &s[i].mark2);
        printf("\nEnter your 3rd marks: ");
        fflush(stdin);
        scanf("%d", &s[i].mark3);
        if (i!=2)
        {



            printf("\n------------Next Record------------");

        }


    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d %s %d %d %d", s[i].roll, s[i].name, s[i].mark1, s[i].mark2, s[i].mark3);

    }



}
