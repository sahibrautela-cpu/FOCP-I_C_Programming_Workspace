#include <stdio.h>
#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    int mapS[256] = {0};  // last seen position (1-based) of each char in s
    int mapT[256] = {0};  // last seen position (1-based) of each char in t
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char a = s[i];
        unsigned char b = t[i];
        if (mapS[a] != mapT[b]) {
            return false;
        }
        mapS[a] = i + 1;
        mapT[b] = i + 1;
    }
    return true;
}

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);
    printf("%s", isIsomorphic(s, t) ? "true" : "false");
    return 0;
}
