#include <stdio.h>
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main(void) {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    printf("%d\n", maxOfThree(a, b, c));
    return 0;
}
