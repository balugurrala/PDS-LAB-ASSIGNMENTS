#include <stdio.h>

int main()
{
    int num, sum = 0;
    char choice;
    while (1)
    {
        printf("Provide the number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            sum += num;
        }
        else
        {
            continue;
        }
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            continue;
        }
        else if (choice == 'N' || choice == 'n')
        {
            break;
        }
        else
        {
            printf("Not a valid input\n");
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}