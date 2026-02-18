#include <stdio.h>
int main() {
    int n, hours, inactiveWeeks = 0;
    int count = 0;
    if (scanf("%d", &n) != 1) return 0;
    while (count < n) {
        scanf("%d", &hours);
        if (hours == 0) {
            inactiveWeeks++;
        }
        count++;
    }
    printf("Inactive Weeks: %d\n", inactiveWeeks);
    if (inactiveWeeks > n / 2) {
        printf("Risk Status: High\n");
    } else {
        printf("Risk Status: Low\n");
    }
    return 0;
}
