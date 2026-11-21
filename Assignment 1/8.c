#include <stdio.h>
#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int *result = malloc(grades_count * sizeof(int));
    for (int i = 0; i < grades_count; i++) {
        int grade = grades[i];
        int diff = 5 - (grade % 5);
        if (grade >= 38 && diff < 3) {
            grade = grade + diff;
        }
        result[i] = grade;
    }
    return result;
}

int main() {
    int n, i, count;
    int grades[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }
    int *result = gradingStudents(n, grades, &count);
    for (i = 0; i < count; i++) {
        printf("%d\n", result[i]);
    }
    free(result);
    return 0;
}
