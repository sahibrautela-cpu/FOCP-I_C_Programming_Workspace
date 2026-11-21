#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int candidate = nums[0];
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

int main() {
    int n, i;
    scanf("%d", &n);
    int a[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", majorityElement(a, n));
    return 0;
}
