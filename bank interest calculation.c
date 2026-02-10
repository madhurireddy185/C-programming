#include <stdio.h>
int main() {
    int accountType, years;
    float interestRate;
    scanf("%d", &accountType);
    scanf("%d", &years);
    switch(accountType)
     {
        case 1:   
            interestRate = 4;
            break;
        case 2:   
            if(years <= 3)
                interestRate = 5;
            else
                interestRate = 7;
            break;
        default:
            printf("Invalid Account Type");
            return 0;
    }
    printf("Interest %.0f%%", interestRate);
    return 0;
}
