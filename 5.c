#include <stdio.h>

int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;
    while (mainTank >= 5) {
        mainTank = mainTank - 5;
        distance = distance + 50;
        if (additionalTank > 0) {
            mainTank = mainTank + 1;
            additionalTank = additionalTank - 1;
        }
    }
    distance = distance + mainTank * 10;
    return distance;
}

int main() {
    int m, a;
    scanf("%d %d", &m, &a);
    printf("%d", distanceTraveled(m, a));
    return 0;
}
