#include <stdio.h>
int main() {
    int N;
    int current_usage;
    int max_usage = 0;
    int surge_hours = 0;
    int count = 0;
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 1;
    }
    while (count < N) {
        scanf("%d", &current_usage);
        if (current_usage > max_usage) {
            max_usage = current_usage;
        }
        if (current_usage > 5) {
            surge_hours++;
        }
        count++;
    }
    printf("Max Usage: %d\n", max_usage);
    printf("Surge Hours: %d\n", surge_hours);
    return 0;
}
