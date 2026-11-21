#include <stdio.h>

int countOperations(int num1, int num2) {
    int count=0,max;
    if(num1==0 || num2==0){
        return 0;
    }
    while(num1>0 && num2>0){
        max = (num1>num2)? num1 : num2;
        if (max == num1){
            num1=num1-num2;
        }
        else{
            num2=num2-num1;
        }
        count ++;
    }
    return count;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", countOperations(a, b));
    return 0;
}
