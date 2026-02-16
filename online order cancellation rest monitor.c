#include <stdio.h>
int main() {
    int n, order, successful = 0, cancelled = 0;
    if (scanf("%d", &n) != 1) return 0;
    int i = 0;
    while (i < n) {
        scanf("%d", &order);
        if (order == 1) {
            successful++;
        } else {
            cancelled++;
        }
        i++;
    }
    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);
    if (cancelled > successful) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }
    return 0;
}
