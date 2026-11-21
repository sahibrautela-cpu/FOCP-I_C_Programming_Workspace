#include <stdio.h>
int main() {
    int n, d;
    scanf("%d %d", &n, &d);
    int a[100000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // print starting from index d, wrapping around
    for (int i = 0; i < n; i++) {
        printf("%d ", a[(i + d) % n]);
    }
    printf("\n");
    return 0;
}
