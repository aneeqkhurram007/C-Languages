#include <stdio.h>
int main()
{
    /*int x = 10;
    printf("var x =%d", x);
    printf("\nAdress of x=%d", &x);

    int *xpt = &x;
    printf("\n value of pointer xptr = %d", xpt);

    *xpt = 5;
    printf("\nnew value of x= %d", x);
    printf("\nAdress of new x = %d", xpt);
    printf("\nAdress of xpt = %d", &xpt);*/
    //Arrays with pointers/
    /* int a[5];
    printf("\n Values of array a: ");
    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
        printf("\n a[i]=%d", a[i]);
    }
    printf("\n Address of array a: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n Adress for a[%d]=%d", i, &a[i]);
    }
    printf("\nValue of pointers: ");
    int *apt = a;

    for (int i = 0; i < 5; i++)
    {

        printf("\nValue of pointers for apt[%d]=a[i]=%d", i, i, apt[i]);
    }
    printf("\nAddress of pointers: ");
    for (int i = 0; i < 5; i++)
    {

        printf("\nAddress of pointers for apt[%d]=%d", i, &apt[i]);
    }
    printf("\nLets derefernce this shit.");
    for (int i = 0; i < 5; i++)
    {
        apt[i] = i + 2;
        printf("\nderefernce value of apt[%d]=%d", i, apt[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nNew values for a[%d]=%d", i, a[i]);
    }
*/
    //Static Values:
    /*
    int b = 10;
    printf("\nValue for b=%d", b);
    printf("\nAddress for b = %d", &b);
    int *bpt = &b;
    printf("\nAddress of static var = value of pointers.");
    printf("\nAddress of pointers are not equals to Address of static variable ");
    printf("\nValue for pointer bpt= %d", bpt);
    printf("\nAddress of pointer bpt=%d", &bpt);
    printf("\nPointer Dereferencing: ");
    *bpt = 5;
    printf("\nAfter dereferncing only values changes not the fucking address.");
    printf("\nNew value of b = %d", b);
    printf("\nAddress for b = %d", &b);

    printf("\nValue for pointer bpt= %d", bpt);
    printf("\nAddress of pointer bpt=%d", &bpt);
    printf("\nDerefernce value of pointer *bpt=%d", *bpt);
*/
    int a[5] = {1, 2, 4, 5, 8};
    for (int i = 0; i < 5; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
    int *apt = a;
    for (int i = 0; i < 5; i++)
    {
        printf("\n apt[%d]=%d", i, apt[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nCurrent Address (a+%d)=%d", i, (a + i));
        printf("\nSource Address a=%d", a);
        printf("\nValue at current address *(a+%d)=%d", i, *(a + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n*apt = %d", *apt);
        printf("\napt=%d", apt);
        apt++;
    }
}