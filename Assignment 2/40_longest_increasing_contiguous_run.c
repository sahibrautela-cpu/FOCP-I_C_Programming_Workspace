#include <stdio.h>
#define MAX_N 100000
int a[MAX_N];
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n > MAX_N) n = MAX_N;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    int best = 1, current = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) current++;   // run continues
        else current = 1;                 // run broken (equal or smaller)
        if (current > best) best = current;
    }
    printf("%d\n", best);
    return 0;
}
