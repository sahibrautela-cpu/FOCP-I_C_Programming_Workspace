#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    // upper half: n rows including the widest
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    // lower half: n - 1 rows, decreasing
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
