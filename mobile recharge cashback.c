#include <stdio.h>

int main() {
    int planType, paymentMode;
    int cost = 0, cashback = 0;
    scanf("%d", &planType);
    scanf("%d", &paymentMode);
    switch(planType) {
        case 1:
            cost = 199;        
            switch(paymentMode)
             {
                case 11:  
                case 12: 
                    cashback = 20;
                    break;
                case 13:  
                    cashback = 0;
                    break;
                default:
                    cashback = 0;
            }
            break;
        case 2:
            cost = 399;
            switch(paymentMode) {
                case 11:  
                case 12:  
                    cashback = 20;
                    break;
                case 13:  
                    cashback = 0;
                    break;
                default:
                    cashback = 0;
            }
            break;
        default:
            printf("Invalid Plan");
            return 0;
    }
    printf("Pay ₹%d", cost - cashback);
    return 0;
}
