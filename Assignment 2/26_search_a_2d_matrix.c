#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int rows = matrixSize;
    int cols = matrixColSize[0];
    int left = 0;
    int right = rows * cols - 1;
    // treat the matrix as one sorted array of rows*cols elements
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int value = matrix[mid / cols][mid % cols];
        if (value == target) {
            return true;
        } else if (value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int r, c, i, j, target;
    scanf("%d %d", &r, &c);
    int **matrix = malloc(r * sizeof(int *));
    for (i = 0; i < r; i++) {
        matrix[i] = malloc(c * sizeof(int));
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d", &target);
    int *colSize = malloc(r * sizeof(int));
    for (i = 0; i < r; i++) colSize[i] = c;
    printf("%s", searchMatrix(matrix, r, colSize, target) ? "true" : "false");
    return 0;
}
