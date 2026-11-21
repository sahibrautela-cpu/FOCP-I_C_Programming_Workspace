#include <stdio.h>
#include <stdlib.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0;
    for (int i = 0; i < accountsSize; i++) {
        int wealth = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            wealth += accounts[i][j];
        }
        if (wealth > max) {
            max = wealth;
        }
    }
    return max;
}

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int **accounts = malloc(r * sizeof(int *));
    for (i = 0; i < r; i++) {
        accounts[i] = malloc(c * sizeof(int));
        for (j = 0; j < c; j++) {
            scanf("%d", &accounts[i][j]);
        }
    }
    int *colSize = malloc(r * sizeof(int));
    for (i = 0; i < r; i++) colSize[i] = c;
    printf("%d", maximumWealth(accounts, r, colSize));
    return 0;
}
