//Task 1
/*#include <stdio.h>
int strlen(const char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}
int main()
{
    const char s[100];
    printf("\nEnter a string: ");

    scanf("%[^\n]", s);
    printf("\n%d", strlen(s));
}*/
//Task2
/*#include <stdio.h>
char *strcpy(char *s1, const char *s2)
{
    int i;
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
}
int main()
{
    char s1[100], s2[100];
    printf("\nEnter a string 2: ");

    scanf("%[^\n]", s2);
    strcpy(s1, s2);
    printf("\nString 1: %s", s1);
}*/
/*#include <stdio.h>
void *strcat(char *s1, const char *s2)
{
    printf("\nConcatenated String is : %s %s", s1, s2);
}
int main()
{
    char s1[100], s2[100];
    printf("\nEnter a string 1: ");
    scanf("%[^\n]", s1);
    printf("\nEnter a string 2: ");

    scanf(" %[^\n]", s2);
    strcat(s1, s2);
}*/
