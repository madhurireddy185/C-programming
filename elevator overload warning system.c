#include <stdio.h>
int main() {
    int maxWeight, numPassengers;
    if (scanf("%d %d", &maxWeight, &numPassengers) != 2) {
        return 1;
    }
    int currentWeight = 0;
    int allowedPassengers = 0;
    int isOverloaded = 0;
    int i = 0;
    while (i < numPassengers) {
        int passengerWeight;
        scanf("%d", &passengerWeight);
        if (currentWeight + passengerWeight > maxWeight) {
            isOverloaded = 1;
            break;
        } else {
            currentWeight += passengerWeight;
            allowedPassengers++;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n", allowedPassengers);
    if (isOverloaded) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }
    return 0;
}
