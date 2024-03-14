#include <stdio.h>
#include <string.h>
int rec(int i, int n, int a[n], int num);
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int num = a[0];
    printf("largest element of the array  is:%d", rec(n, n, a, num));
    return 0;
}
int rec(int i, int n, int a[n], int num)
{
    if (i == 1)
    {
        if (a[i - 1] > num)
        {
            num = a[i - 1];
        }
        return num;
    }
    else
    {
        if (a[i - 1] > num)
        {
            num = a[i - 1];
            num = rec(i - 1, n, a, num);
        }
        return num;
    }
}
