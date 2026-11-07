#include <stdio.h>
int main() {
    int T, N, first, last, sum;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        last = N % 10;
        while (N >= 10) {
            N = N / 10;
        }
        first = N;
        sum = first + last;
        printf("%d\n", sum);
    }
    return 0;
}
