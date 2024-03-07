#include <stdio.h>


void transposeMatrix(int mat[][100], int rows, int cols) {
    int transposedMat[cols][rows];

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedMat[j][i] = mat[i][j];
        }
    }


    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transposedMat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[100][100];


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, rows, cols);

    return 0;
}