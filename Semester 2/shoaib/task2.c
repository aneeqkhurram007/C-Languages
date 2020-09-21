#include <stdio.h>
#include <string.h>

typedef struct library
{
    char acc_num[15];
    char auth_name[25];
    char categ[25];
    char book_tit[30];
    char flag[10];

} Library;
void display(Library menu[], int size)
{
    int i;
    printf("\nAccession No.\tAuthor Name\tCategory\tBook Title");

    for (i = 0; i <= size; i++)
    {
        printf("\n%s\t\t%s\t%s\t%s", menu[i].acc_num, menu[i].auth_name, menu[i].categ, menu[i].book_tit);
    }
}
void Menu()
{
    printf("\nPress 1 for Book Details.");
    printf("\nPress 2 for Add New Book.");
    printf("\nPress 3 for Find A Book.");
    printf("\nPress 4 for Issue A Book");
}
int main()
{

    int numberOfbooks = 5, addBooks = 0, i;
    Library menu[100] = {{"CSC11", "Dr.Fahad", "Computer", "Java Programming", "Yes"},
                         {"ECP15", "Dr. Zubair", "Physics", "Nuclear Physics", "No"},
                         {"ECC23", "Dr. Waseem", "Chemistry", "Organic Chemistry", "Yes"},
                         {"MAT45", "Dr. Qadeer", "Mathematics", "Linear Algebra", "Yes"},
                         {"ENG12", "Chad Hayes", "English", "The Conjuring", "Yes"}};

    display(menu, numberOfbooks);
    Menu();
    int choice;
    printf("\nYour Choice: ");
    fflush(stdin);
    scanf("\n%d", &choice);
    if (choice == 1)
    {
        display(menu, numberOfbooks);
    }
    else if (choice == 2)
    {
        printf("\nHow many book you want to enter: ");
        fflush(stdin);
        scanf("%d", &addBooks);
        numberOfbooks = numberOfbooks + addBooks;
        printf("\nAdd Book Details");
        for (i = addBooks - 1; i >= 0; i--)
        {
            printf("\n------Enter %d Book Details------", i + 1);
            printf("\nEnter Accesion Number: ");
            fflush(stdin);

            gets(menu[numberOfbooks - i].acc_num);
            printf("\nEnter Author Name: ");
            fflush(stdin);

            gets(menu[numberOfbooks - i].auth_name);
            printf("\nEnter Category: ");
            fflush(stdin);

            gets(menu[numberOfbooks - i].categ);
            printf("\nEnter Book Title: ");
            fflush(stdin);

            gets(menu[numberOfbooks - i].book_tit);
        }
        display(menu, numberOfbooks);
    }
    else if (choice == 3)
    {
        char search[30];
        int flagS = 0;
        printf("\nEnter Accession Number to find a book.");
        fflush(stdin);
        gets(search);
        for (i = 0; i < numberOfbooks; i++)
        {
            if (strcmp(search, menu[i].acc_num) == 0)
            {
                printf("\n%s\t\t%s\t%s\t%s", menu[i].acc_num, menu[i].auth_name, menu[i].categ, menu[i].book_tit);
                flagS = 1;
            }
        }
        if (flagS == 0)
        {
            printf("\nIncorrect Accession Number");
        }
    }
    else if (choice == 4)
    {
        char bt[50];
        int flagS = 0;
        printf("\nEnter Title of the book to issue");
        fflush(stdin);
        gets(bt);
        for (i = 0; i < numberOfbooks; i++)
        {
            if (strcmp(bt, menu[i].acc_num) == 0)
            {
                printf("\n%s\t\t%s\t%s\t%s", menu[i].acc_num, menu[i].auth_name, menu[i].categ, menu[i].book_tit);
                flagS = 1;
            }
        }
        if (flagS == 0)
        {
            printf("\nYou entered wrong title");
        }
    }
    else
    {
        return 0;
    }
}