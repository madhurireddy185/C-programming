#include <stdio.h>
int main() {
    int category, age, premium;
    if (scanf("%d %d", &category, &age) != 2) return 0;
    switch (category) {
        case 1: 
            premium = (age <= 5) ? 1500 : 2500;
            printf("₹%d\n", premium);
            break;     
        case 2: 
            premium = (age <= 5) ? 4000 : 6000;
            printf("₹%d\n", premium);
            break;
        default:
            printf("Invalid Category\n");
    }
    return 0;
}
