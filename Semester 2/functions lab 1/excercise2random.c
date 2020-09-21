
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int random(int x, int y)
{
    int random;
    srand(time(NULL));
    random = rand() % (y + 1) + x;
    return random;
}
int main()
{
    int i, starting, ending;
    for (i = 1; i < 7; i++)
    {
        printf("\nEnter Starting and Ending value for number %d: ", i);
        scanf("%d %d", &starting, &ending);
        printf("\nRandom number is %d: ", random(starting, ending));
    }

    return 0;
}