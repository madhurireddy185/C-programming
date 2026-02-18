#include <stdio.h>
int main() {
    int fuel, n, consumed, completedTrips = 0;
    if (scanf("%d", &fuel) != 1) return 0;
    if (scanf("%d", &n) != 1) return 0;
    int i = 0;
    while (i < n) {
        if (scanf("%d", &consumed) != 1) break;
        if (fuel >= consumed) {
            fuel -= consumed; 
            completedTrips++; 
        } else {
            break;
        }
        i++;
    }
    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}
