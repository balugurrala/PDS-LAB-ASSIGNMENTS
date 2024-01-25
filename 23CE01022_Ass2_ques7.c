#include <stdio.h>
#include <math.h>

int main() {
    double baseCost, tipPercent, taxPercent, totalCost;

    
    printf("Enter the base cost of the meal: ");
    scanf("%lf", &baseCost);

    printf("Enter the tip percentage: ");
    scanf("%lf", &tipPercent);

    printf("Enter the tax percentage: ");
    scanf("%lf", &taxPercent);

    
    totalCost = baseCost + (baseCost * tipPercent / 100) + (baseCost * taxPercent / 100);

    
    int roundedTotalCost = (int)round(totalCost);


    printf("The total cost of the meal is: %d\n", roundedTotalCost);

    return 0;
}