#include <stdio.h>
#include <string.h>
typedef struct products
{
    int prodNum;
    char prodName[50];
    float retail;
    int quant;
    float amount;
} Products;
void display(Products p[])
{
    printf("\nPrepared by: Aneeq Khurram");
    printf("\nReg No: FA19-BCS-145");

    printf("\nProduct Number Product Name\tRetail Price in Rs.\tQuantity");

    for (int i = 0; i < 5; i++)
    {
        if (i == 1 || i == 2)
        {
            printf("\n%5d\t\t%s\t%.2f\t\t%d", p[i].prodNum, p[i].prodName, p[i].retail, p[i].quant);
        }
        else if (i == 0)
        {
            printf("\n%5d\t\t%s\t\t\t %.2f\t\t%d", p[i].prodNum, p[i].prodName, p[i].retail, p[i].quant);
        }
        else
        {
            printf("\n%5d\t\t%s\t\t%.2f\t\t%d", p[i].prodNum, p[i].prodName, p[i].retail, p[i].quant);
        }
    }
}
int main()
{

    Products prod[5] = {{101, "Soap", 60.00, 10},
                        {102, "Liquid Hand Wash", 200.00, 20},
                        {103, "Liquid Dish Wash", 150.00, 30},
                        {104, "Table Cleaner", 350.00, 40},
                        {105, "Hand Sanitizer", 100.00, 50}};
Restart:

    display(prod);
    int numOfProd, prodnum[5] = {0}, quantity[5] = {0}, temp[5] = {0};
    float totalBill = 0;
    int flag = 0;
    printf("\nEnter the number of products you want to purchase:");
    printf("\nNOTE: You can only purchase at most 5 products: ");

    do
    {
        fflush(stdin);
        scanf("%d", &numOfProd);
        if (numOfProd > 5)
        {
            printf("\nTry Again.");
            printf("\nNOTE: You can only purchase at most 5 products: ");
        }

    } while (numOfProd > 5);
    for (int i = 0; i < numOfProd; i++)
    {
        printf("\nEnter product number : ", i + 1);
        fflush(stdin);
        scanf("%d", &prodnum[i]);
        for (int j = 0; j < 5; j++)
        {
            if (prodnum[i] == prod[j].prodNum)
            {
                printf("\nEnter quantity : ");
                fflush(stdin);
                scanf("%d", &quantity[i]);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag != 0)
        {
            printf("\nYou entered wrong product number.\nTry Again.");
            i--;
        }
    }
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            if (prodnum[i] == prod[j].prodNum)
            {
                if (quantity[i] > prod[j].quant)
                {
                    printf("\nStock was isnufficient to complete order %d.\n", prodnum[i]);
                    temp[j] = prod[j].quant;
                    quantity[i] = prod[j].quant;
                    prod[j].amount = quantity[i] * prod[j].retail;
                    prod[j].quant = 0;
                    totalBill = totalBill + prod[j].amount;
                }
                else
                {
                    temp[j] = quantity[i];
                    prod[j].quant = prod[j].quant - quantity[i];
                    prod[j].amount = quantity[i] * prod[j].retail;
                    totalBill = totalBill + prod[j].amount;
                }
            }
        }
    }
    if (totalBill != 0)
    {
        printf("\nProduct Number Product Name\tRetail Price in Rs.\tQuantity\tAmount");
    }

    for (int i = 0; i < numOfProd; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (prodnum[i] == prod[j].prodNum && temp[j] != 0)
            {

                if (j == 1 || j == 2)
                {
                    printf("\n%5d\t\t%s\t%.2f\t\t%d\t\t%.2f", prod[j].prodNum, prod[j].prodName, prod[j].retail, temp[j], prod[j].amount);
                }
                else if (j == 0)
                {
                    printf("\n%5d\t\t%s\t\t\t %.2f\t\t%d\t\t%.2f", prod[j].prodNum, prod[j].prodName, prod[j].retail, temp[j], prod[j].amount);
                }
                else
                {
                    printf("\n%5d\t\t%s\t\t%.2f\t\t%d\t\t%.2f", prod[j].prodNum, prod[j].prodName, prod[j].retail, temp[j], prod[j].amount);
                }
            }
        }
    }
    if (totalBill != 0)
    {

        printf("\nTotal Bill = %.2f", totalBill);
    }
    else
    {
        printf("\nNo items were purchased. The bill was zero.");
    }

    char choice;
    printf("\nPress 'y' to continue shopping: ");
    scanf("\n%c", &choice);
    if (choice == 'y')
    {
        goto Restart;
    }
    else
    {
        printf("\nHave a nice day :)");
    }
}