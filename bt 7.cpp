#include <stdio.h>
#include <stdlib.h>

int** createMatrix(int rows, int cols) {
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    printf("Nhap cac gia tri cho ma tran %dx%d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu tai [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    return matrix; 
}
void printMatrix(int **matrix, int rows, int cols) {
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);
    int **matrix = createMatrix(rows, cols);
    printMatrix(matrix, rows, cols);
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

