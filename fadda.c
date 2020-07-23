#include <stdio.h>
void merge(int[], int, int[], int, int[], int *);

int main()
{
    int a[100], b[100], m, n, c, sorted[200];

    printf("Input number of elements in first array\n");
    scanf("%d", &m);

    printf("Input %d integers\n", m);
    for (c = 0; c < m; c++)
    {
        scanf("%d", &a[c]);
    }

    printf("Input number of elements in second array\n");
    scanf("%d", &n);

    printf("Input %d integers\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &b[c]);
    }
    int o = m + n;
    merge(a, m, b, n, sorted, &o);
    printf("Sorted array:\n");

    for (int c = 0; c < o; c++)
    {
        printf("%d\n", sorted[c]);
    }

    return 0;
}

void merge(int a[], int m, int b[], int n, int sorted[], int *o)
{
    int i, j, k;

    j = k = 0;

    for (i = 0; i < m + n;)
    {
        if (j < m && k < n)
        {
            if (a[j] < b[k])
            {
                sorted[i] = a[j];
                j++;
            }
            else
            {
                sorted[i] = b[k];
                k++;
            }
            i++;
        }
        else if (j == m)
        {
            for (; i < m + n;)
            {
                sorted[i] = b[k];
                k++;
                i++;
            }
        }
        else
        {
            for (; i < m + n;)
            {
                sorted[i] = a[j];
                j++;
                i++;
            }
        }
    }
    int oo = m + n;
    for (i = 0; i < oo; i++)
    {
        for (j = i + 1; j < oo;)
        {
            if (sorted[j] == sorted[i])
            {
                for (k = j; k < oo; k++)
                {
                    sorted[k] = sorted[k + 1];
                }
                oo--;
            }
            else
            {
                j++;
            }
        }
    }
    *o = oo;
}