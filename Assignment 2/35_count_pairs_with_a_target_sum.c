#include <stdio.h>
#define MAX_N 10000
int a[MAX_N];
int main(void) {
    int n;
    long long target;
    if (scanf("%d %lld", &n, &target) != 2) return 0;
    if (n > MAX_N) n = MAX_N;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((long long)a[i] + a[j] == target) count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}
