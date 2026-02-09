#include <stdio.h>
int main() {
    int accountType, balance, withdrawAmount;
    const int CURRENT_LIMIT = 5000;
    if (scanf("%d %d %d", &accountType, &balance, &withdrawAmount) != 3) return 1;

    switch (accountType) {
        case 1:
            if (withdrawAmount <= balance) {
                printf("Transaction Successful\n");
            } else {
                printf("Insufficient Balance\n");
            }
            break;   
        case 2: 
            if (withdrawAmount > CURRENT_LIMIT) {
                printf("Limit Exceeded\n");
            } else if (withdrawAmount <= balance) {
                printf("Transaction Successful\n");
            } else {
                printf("Insufficient Balance\n");
            }
            break;
            
        default:
            printf("Invalid Account Type\n");
    }

    return 0;
}