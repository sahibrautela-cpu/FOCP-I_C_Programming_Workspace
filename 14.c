#include <stdio.h>

int countOdds(int low, int high){
    return (high + 1) / 2 - low / 2;
}

int main() {
    int low, high;
    scanf("%d %d", &low, &high);
    printf("%d", countOdds(low, high));
    return 0;
}
