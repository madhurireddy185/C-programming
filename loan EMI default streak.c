#include <stdio.h>
int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int maxStreak = 0;
    int currentStreak = 0;
    int month = 0;
    int payment;
    while (month < N) {
        scanf("%d", &payment);
        if (payment == 0) {
            currentStreak++;
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        month++;
    }
    printf("Longest Default Streak: %d\n", maxStreak);
    return 0;
}
