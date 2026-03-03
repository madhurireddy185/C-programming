#include <stdio.h>
#include <limits.h>
int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) return -1;
    int salaryMatrix[R][C];
    float minAvg = -1.0; 
    int minDeptIndex = 0;
    for (int i = 0; i < R; i++) {
        int currentDeptSum = 0;
        for (int j = 0; j < C; j++) {
            scanf("%d", &salaryMatrix[i][j]);
            currentDeptSum += salaryMatrix[i][j];
        }
        float currentAvg = (float)currentDeptSum / C;
        if (i == 0 || currentAvg < minAvg) {
            minAvg = currentAvg;
            minDeptIndex = i;
        }
    }
    printf("%d\n", minDeptIndex);

    return 0;
}
