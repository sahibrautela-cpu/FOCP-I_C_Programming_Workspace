#include <stdio.h>
#define MAX 100
int m[MAX][MAX];
int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    if (r > MAX) r = MAX;
    if (c > MAX) c = MAX;
    long long rowSum[MAX] = {0};
    long long colSum[MAX] = {0};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            rowSum[i] += m[i][j];
            colSum[j] += m[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%lld", rowSum[i]);
    }
    printf("\n");
    for (int j = 0; j < c; j++) {
        if (j > 0) printf(" ");
        printf("%lld", colSum[j]);
    }
    printf("\n");
    return 0;
}
