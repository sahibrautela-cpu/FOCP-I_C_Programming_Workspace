#include <stdio.h>
// Returns 1 if n is a perfect square, else 0. Uses binary search (no sqrt).
int isPerfectSquare(long long n) {
    if (n < 0) return 0;
    long long lo = 0, hi = 3037000499LL;   // floor(sqrt(LLONG_MAX))
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        long long sq = mid * mid;          // fits in long long
        if (sq == n) return 1;
        if (sq < n) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}
int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    printf("%d\n", isPerfectSquare(n));
    return 0;
}
