#include <stdio.h>
#include <stdlib.h>

int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;
    int* result = malloc(a_count * sizeof(int));
    for (int i = 0; i < a_count; i++) {
        result[i] = a[a_count - 1 - i];
    }
    return result;
}

int main() {
    int n, i, count;
    scanf("%d", &n);
    int a[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int *res = reverseArray(n, a, &count);
    for (i = 0; i < count; i++) {
        printf("%d ", res[i]);
    }
    free(res);
    return 0;
}
