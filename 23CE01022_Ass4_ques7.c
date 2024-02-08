#include <stdio.h>

int main() {
    int age;
    float ticketPrice;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age\n");
    } else if (age < 5) {
        ticketPrice = 0;
    } else if (age >= 5 && age <= 12) {
        ticketPrice = 20;
    } else if (age >= 13 && age <= 59) {
        ticketPrice = 50;
    } else {
        ticketPrice = 50 * 0.8; // 20% discount for seniors
    }

    printf("The ticket price is: $%.2f\n", ticketPrice);

    return 0;
}