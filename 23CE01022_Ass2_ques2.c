#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Input three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use ternary operator to find the maximum
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the maximum number
    printf("Max number is %d\n", max);
    return 0;
}