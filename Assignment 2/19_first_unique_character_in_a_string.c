#include <stdio.h>

int firstUniqChar(char* s) {
    int freq[26] = {0};
    // first pass: count each letter
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }
    // second pass: find the first letter with count 1
    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s[1000];
    scanf("%s", s);
    printf("%d", firstUniqChar(s));
    return 0;
}
