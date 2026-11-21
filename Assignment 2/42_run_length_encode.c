#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1005];
    if (scanf("%1000s", s) != 1) {
        printf("\n");
        return 0;
    }
    int len = (int)strlen(s);
    int i = 0;
    while (i < len) {
        int run = 1;
        while (i + run < len && s[i + run] == s[i]) run++;
        printf("%c%d", s[i], run);
        i += run;
    }
    printf("\n");
    return 0;
}
