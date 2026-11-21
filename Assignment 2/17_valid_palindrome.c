#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        // skip non-alphanumeric characters on the left
        while (left < right && !isalnum((unsigned char)s[left])) {
            left++;
        }
        // skip non-alphanumeric characters on the right
        while (left < right && !isalnum((unsigned char)s[right])) {
            right--;
        }
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    printf("%s", isPalindrome(s) ? "true" : "false");
    return 0;
}
