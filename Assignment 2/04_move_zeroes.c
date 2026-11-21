#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int pos = 0;   // next slot for a non-zero value
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[pos];
            nums[pos] = nums[i];
            nums[i] = temp;
            pos++;
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int a[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    moveZeroes(a, n);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
