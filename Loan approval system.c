#include <stdio.h>
int main() {
    int loanType;
    int creditScore;
    if (scanf("%d %d", &loanType, &creditScore) != 2) {
        return 1; 
    }
    if (creditScore < 300 || creditScore > 900) {
        printf("Invalid Credit Score\n");
        return 0;
    }
    switch (loanType) {
        case 1: 
            if (creditScore >= 700) {
                printf("Approved\n");
            } else if (creditScore >= 650) {
                printf("Manual Review\n");
            } else {
                printf("Rejected\n");
            }
            break;
        case 2: 
            if (creditScore >= 700) {
                printf("Approved\n");
            } else {
                printf("Rejected\n");
            }
            break;
        default:
            printf("Invalid Loan Type\n");
            break;
    }

    return 0;
}
