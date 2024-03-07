#include <stdio.h>


void calculateAverageTemperature(int temperature[][7], int numCities) {
    printf("City-wise average temperatures for the week:\n");

    for (int i = 0; i < numCities; i++) {
        int totalTemperature = 0;

    
        for (int j = 0; j < 7; j++) {
            totalTemperature += temperature[i][j];
        }

        
        double averageTemperature = (double)totalTemperature / 7;
        printf("City %d: %.2f\n", i + 1, averageTemperature);
    }
}

int main() {
    int numCities;

    
    printf("Enter the number of cities: ");
    scanf("%d", &numCities);

    int temperature[numCities][7];  

    
    printf("Enter the temperature of cities for a week:\n");

    for (int i = 0; i < numCities; i++) {
        printf("City %d:\n", i + 1);
        for (int j = 0; j < 7; j++) {
            printf("Day %d: ", j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }

    
    calculateAverageTemperature(temperature, numCities);

    return 0;
}