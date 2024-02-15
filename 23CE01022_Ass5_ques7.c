#include <stdio.h>
int main()
{
    int arr[10];
    printf("enter numbers to be sorted:");
    for (int k = 0; k < 10; k++)
    {
        scanf("%d", &arr[k]);
    }
    int n = 10;
    int swaps;
    for (int i = 0; i < n - 1; i++)
    {
        swaps = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
        if (swaps == 0)
        {
            break;
        }
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
