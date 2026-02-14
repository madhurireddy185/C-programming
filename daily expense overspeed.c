#include <stdio.h>
int main() {
    int n, i, expense;
    int totalExpense = 0;
    int overspendDays = 0;
    if (scanf("%d", &n) != 1) return 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &expense);
        totalExpense += expense;
        if(expense > 1000) {
            overspendDays++;
        }
    }
    printf("Total Expense: %d\n", totalExpense);
    printf("Overspend Days: %d\n", overspendDays);
    return 0;
}
