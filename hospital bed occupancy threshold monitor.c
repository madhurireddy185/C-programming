#include <stdio.h>
int main() {
    int capacity, n;
    int current_occupied = 0;
    int critical_hours = 0;
    int i = 0;
    int change;
    if (scanf("%d %d", &capacity, &n) != 2)
     return 0;  
    float threshold = 0.9 * capacity;
    while (i < n) {
        scanf("%d", &change);
        current_occupied += change;
        if (current_occupied > threshold) {
            critical_hours++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n", current_occupied);
    printf("Critical Hours: %d\n", critical_hours);
    return 0;
}                               Madhuri reddy;