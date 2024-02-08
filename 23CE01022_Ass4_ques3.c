#include <stdio.h>

int main() {
    int creditScore;
    int currentBalance, interestRate;
    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    printf("Enter current balance: ");
    scanf("%d", &currentBalance);
    int interest;
    if (creditScore < 600) {
        printf("interest=%d",interest=currentBalance*15/100);
    } else if (creditScore >= 600 && creditScore <= 750) {
        printf("interest=%d",interest=currentBalance*12/100);
    } else {
        printf("interest=%d",interest=currentBalance*10/100);
    }

    return 0;
}
