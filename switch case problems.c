#include <stdio.h>
int main() {
    int connectionType;
    int units;
    float totalBill = 0;
    scanf("%d", &connectionType);
    scanf("%d", &units);
    switch (connectionType) {
        case 1: 
            if (units <= 100) {
                totalBill = units * 3;
            } else {
                totalBill = (100 * 3) + ((units - 100) * 5);
            }
            totalBill -= 80;
            break;
        case 2: 
            if (units <= 100) {
                totalBill = units * 7;
            } else {
                totalBill = (100 * 7) + ((units - 100) * 10);
            }
            break;

        default:
            return 1; 
    }
    printf("Bill \u20B9%.0f\n", totalBill); 

    return 0;
}
