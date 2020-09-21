#include <stdio.h>
float charge(float hours)
{
    float c, charge;
    if (hours <= 3)

    {
        charge = 2;
    }
    if (hours > 3 && hours < 19)
    {

        charge = 0.5 * hours + 0.5;
    }
    if (hours >= 19)
    {
        charge = 10;
    }

    return charge;
}

int main()

{

    int car, i;
    float hours[3], tot_hours = 0, tot_charge = 0;
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter hours for car %d: ", i + 1);
        scanf("%f", &hours[i]);
        tot_hours = tot_hours + hours[i];
    }

    printf("Cars\tHours\tCharge\n");

    for (car = 0; car < 3; car++)
    {
        printf("\n%d", car + 1);

        printf("\t%.1f\t%.2f\n", hours[car], charge(hours[car]));
        tot_charge = tot_charge + charge(hours[car]);
    }
    printf("\nTOTAL\t%.1f\t%.2f", tot_hours, tot_charge);
}