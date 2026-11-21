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
    int peaks = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int v = m[i][j];
            int isPeak = 1;
            if (i > 0     && m[i - 1][j] >= v) isPeak = 0;   // up
            if (i < r - 1 && m[i + 1][j] >= v) isPeak = 0;   // down
            if (j > 0     && m[i][j - 1] >= v) isPeak = 0;   // left
            if (j < c - 1 && m[i][j + 1] >= v) isPeak = 0;   // right
            if (isPeak) peaks++;
        }
    }
    printf("%d\n", peaks);
    return 0;
}
