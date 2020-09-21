#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    int inputStatus;
    float score, totalPoints, percentage;

    do
    {
        do
        {
            scanf("%c", &ch);
            printf("%c", ch);
        } while (!(ch == ' '));
        // printf("\nEnter obt marks and total marks: ");
        inputStatus = scanf("%f %f", &score, &totalPoints);
        if (inputStatus < 1)
            break;
        percentage = score / totalPoints;
        printf("%.0f%%", percentage * 100);
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
            printf(" Need Improvement");
        }
        if (percentage * 100 >= 50 && percentage * 100 < 60)
        {
            printf(" Fail");
        }
    } while (inputStatus != EOF);
}