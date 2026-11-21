#include <stdio.h>
int main() {
    char ch;
    char word[100];
    char sentence[100];
    scanf("%c", &ch);
    scanf("%s", word);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sentence);
    return 0;
}
