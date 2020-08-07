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
    }TimeStruct;
    char choice;
    do
    {
        printf("\nEnter hours: ");
        fflush(stdin);
        scanf("%d", &TimeStruct.hours);
        printf("\nEnter minutes: ");
        fflush(stdin);
        scanf("%d", &TimeStruct.minutes);
        printf("\nEnter seconds: ");
        fflush(stdin);
        scanf("%d", &TimeStruct.seconds);
        printf("\nEnter period: ");
        fflush(stdin);
        gets(TimeStruct.period);
        printf("\nEnterd time is: ");
        printf("\n%d:%d:%d %s", TimeStruct.hours, TimeStruct.minutes, TimeStruct.seconds, TimeStruct.period);

        printf("\nDo you want to continue (Y/N): ");
        fflush(stdin);
        scanf("%c", &choice);
    } while (choice!='N' && choice!='n');


}