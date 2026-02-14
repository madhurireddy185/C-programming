#include <stdio.h>
int main() {
    int batteryPercent, n, drain;
    if (scanf("%d %d", &batteryPercent, &n) != 2) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &drain);
        batteryPercent -= drain;
    }
    if (batteryPercent < 0) batteryPercent = 0;
    printf("Remaining Battery: %d%%\n", batteryPercent);
    return 0;
}
