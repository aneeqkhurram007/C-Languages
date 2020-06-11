#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

    //Running Pay:
    char scale;
    int expy, age, perinc, value, ai, income;
    float bsalary, runpay, hra, ssb, ara, gp, gpf, deduc, mincome, ratio, totdec, netp;
    printf("\n\t\t\t\"Pay-slip Generation\"\n");

    printf("\nEnter your scale: ");
    scanf("%c", &scale);

    printf("\nEnter your age: ");
    scanf(" %d", &age);
    printf("\nExperience in Years: ");
    scanf(" %d", &expy);
    printf("\n\n------------------------------------------------");
    if (scale == 'W' || scale == 'w')
    {
        if (age > 40)
        {
            ara = 3000;
        }
        else
        {
            ara = 1500;
        }
        bsalary = 10000.00;
        perinc = 700;
    }

    else if (scale == 'X' || scale == 'x')
    {
        bsalary = 12900.00;
        perinc = 910;
        ara = 1500.00;
    }
    else if (scale == 'Y' || scale == 'y')
    {
        bsalary = 21700.00;
        perinc = 1500;
        ara = 1500.00;
    }
    else if (scale == 'Z' || scale == 'z')
    {
        bsalary = 32600.00;
        perinc = 2800;
        ara = 1500.00;
    }
    runpay = bsalary + expy * perinc;

    printf("\nBasic Pay");
    printf("\n\n--------------");
    printf("\nBasic Salary: %30.2f", bsalary);
    printf("\nNo of Increments: %23d", expy);
    printf("\nRunning Pay: %31.2f", runpay);

    //Allowances
    hra = runpay * 45 / 100;
    ssb = bsalary * 30 / 100;
    gp = runpay + hra + ssb + ara;
    printf("\n\nAllowances");
    printf("\n\n--------------");
    printf("\nHouse Rent Allowances: %21.2f", hra);
    printf("\nSocial Security Benefits: %18.2f", ssb);
    printf("\nAdhoc Relief Allowance: %20.2f", ara);
    //deduc = fmod(gp, 100);
    value = gp / 100;
    deduc = gp - (value * 100);
    printf("\nGross Pay: %33.2f", gp);

    //Deductions
    printf("\n\nDeductions");
    printf("\n\n--------------");
    ai = (value * 100) * 12;
    if (ai >= 0.00 && ai <= 400000.00)
    {
        ratio = 0.00;
    }
    else if (ai >= 400001.00 && ai <= 650000.00)
    {
        ratio = 2.5;
    }
    else if (ai >= 650001.00 && ai <= 1000000.00)
    {
        ratio = 4.75;
    }
    else if (ai >= 1000001.00 && ai <= 1500000.00)
    {
        ratio = 7;
    }
    else if (ai >= 1500001.00)
    {
        ratio = 11.5;
    }
    income = ai * ratio / 100;
    mincome = income / 12;
    printf("\nIncome Tax (at %.2f): %22.2f", ratio, mincome);
    gpf = value * 100 / 10;
    printf("\nGeneral Provident Fund: %20.2f", gpf);
    printf("\nDonations: %33.2f", deduc);
    totdec = deduc + mincome + gpf;
    printf("\n\nTotal Deductions: %26.2f", totdec);
    netp = gp - totdec;

    printf("\n\nNet Pay: %35.2f", netp);
    printf("\n\n------------------------------------------------");

    getch();
    return 0;
}