#include <stdio.h>

int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        int digits = 0;
        while (n > 0) {
            digits++;
            n /= 10;
        }
        if (digits % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, i;
    scanf("%d", &n);
    int a[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", findNumbers(a, n));
    return 0;
}
