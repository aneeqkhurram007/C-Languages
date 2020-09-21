#include <stdio.h>
int main()
{

    int n1 = 1, n2 = 1, n3;
    printf("%d  %d  ", n1, n2);
    do
    {

        n3 = n1 + n2;
        if (n3 >= 30000)
        {
            break;
        }

        printf("%d  ", n3);
        n1 = n2;
        n2 = n3;
    } while (n3 < 30000);
}