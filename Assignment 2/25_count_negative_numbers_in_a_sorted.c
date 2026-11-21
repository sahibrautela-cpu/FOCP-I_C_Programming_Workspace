#include <stdio.h>
#include <stdlib.h>

int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;
    int row = 0;
    int col = gridColSize[0] - 1;   // start at the top-right corner
    while (row < gridSize && col >= 0) {
        if (grid[row][col] < 0) {
            // everything below in this column is also negative
            count += gridSize - row;
            col--;
        } else {
            row++;
        }
    }
    return count;
}

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int **grid = malloc(r * sizeof(int *));
    for (i = 0; i < r; i++) {
        grid[i] = malloc(c * sizeof(int));
        for (j = 0; j < c; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    int *colSize = malloc(r * sizeof(int));
    for (i = 0; i < r; i++) colSize[i] = c;
    printf("%d", countNegatives(grid, r, colSize));
    return 0;
}
