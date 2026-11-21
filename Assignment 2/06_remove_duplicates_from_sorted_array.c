#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int k = 1;   // nums[0] is always kept
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n, i;
    scanf("%d", &n);
    int a[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int k = removeDuplicates(a, n);
    printf("%d\n", k);
    for (i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
