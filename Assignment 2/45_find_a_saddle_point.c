#include <stdio.h>
#define MAX 100
int m[MAX][MAX];
int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    if (r > MAX) r = MAX;
    if (c > MAX) c = MAX;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    // Scan in row-major order so the first match found is the one to print.
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int value = m[i][j];
            int isRowMin = 1, isColMax = 1;
            for (int k = 0; k < c; k++)
                if (m[i][k] < value) { isRowMin = 0; break; }
            for (int k = 0; k < r; k++)
                if (m[k][j] > value) { isColMax = 0; break; }
            if (isRowMin && isColMax) {
                printf("%d %d %d\n", i, j, value);   // 0-based row and column
                return 0;
            }
        }
    }
    printf("None\n");
    return 0;
}
