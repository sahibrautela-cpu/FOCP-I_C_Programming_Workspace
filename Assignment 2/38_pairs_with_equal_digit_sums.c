#include <stdio.h>
#define MAX_N 10000
int digitSum(long long x) {
    int sum = 0;
    while (x > 0) {
        sum += (int)(x % 10);
        x /= 10;
    }
    return sum;
}
int sums[MAX_N];
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n > MAX_N) n = MAX_N;
    for (int i = 0; i < n; i++) {
        long long v;
        scanf("%lld", &v);
        sums[i] = digitSum(v);
    }
    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] == sums[j]) count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}
