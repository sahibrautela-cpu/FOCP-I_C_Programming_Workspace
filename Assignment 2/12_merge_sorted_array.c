#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;        // last real element in nums1
    int j = n - 1;        // last element in nums2
    int k = m + n - 1;    // last position in nums1
    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
}

int main() {
    int m, n, i;
    int nums1[400], nums2[200];
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }
    merge(nums1, m + n, m, nums2, n, n);
    for (i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    return 0;
}
