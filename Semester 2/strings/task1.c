#include<stdio.h>
#include<string.h>
void reverse(char *p)
{
    if (p[0]=='\0')
    {
        return;
    }
    else
    {
        reverse(&p[1]);
        printf("%c", p[0]);
    }



}
void reverseString(char *p)
{
    for (int i = strlen(p)-1; i >= 0; i--)
    {

    }

}
int main()
{
    char s1[50]="Pakistan Steel Mills", s2[15]="Khurram", abs[10];
    //strncpy(s1, s2, 6);
    //s2[6]='\0';
    //puts(s2);
    //STRCAT
    //strcat(s1, s2);
    //puts(s1);
    //STRCPY
    //strncpy(s1, s2, 6);
    //s1[6]='\0';
    //puts(s1);
    //STRCMP
    //if (strcmp(s1, s2)>0)
    //{
    //    printf("\nOk");
    //}
    //else
    //{
    //    printf("\nNot Ok");
    //}
    int i, c;
    for (i = 0, c=0; i < strlen(s1); i++)
    {
        if (i==0)
        {
            abs[c]=s1[0];
            c++;
        }
        else if (s1[i]==' ')
        {
            abs[c]=s1[i+1];
            c++;
        }

    }
    abs[c]='\0';
    puts(abs);



}