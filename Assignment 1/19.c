#include <stdio.h>

int subtractProductAndSum(int n) {
    int prod=1,sum=0,org,digit,x;
    org=n;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        prod=prod*digit;
        n=n/10;
    }
    x=prod-sum;
    return x;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", subtractProductAndSum(n));
    return 0;
}
