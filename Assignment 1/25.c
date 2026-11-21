#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    printf("%d\n", fact);
    return 0;
}
