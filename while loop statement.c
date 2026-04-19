#include <stdio.h>
int main() {
    int n, noise_level;
    int violations = 0;
    int max_streak = 0;
    int current_streak = 0;
    int i = 0;
    if (scanf("%d", &n) != 1) return 0;
    while (i < n) {
        scanf("%d", &noise_level);
        if (noise_level > 70) {
            violations++;
            current_streak++;
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            current_streak = 0;
        }
        i++;
    }
    printf("%d\n", violations);
    printf("%d\n", max_streak);

    return 0;
}
