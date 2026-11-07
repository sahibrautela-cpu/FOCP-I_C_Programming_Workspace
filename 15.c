#include <stdio.h>

int sumOfMultiples(int n) {
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0|| i%5==0 || i%7==0){
            sum=sum+i;
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumOfMultiples(n));
    return 0;
}
