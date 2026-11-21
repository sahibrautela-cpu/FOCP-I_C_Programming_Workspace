#include <stdio.h>
long long f(long long x) {
    if (x < 0)  return x * x + 2 * x + 1;
    if (x < 10) return 3 * x + 2;        // 0 <= x < 10
    return 5 * x - 7;                    // x >= 10
}
int main(void) {
    long long x;
    if (scanf("%lld", &x) != 1) return 0;
    printf("%lld\n", f(x));
    return 0;
}
