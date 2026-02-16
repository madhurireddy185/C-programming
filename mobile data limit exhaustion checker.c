#include <stdio.h>
int main() {
    int totalData, N;
    int dailyUsage;
    int daysUsed = 0;
    if (scanf("%d %d", &totalData, &N) != 2) return 0;
    while (daysUsed < N) {
        if (scanf("%d", &dailyUsage) != 1) break;
        totalData -= dailyUsage;
        daysUsed++;
        if (totalData <= 0) {
            totalData = 0; 
            break;
        }
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}
