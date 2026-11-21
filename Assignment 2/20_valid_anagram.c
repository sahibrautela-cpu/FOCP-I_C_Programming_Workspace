#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    // lengths must match for an anagram
    if (strlen(s) != strlen(t)) {
        return false;
    }
    // add counts for s, subtract counts for t
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    // all counts must be zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);
    printf("%s", isAnagram(s, t) ? "true" : "false");
    return 0;
}
