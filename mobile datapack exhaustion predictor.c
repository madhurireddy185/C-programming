#include <stdio.h>
int main() {
    int dataPackGB, n, i = 0;
    int dailyUsage;
    int exhaustedDay = -1;
    int overusedData = 0;
    if (scanf("%d", &dataPackGB) != 1) return 0;
    if (scanf("%d", &n) != 1) return 0;
    int currentData = dataPackGB;
    while (i < n) {
        scanf("%d", &dailyUsage);
        i++;
        if (exhaustedDay != -1) continue;
        currentData -= dailyUsage;
        if (currentData <= 0) {
            exhaustedDay = i;
            overusedData = -currentData; 
        }
    }
    if (exhaustedDay != -1) {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overusedData);
    } else {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    }
    return 0;
}
