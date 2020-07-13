#include <stdio.h>
int main()
{

    int i = 10;
    char c = 'A';
    double f = 25.5;
    int *iptr = &i;
    char *cptr = &c;
    double *fptr = &f;
    *iptr = 15;
    //Value of i:
    printf("Adrs of i \t Val of iptr \t Adrs of iptr");
    printf("\tDeref *iptr \t Size iptr \t Size i\t Val of i\n");
    printf("%p\t%p\t%p\t%d\t%d\t%d\t%d\n", &i, iptr, &iptr, *iptr, sizeof(iptr), sizeof(i), i);
    //Value of c :
    printf("Adrs of c \t Val of cptr \t Adrs of cptr");
    printf("\tDeref *cptr \t Size cptr \t Size c\t Val of c\n");
    printf("%p\t%p\t%p\t%c\t%d\t%d\t%c\n", &c, cptr, &cptr, *cptr, sizeof(cptr), sizeof(i), c);
}