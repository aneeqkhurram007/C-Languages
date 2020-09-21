#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[25]="aneeq";
    char *cha=ch;
    /* char *pt;
     //pt=strtok(ch, " ");
     int i=0;
     printf("%c", ch[0]);
     while (ch!='\0')
     {

         if (ch[i]==' ')
         {
             printf("%c", ch[i+1]);
         }
         i++;
     }*/

    if (isalpha(cha))
    {
        cha=toupper(cha);
    }
    puts(cha);

}