#include <stdio.h>
#include <ctype.h>
int main(void) {
    char line[1005];
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("0 0 0 0\n");
        return 0;
    }
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        char ch = line[i];
        if (isalpha((unsigned char)ch)) {
            char lower = (char)tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        } else if (isdigit((unsigned char)ch)) {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
        // newline, punctuation and other characters are ignored
    }
    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
