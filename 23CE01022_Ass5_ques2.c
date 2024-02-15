#include <stdio.h>

int main()
{
    int count = 0, dividend, divisor;
    printf("enter dividend and divisor:");
    scanf("%d%d", &dividend, &divisor);
    for (; dividend >= divisor;)
    {
        dividend = dividend - divisor;
        count++;
    }
    printf("remainder:%d\nquotient:%d", dividend, count);
    return 0;
}