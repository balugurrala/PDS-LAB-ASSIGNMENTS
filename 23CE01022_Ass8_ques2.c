#include <stdio.h>

void matrixMultiplication(int *a, int *b, int *result, int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            *(result + i * colsB + j) = 0;
            for (int k = 0; k < colsA; k++) {
                *(result + i * colsB + j) += *(a + i * colsA + k) * *(b + k * colsB + j);
            }
        }
    }
}

int main() {
    int rowsA = 2, colsA = 2, rowsB = 2, colsB = 2;
    int matrixA[2][2] = {{1, 2}, {3, 4}};
    int matrixB[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    matrixMultiplication((int *)matrixA, (int *)matrixB, (int *)result, rowsA, colsA, colsB);

    printf("Resulting array after matrix multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}