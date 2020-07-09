#include <stdio.h>
#include <math.h>
float percentage(float x, float y)
{

    float percent, rounded;

    percent = x / y;
    rounded = ceil(percent * 100);
    printf("%.0f%%", rounded);
    printf(" %.5f", percent);
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
    int inputStatus;
    float obt_marks, tot_marks;
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
        percentage(obt_marks, tot_marks);

        do
        {
            scanf("%c", &uni_name);
            printf("%c", uni_name);

        } while (uni_name != ' ');

    } while (inputStatus != EOF);
}