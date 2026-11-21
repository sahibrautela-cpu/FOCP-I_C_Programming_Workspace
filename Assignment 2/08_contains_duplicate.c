#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int cmp(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, i;
    scanf("%d", &n);
    int a[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%s", containsDuplicate(a, n) ? "true" : "false");
    return 0;
}
