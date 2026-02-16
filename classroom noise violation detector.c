#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int violations = 0;
    int current_streak = 0;
    int max_streak = 0;
    int count = 0;
    while (count < N) {
        int noise;
        scanf("%d", &noise);
        if (noise > 70) {
            violations++;
            current_streak++;
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            current_streak = 0;
        }
        count++;
    }
    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation Streak: %d\n", max_streak);
    return 0;
}
