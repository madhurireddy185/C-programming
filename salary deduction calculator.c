#include <stdio.h>
int main() {
    int salary, absentDays;
    if (scanf("%d %d", &salary, &absentDays) != 2) {
        return 1;
    }
    for (int i = 0; i < absentDays; i++) {
        salary = salary - 100;
    }
    printf("Final Salary: ₹%d\n", salary);

    return 0;
}
