#include <stdio.h>
#include <conio.h>
int main()
{
    //Variable Declaration:
    char gen, qual;
    int yos;
    printf("\t \" Salary Calculation \"\n");
    //Male and Female
    printf("'M' for Male and 'F' for Female\n");
    printf("Enter your gender (M/F): ");
    scanf("%c", &gen);
    //Qualification
    printf("\n'P' for Post-Graduate and 'G' for Graduate\n");
    printf("Enter your qualifications (P/G): ");
    scanf(" %c", &qual); // Add the space before %c
    //Years of Service
    printf("\nEnter your Years of Service: ");
    scanf("%d", &yos);
    //if statements

    if (gen == 'M') //For Male and outer If
    {
        if (qual == 'P') //Nested If and Qualification
        {
            if (yos >= 10) // Years of Service
            {
                printf("Your salary is 15000"); //Post-Graduate Service >= 10
            }
            else
            {
                printf("Your salary is 10000"); //otherwise
            }
        }
        else
        {
            if (yos >= 10) //For Graduate
            {
                printf("Your salary is 10000");
            }
            else
            {
                printf("Your salary is 7000");
            }
        }
    }
    else //For Females
    {
        if (qual == 'P') //Nested If and Qualification
        {
            if (yos >= 10) // Years of Service
            {
                printf("Your salary is 12000"); //Post-Graduate Service >= 10
            }
            else
            {
                printf("Your salary is 10000"); //otherwise
            }
        }
        else
        {
            if (yos >= 10) //For Graduate
            {
                printf("Your salary is 9000");
            }
            else
            {
                printf("Your salary is 6000");
            }
        }
    }
}