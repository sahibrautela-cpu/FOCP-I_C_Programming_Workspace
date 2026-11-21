#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int i = strlen(s) - 1;
    int length = 0;
    // skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    // count characters of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    printf("%d", lengthOfLastWord(s));
    return 0;
}
