#include<stdio.h>
#include<string.h>

int main()
{
    struct timeStruct
    {
        int hours;
        int minutes;
        int seconds;
        char period[2];
    };
    struct date
    {
        int day;
        int month;
        int year;
        struct timeStruct TimeStruct;
    }Date[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nPlease Enter Date (DD-MM-YYYY): ");
        fflush(stdin);
        scanf("%d %d %d", &Date[i].day, &Date[i].month, &Date[i].year);
        printf("\nPlease Enter Time (HH-MM-SS-PM/AM): ");
        fflush(stdin);
        scanf("%d %d %d %s", &Date[i].TimeStruct.hours, &Date[i].TimeStruct.minutes, &Date[i].TimeStruct.seconds, Date[i].TimeStruct.period);



    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nThe alarm clock %d : %d-%d-%d at %d:%d:%d %s", i+1, Date[i].day, Date[i].month, Date[i].year, Date[i].TimeStruct.hours, Date[i].TimeStruct.minutes, Date[i].TimeStruct.seconds, Date[i].TimeStruct.period);
        // printf("\nThe alarm clock %d : %d-%d-%d", i+1, Date[i].day, Date[i].month, Date[i].year);

    }



}