#include <stdio.h>

int countDigits(int num) {
    int original = num;
    int digit;
    int count = 0;
    while (num > 0) {
        digit = num % 10;
        if (digit != 0 && original % digit == 0) {
            count++;
        }
        num = num / 10;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", countDigits(n));
    return 0;
}
