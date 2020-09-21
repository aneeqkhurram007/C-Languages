#include <stdio.h>
int main()
{

    int sum = 0, score, input_status;
    printf("Scores\n");
    input_status = scanf("%d", &score);
    while (input_status != EOF)
    {
        printf("%d\n", score);
        sum += score;
        input_status = scanf("%d", &score);
    }
}