#include <stdio.h>
#include <limits.h>
int main() {
    int n, i;
    if (scanf("%d", &n) != 1 || n < 2) {
        return 0;
    }
    int salary[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &salary[i]);
    }
    int maxSalary = INT_MIN;
    int secondMaxSalary = INT_MIN;
    for (i = 0; i < n; i++) {
        if (salary[i] > maxSalary) {
            secondMaxSalary = maxSalary;
            maxSalary = salary[i];
        } 
        else if (salary[i] > secondMaxSalary && salary[i] < maxSalary) {
            secondMaxSalary = salary[i];
        }
    }
    if (secondMaxSalary == INT_MIN) {
        printf("No second highest salary\n");
    } else {
        printf("%d\n", secondMaxSalary);
    }

    return 0;
}
