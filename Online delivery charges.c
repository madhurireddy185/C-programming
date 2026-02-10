#include <stdio.h>
int main() {
    int orderAmount, speedType;
    int charge = 0;
    scanf("%d", &orderAmount);
    scanf("%d", &speedType);
    switch(speedType) {
        case 1:
            charge = 50;
            printf("Delivery ₹%d", charge);
            break;
        case 2:
            if(orderAmount < 1000) {
                charge = 100;
                printf("Delivery ₹%d", charge);
            } else {
                printf("Free Delivery");
            }
            break;
        default:
            printf("Invalid Speed Type");
    }
    return 0;
}
