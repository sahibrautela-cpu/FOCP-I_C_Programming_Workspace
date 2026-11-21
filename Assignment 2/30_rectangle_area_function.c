#include <stdio.h>
long long rectangleArea(long long length, long long width) {
    return length * width;
}
int main(void) {
    long long length, width;
    if (scanf("%lld %lld", &length, &width) != 2) return 0;
    printf("%lld\n", rectangleArea(length, width));
    return 0;
}
