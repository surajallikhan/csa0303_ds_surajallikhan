#include <stdio.h>

void multiplyMatrices(int m1, int n1, int m2, int n2, int mat1[][10], int mat2[][10], int result[][10]) {
    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int mat[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1, n1, m2, n2;
    printf("Enter the number of rows and columns for the first matrix (space-separated): ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the number of rows and columns for the second matrix (space-separated): ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

