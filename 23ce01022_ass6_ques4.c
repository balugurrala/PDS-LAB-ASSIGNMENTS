#include <stdio.h>


int isSubset(int arr1[], int m, int arr2[], int n) {
    int i, j;


    for (i = 0; i < m; i++) {
        
        for (j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                break;
            }
        }

        
        if (j == n) {
            return 0;
        }
    }

    
    return 1;
}

int main() {
    int m, n;

    printf("Enter the size of array 1: ");
    scanf("%d", &m);

    printf("Enter the size of array 2: ");
    scanf("%d", &n);

    int arr1[m], arr2[n];

    printf("Enter the elements of array 1:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of array 2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    if (isSubset(arr1, m, arr2, n)) {
        printf("Array 1 is a subset of Array 2.\n");
    } else {
        printf("Array 1 is not a subset of Array 2.\n");
    }

    return 0;
}