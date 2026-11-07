#include <stdio.h>

int sum(int num1, int num2) {
    return(num1 + num2);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));
    return 0;
}
