#include <stdio.h>

int main()
{
    int landline, mobileNetwork, internationalCall, zone, totalBill;
    printf("\nEnter minutes of landline: ");
    scanf("%d", &landline);
    printf("\nEnter the minutes on mobile network: ");
    scanf(" %d", &mobileNetwork);
    printf("\nEnter the international call minutes: ");
    scanf(" %d", &internationalCall);
    printf("\nEnter the Zone: ");
    scanf(" %d", &zone);
    if (landline <= 500)
    {
        landline = 50;
    }
    else if (landline > 500)
    {
        landline = (500 * 50) + (landline - 500);
    }
    if (mobileNetwork <= 200)
    {
        mobileNetwork = mobileNetwork * 1.5;
    }
    else if (mobileNetwork > 200)
    {
        mobileNetwork = (200 * 1.5) + ((mobileNetwork - 200) * 2);
    }
    if (zone == 1 && internationalCall <= 100)
    {
        internationalCall = 10;
    }
    else if (zone == 1 && internationalCall > 100)
    {
        internationalCall = (100 * 10) + ((internationalCall - 100) * 15);
    }
    if (zone == 2 && internationalCall <= 100)
    {
        internationalCall = 20;
    }
    else if (zone == 2 && internationalCall > 100)
    {
        internationalCall = (100 * 20) + ((internationalCall - 100) * 29.5);
    }
    if (zone == 3 && internationalCall <= 100)
    {
        internationalCall = 25;
    }
    else if (zone == 3 && internationalCall > 100)
    {
        internationalCall = (100 * 25) + ((internationalCall - 100) * 35);
    }
    totalBill = internationalCall + mobileNetwork + landline;
    totalBill = totalBill + (totalBill * 0.2);
    printf("\nTotal Bill is = %d.", totalBill);

    return 0;
}
