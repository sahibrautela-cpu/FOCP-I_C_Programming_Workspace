#include <stdio.h>

int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int sum=arrivalTime + delayedTime;
    if(sum==24){
        return 0;
    }
    else{
        return(arrivalTime + delayedTime);
    }
}

int main() {
    int a, d;
    scanf("%d %d", &a, &d);
    printf("%d", findDelayedArrivalTime(a, d));
    return 0;
}
