#include <stdio.h>

int main() {
    int creditScore;
    int currentBalance, interestRate;
    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    printf("Enter current balance: $");
    scanf("%d", &currentBalance);

    if (creditScore < 600) {
        interestRate = 0.15;
    } else if (creditScore >= 600 && creditScore <= 750) {
        interestRate = 0.12;
    } else {
        interestRate = 0.10;
    }

    int interest = currentBalance * interestRate;
    printf("The calculated interest is: %d\n", interest);

    return 0;
}