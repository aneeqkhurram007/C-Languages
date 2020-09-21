#include <stdio.h>
int main()
{
    int i = 0, input_status, scores, sum;
    float avg = 0;
    printf("\nPlease enter Scores: ");
    input_status = scanf("%d", &scores);
    while (input_status != EOF && i < 21)
    {
        sum = sum + scores;
        printf("\nPlease enter Scores: ");
        input_status = scanf("%d", &scores);
        i++;
    }
    avg = sum / i;
    printf("Average is: %.2f", avg);
}