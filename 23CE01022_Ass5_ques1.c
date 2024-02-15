#include <stdio.h>
int main()
{
    int no, r, temp, count = 0, i, j, sum = 0;
    printf("enter a number:");
    scanf("%d", &no);
    temp = no;
    for (; no > 0;)
    {
        no = no / 10;
        count++;
    }
    int arr[count];
    for (i = 0; i < count; i++)
    {
        arr[i] = temp % 10;
        temp = temp / 10;
    }
    for (j = 0; j < count; j++)
    {
        sum += arr[j];
        for (i = 0; i < count; i++)
        {
            if (arr[i] == arr[j] && j > i)
            {
                sum = sum - arr[i];
                break;
            }
        }
    }
    printf("\n%d", sum);
    printf("\n%d", count);
    return 0;
}