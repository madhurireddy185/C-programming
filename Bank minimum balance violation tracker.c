#include <stdio.h>
int main() {
    int n, initialBalance, i = 0;
    int currentBalance, lowBalanceDays = 0;
    int transaction;
    if (scanf("%d %d", &n, &initialBalance) != 2) return 1;
    currentBalance = initialBalance;
    while (i < n) {
        scanf("%d", &transaction);
        currentBalance += transaction;
        if (currentBalance < 2000) {
            lowBalanceDays++;
        }
        i++;
    }
    printf("Final Balance: %d\n", currentBalance);
    printf("Low Balance Days: %d\n", lowBalanceDays);
    return 0;
}
