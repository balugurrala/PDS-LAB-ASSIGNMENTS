#include <stdio.h>
int main()
{
    int t = 25;
    int a, arr[4], i = 0, j = 0, k, l, m, n, o, ar[t], temp, b;
    printf("enter a four digit number:");
    scanf("%d", &a);
    while (a > 0)
    {
        arr[i] = a % 10;
        a = a / 10;
        i++;
    }
    for (k = 0; k < 4; k++)
    {
        for (l = 0; l < 4; l++)
        {
            for (m = 0; m < 4; m++)
            {
                for (n = 0; n < 4; n++)
                {
                    if (k != l && k != m && k != n && l != m && l != n && m != n && arr[k] != 0)
                    {
                        b = 1000 * arr[k] + 100 * arr[l] + 10 * arr[m] + arr[n];
                        for (o = 0; o < j; o++)
                        {
                            if (ar[o] == b)
                            {
                                break;
                            }
                        }
                        if (o == j)
                        {
                            ar[j] = b;
                            j++;
                        }
                    }
                }
            }
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}