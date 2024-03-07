#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return; 
    }

    
    swap(&arr[start], &arr[end]);

    reverseArray(arr, start + 1, end - 1);
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 0, n - 1);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}