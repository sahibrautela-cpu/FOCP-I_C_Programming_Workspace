#include <stdio.h>
#include <stdlib.h>

int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;
    for (int i = 0; i < matSize; i++) {
        sum += mat[i][i];                  // primary diagonal
        sum += mat[i][matSize - 1 - i];    // secondary diagonal
    }
    // for odd sizes, the center cell was counted twice
    if (matSize % 2 == 1) {
        sum -= mat[matSize / 2][matSize / 2];
    }
    return sum;
}

int main() {
    int n, i, j;
    scanf("%d", &n);
    int **mat = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        mat[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int *colSize = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) colSize[i] = n;
    printf("%d", diagonalSum(mat, n, colSize));
    return 0;
}
