#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int d = i;
            if (j < d) d = j;
            if (size - 1 - i < d) d = size - 1 - i;
            if (size - 1 - j < d) d = size - 1 - j;
            printf("%d", n - d);
            if (j < size - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
