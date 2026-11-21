#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];
    bool firstRowZero = false;
    bool firstColZero = false;
    // does the first row / first column already contain a zero?
    for (int j = 0; j < cols; j++) {
        if (matrix[0][j] == 0) firstRowZero = true;
    }
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) firstColZero = true;
    }
    // use the first row and column as markers
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    // zero out cells based on the markers
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    // finally handle the first row and first column
    if (firstRowZero) {
        for (int j = 0; j < cols; j++) matrix[0][j] = 0;
    }
    if (firstColZero) {
        for (int i = 0; i < rows; i++) matrix[i][0] = 0;
    }
}

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int **matrix = malloc(r * sizeof(int *));
    for (i = 0; i < r; i++) {
        matrix[i] = malloc(c * sizeof(int));
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int *colSize = malloc(r * sizeof(int));
    for (i = 0; i < r; i++) colSize[i] = c;
    setZeroes(matrix, r, colSize);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
