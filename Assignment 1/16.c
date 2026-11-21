#include <stdio.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    char *yes = "YES";
    char *no = "NO";
    if(v1 <= v2) return no;
    int n = (x2 - x1) / (v1 - v2);
    int m = (x2 - x1) % (v1 - v2);
    if((n>0) && (m==0))
        return yes;
    else
        return no;
}

int main() {
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    printf("%s", kangaroo(x1, v1, x2, v2));
    return 0;
}
