#include <stdio.h>
#include <conio.h>
int main()

{
    char gen, qual;
    int yos;
    printf("\t Salary Calcultaor with Switch \n");
    printf("'M' is for Male and 'F' is for Female");
    printf("Enter your gender (M/F): \n");
    scanf("%c", gen);

    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("This is vowel");
        break;

    default:
        printf("This is consonant");
        break;
    }
}