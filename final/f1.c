#include<stdio.h>
#include<string.h>
typedef struct products
{
    int prodNum;
    char prodName[50];
    float retail;
    int quant;
    float amount;
}Products;
void display(Products p[])
{
    printf("\nPrepared by: Aneeq Khurram");
    printf("\nReg No: FA19-BCS-145");

    printf("\nProduct Number Product Name\tRetail Price in Rs.\tQuantity");




    for (int i = 0; i < 5; i++)
    {
        if (i==1||i==2)
        {
            printf("\n%5d\t\t%s\t%.2f\t\t%d", p[i].prodNum, p[i].prodName, p[i].retail, p[i].quant);
        }
        else if (i==0)
        {
            printf("\n%5d\t\t%s\t\t\t%.2f\t\t%d", p[i].prodNum, p[i].prodName, p[i].retail, p[i].quant);
        }
        else
        {
            printf("\n%5d\t\t%s\t\t%.2f\t\t%d", p[i].prodNum, p[i].prodName, p[i].retail, p[i].quant);

        }


    }

}
int main()
{
    int numOfProd, prodnum[5], quantity[5];
    Products prod[5]={ { 101, "Soap", 60.00, 10 }, { 102, "Liquid Hand Wash", 200.00, 20 },
        { 103, "Liquid Dish Wash", 150.00, 30 }, { 104, "Table Cleaner", 350.00, 40 },
        { 105, "Hand Sanitizer", 100.00, 50 } };
    display(prod);
    printf("\nEnter the number of products you want to purchase:");
    printf("\nNOTE: You can only purchase at most 5 products: ");

    do {
        fflush(stdin);
        scanf("%d", &numOfProd);
        if (numOfProd>5)
        {
            printf("\nTry Again.");
            printf("\nNOTE: You can only purchase at most 5 products: ");

        }

    } while (numOfProd>5);
    for (int i = 0; i < numOfProd; i++)
    {
        printf("\nEnter product number : ", i+1);
        fflush(stdin);
        scanf("%d", &prodnum[i]);
        printf("\nEnter quantity : ");
        fflush(stdin);
        scanf("%d", &quantity[i]);

    }
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {



            if (prodnum[i]==prod[j].prodNum)
            {
                if (quantity[i]>prod[j].quant)
                {
                    printf("\nStock was isnufficient to complete order %d.", prodnum[i]);

                }

            }

        }
    }





}