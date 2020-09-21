#include <stdio.h>
float farenheit(float x)
{

    return 1.8 * x + 32;
}
float celcius(float x)
{

    return (x - 32) / 1.8;
}
int main()
{
    float i;
    printf("Celcius\tFarenheit");
    for (i = 0; i <= 100; i++)
    {
        printf("\n%.0f\t%.2f", i, farenheit(i));
    }
    printf("\nFarenheit\tCelcius");
    for (i = 32; i <= 212; i += 10)
    {
        printf("\n%.0f\t\t%.2f", i, celcius(i));
    }
}
