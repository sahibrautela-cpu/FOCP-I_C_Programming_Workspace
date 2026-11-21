#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);
    if (m == 0) return 0;
    if (m > n) return -1;
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == m) {
            return i;  // full match starting at i
        }
    }
    return -1;
}

int main() {
    char haystack[1000], needle[1000];
    fgets(haystack, sizeof(haystack), stdin);
    haystack[strcspn(haystack, "\r\n")] = '\0';
    fgets(needle, sizeof(needle), stdin);
    needle[strcspn(needle, "\r\n")] = '\0';
    printf("%d", strStr(haystack, needle));
    return 0;
}
