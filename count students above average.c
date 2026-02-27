#include <stdio.h>
int main() {
    int n, i;
    int count = 0;
    float sum = 0.0, average;
    if (scanf("%d",&n) != 1 || n <= 0) {
        return 0;
    }
    int marks[n];
    for (i = 0; i < n; i++) {
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    average = sum / n;
    for (i = 0; i < n; i++) {
        if (marks[i] > average) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
