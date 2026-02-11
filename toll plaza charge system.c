#include <stdio.h>
int main() {
    int vehicleType, trips, totalCharge = 0;
    if (scanf("%d %d", &vehicleType, &trips) != 2) return 0;
    switch (vehicleType) {
        case 1: 
            if (trips == 1) {
                totalCharge = 100;
            } else if (trips > 1) {
                totalCharge = 800;
            }
            break;
        case 2:
            totalCharge = trips * 240;
            break;
        default:
            return 0;
    }
    printf("₹%d\n", totalCharge);
    return 0;
}
