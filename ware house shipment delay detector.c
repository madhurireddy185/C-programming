#include <stdio.h>
int main() {
    int N;
    int total_delay = 0;
    int delayed_days = 0;
    int day_count = 0;
    int current_delay;
    if (scanf("%d", &N) != 1) {
        return 1; 
    }
    while (day_count < N) {
        if (scanf("%d", &current_delay) != 1) {
            return 1;
        }
        total_delay += current_delay;
        if (current_delay > 2) {
            delayed_days++;
        }
        day_count++;
    }
    printf("Total Delay: %d\n", total_delay);
    printf("Delayed Days: %d\n", delayed_days);
    return 0;
}
