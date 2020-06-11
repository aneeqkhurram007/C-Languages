#include <stdio.h>
#include <conio.h>
int main()

{
    int x, y, z;
    for (x = 1; x <= 5; x++)
    {

        for (z = 1; z <= x; z++)
        {
            printf("%d", z);
        }
        printf("\n");
    }

    return 0;
}
