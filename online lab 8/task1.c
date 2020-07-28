#include <stdio.h>
int main()
{
    int num[10] = {2, 6, -4, 8, 10, -12, 14, 16, 18, 20};
    int *ptr = num;
    printf("\nArray using num[i] notation.");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\nArray using ptr[i] notation.");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\nArray using *(num+i) notation.");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(num + i));
    }
    printf("\nArray using *(ptr+i) notation.");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\nArray using *ptr notation.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *ptr);
        printf("%d\n", ptr);
        ptr++;
    }
}