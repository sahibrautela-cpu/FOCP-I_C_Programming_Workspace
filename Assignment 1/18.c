#include <stdio.h>

int findDigits(int n) {
    int sum = 0;
    int digit;
    int original = n;
    while (n > 0) {
        digit = n % 10;
        if (digit != 0 && original % digit == 0) {
            sum++;
        }
        n = n / 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", findDigits(n));
    return 0;
}
