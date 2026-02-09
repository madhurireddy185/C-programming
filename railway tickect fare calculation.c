#include <stdio.h>

int main() {
    int travelClass;
    int age;
    float baseFare = 0.0;
    float finalFare = 0.0;
    float discount = 0.0;
    printf("Enter class (1 for Sleeper, 2 for AC): ");
    scanf("%d", &travelClass);
    printf("Enter age: ");
    scanf("%d", &age);
    switch (travelClass) {
        case 1:
            baseFare = 300.0;
            break;
        case 2: 
            baseFare = 1000.0;
            break;
        default:
            printf("Invalid class entered.\n");
            return 1; 
    }
    if (age < 12) {
        discount = 0.50;
    } else if (age >= 60) {
        if (travelClass == 1) {
            discount = 0.33;
        }
    }
    finalFare = baseFare * (1.0 - discount);
    printf("Fare ₹%.0f\n", finalFare);
    
    return 0;
}
