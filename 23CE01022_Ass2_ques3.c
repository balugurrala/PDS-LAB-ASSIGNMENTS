#include <stdio.h>

int main() {
    int totalDays, years, months, weeks, days;

    
    printf("Enter total number of Days: ");
    scanf("%d", &totalDays);

    
    years = totalDays / 365;

    
    int remainingDays = totalDays % 365;

    
    months = remainingDays / 30;

    
    remainingDays %= 30;

    
    weeks = remainingDays / 7;

    
    days = remainingDays % 7;

    
    printf("Years = %d\n", years);
    printf("Months = %d\n", months);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", days);

    return 0;
}