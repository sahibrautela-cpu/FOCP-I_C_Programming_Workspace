#include <stdio.h>
#define MAX 100
int m[MAX][MAX];
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n > MAX) n = MAX;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (m[i][j] != m[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }
    printf(symmetric ? "YES\n" : "NO\n");
    return 0;
}
