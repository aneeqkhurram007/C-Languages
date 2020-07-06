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