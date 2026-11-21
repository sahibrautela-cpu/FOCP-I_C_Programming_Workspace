#include <stdio.h>

int reverseNumber(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
int beautifulDays(int i, int j, int k) {
    int count = 0;
    for (int day = i; day <= j; day++) {
        int diff = day - reverseNumber(day);
        if (diff < 0) diff = -diff;
        if (diff % k == 0) count++;
    }
    return count;
}

int main() {
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);
    printf("%d", beautifulDays(i, j, k));
    return 0;
}
