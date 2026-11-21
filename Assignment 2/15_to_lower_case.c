#include <stdio.h>
#include <string.h>

char* toLowerCase(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;  // 'a' - 'A' = 32
        }
    }
    return s;
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    printf("%s", toLowerCase(s));
    return 0;
}
