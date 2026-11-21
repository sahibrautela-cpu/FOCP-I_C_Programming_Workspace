#include <stdio.h>
int main(void) {
    long long total;
    if (scanf("%lld", &total) != 1) return 0;
    long long hours   = total / 3600;
    long long minutes = (total % 3600) / 60;
    long long seconds = total % 60;
    printf("%lld %lld %lld\n", hours, minutes, seconds);
    return 0;
}
