#include <stdio.h>

void transpose(int *mat, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
        
            int temp = *((mat + i * N) + j);
            *((mat + i * N) + j) = *((mat + j * N) + i);
            *((mat + j * N) + i) = temp;
        }
    }
}

void reverseRows(int *mat, int N) {
    for (int i = 0; i < N; i++) {
        int start = 0;
        int end = N - 1;
        while (start < end) {
        
            int temp = *((mat + i * N) + start);
            *((mat + i * N) + start) = *((mat + i * N) + end);
            *((mat + i * N) + end) = temp;
            start++;
            end--;
        }
    }
}


void rightRotate(int *mat, int N, int n) {
    n %= 4; 
    for (int i = 0; i < n; i++) {
        
        transpose(mat, N);
        
        reverseRows(mat, N);
    }
}


void printMatrix(int *mat, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *((mat + i * N) + j));
        }
        printf("\n");
    }
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int N = 4; 
    int n = 3; 
    
    printf("Original Matrix:\n");
    printMatrix((int *)mat, N);
    
    rightRotate((int *)mat, N, n);
    
    printf("\nMatrix after right rotation %d times:\n", n);
    printMatrix((int *)mat, N);
    
    return 0;
}