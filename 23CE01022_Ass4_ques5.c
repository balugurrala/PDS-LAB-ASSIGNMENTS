#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Incorrect input\n");
    } else {
        originalNumber = number;

        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += remainder * remainder * remainder;
            originalNumber /= 10;
        }

        if (result == number) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}