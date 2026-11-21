#include <stdio.h>
long long countMultiples(long long n, long long k) {
    if (n < 1 || k <= 0) return 0;   // no positive integers in range
    return n / k;                    // multiples of k in 1..n
}
int main(void) {
    long long n, k;
    if (scanf("%lld %lld", &n, &k) != 2) return 0;
    printf("%lld\n", countMultiples(n, k));
    return 0;
}
