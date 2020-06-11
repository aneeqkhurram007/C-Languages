#include <stdio.h>
#include <conio.h>
int main()
{

    // int num, first, sec, third, fourth, value;
    // printf("Enter any four-digit number : ");
    // scanf("%d", &num);
    //
    // //first digit
    // first = num / 1000;
    // value = num % 1000;
    //
    // //second
    // sec = value / 100;
    // value = value % 100;
    //
    // //third
    // third = value / 10;
    // value = value % 10;
    //
    // //fourth
    // fourth = value;
    //
    // printf("\nReverse of %d is : %d%d%d%d", num, fourth, third, sec, first);

    int num, rev = 0, remainder, num1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    num1 = num;
    while (num1 != 0)
    {
        remainder = num1 % 10;      //123/10=3,12/10=2
        rev = rev * 10 + remainder; //3,32
        num1 /= 10;                 //12,1
    }
    printf("The reverse of number : %d is %d", num, rev);
}