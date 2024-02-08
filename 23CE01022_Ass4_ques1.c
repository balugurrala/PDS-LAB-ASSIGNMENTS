#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    switch (num % 2) {
        case 0:
            printf("%d is an even number.\n", a);
            break;
        case 1:
            printf("%d is an odd number.\n", a);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}