#include <stdio.h>
int main(void) {
    long long N;
    if (scanf("%lld", &N) != 1) return 0;
    int found = 0;
    for (long long a = 1; a <= N; a++) {
        long long c = a + 1;                       // c only moves forward as b grows
        for (long long b = a + 1; b <= N; b++) {
            long long s = a * a + b * b;
            if (s > N * N) break;                  // c would exceed N
            while (c * c < s) c++;
            if (c * c == s && c <= N) {            // a < b < c is guaranteed
                printf("%lld %lld %lld\n", a, b, c);
                found = 1;
            }
        }
    }
    if (!found) printf("None\n");
    return 0;
}
