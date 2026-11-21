#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;   // count of kept elements
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n, i, val;
    scanf("%d %d", &n, &val);
    int a[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int k = removeElement(a, n, val);
    printf("%d\n", k);
    for (i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
