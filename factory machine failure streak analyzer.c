
#include <stdio.h>
int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int maxStreak = 0;
    int currentStreak = 0;
    int day = 0;
    int status;
    while (day < N) {
        scanf("%d", &status);
        if (status == 0) {
            currentStreak++;
        } else {
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak; 
            }
            currentStreak = 0; 
        }
        day++;
    }
    if (currentStreak > maxStreak) {
        maxStreak = currentStreak;
    }
    printf("Longest Failure Streak: %d\n", maxStreak);
    return 0;
}
