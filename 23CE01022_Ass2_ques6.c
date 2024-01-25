#include <stdio.h>

int main() {
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    int result = (number % 2 != 0 && number >= 100 && number <= 200) ? 1 : 0;

    printf(result ? "True\n" : "False\n");

    return 0;
}