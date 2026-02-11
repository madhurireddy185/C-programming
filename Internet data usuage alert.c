#include <stdio.h>
int main() {
    int planType;
    float dataUsed;
    if (scanf("%d", &planType) != 1) return 0;
    if (scanf("%f", &dataUsed) != 1) return 0;
    switch (planType) {
        case 1:
            if (dataUsed <= 1.0) {
                printf("Normal Speed\n");
            } else {
                printf("Speed Reduced\n");
            }
            break;
        case 2:
            if (dataUsed <= 2.0) {
                printf("Normal Speed\n");
            } else {
                printf("Extra Charges Applied\n");
            }
            break;
        default:
            printf("Invalid Plan Type\n");
            break;
    }
    return 0;
}
