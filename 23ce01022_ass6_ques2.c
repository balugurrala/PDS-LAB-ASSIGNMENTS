#include <stdio.h>

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

void printGreaterThanAverage(int arr[], int size, float average) {
    printf("Elements greater than the average (%.2f) are:\n", average);
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            printf("%d\n", arr[i]);
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    float average = calculateAverage(arr, size);

    printGreaterThanAverage(arr, size, average);

    return 0;
}