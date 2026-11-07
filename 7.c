#include <stdio.h>

int smallestEvenMultiple(int n) {
    int i=1;
    while(1){
        if(i%n==0 && i%2==0){
            break;
        }
        ++i;
    }
    return i ;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", smallestEvenMultiple(n));
    return 0;
}
