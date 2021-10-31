//Task 1
/*#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    printf("\nEnter a string: ");
    gets(ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(ch); j++)
        {
            if (ch[i] == ch[j])
            {
                count++;
            }
        }
        printf("\nIt occurs %d times: ", count);
    }
}*/

//Task 2
/*#include <stdio.h>
int main()
{
    char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U')
        {
            ++vowels;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            ++consonant;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++digit;
        }
        else if (line[i] == ' ')
        {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    return 0;
}*/
//Task 3
/*#include <stdio.h>

void reverse(char *str)
{
    if (*str)
    {
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main()
{
    char a[] = "Computer Sciences";
    reverse(a);
    return 0;
}*/
//Task 4
/*#include <stdio.h>
    int main()
{
    char line[150];

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0, j; line[i] != '\0'; ++i)
    {

        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0'))
        {
            for (j = i; line[j] != '\0'; ++j)
            {

                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(line);
    return 0;
}*/
/*#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i, j = 0, m = 0;
    char orgname[50], abrevname[10];
    printf("Enter The Organisation Name:");
    gets(orgname);
    for (i = 0; i < strlen(orgname); i++)
    {
        abrevname[m] = orgname[j];
        if (orgname[i] == ' ')
        {
            m = m + 1;
            j = i;
            abrevname[m] = orgname[j];
            j++;
        }
    }
    abrevname[m + 1] = '\0';
    printf("\nThe Abbrevation is \n");
    puts(abrevname);
}*/