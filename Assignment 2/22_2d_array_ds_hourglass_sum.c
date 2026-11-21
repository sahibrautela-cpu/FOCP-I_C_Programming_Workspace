#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    int max = INT_MIN;
    for (int i = 0; i <= arr_rows - 3; i++) {
        for (int j = 0; j <= arr_columns - 3; j++) {
            int sum = arr[i][j]     + arr[i][j + 1]     + arr[i][j + 2]
                                    + arr[i + 1][j + 1]
                    + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (sum > max) {
                max = sum;
            }
        }
    }
    return max;
}

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int **arr = malloc(r * sizeof(int *));
    for (i = 0; i < r; i++) {
        arr[i] = malloc(c * sizeof(int));
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", hourglassSum(r, c, arr));
    return 0;
}
