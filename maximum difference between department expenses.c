#include <stdio.h>
#include <stdlib.h> 
int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) return 0;
    int expenses[R][C];
    int rowSums[R];
    for (int i = 0; i < R; i++) {
        rowSums[i] = 0; 
        for (int j = 0; j < C; j++) {
            scanf("%d", &expenses[i][j]);
            rowSums[i] += expenses[i][j];
        }
    }
    int maxSum = rowSums[0];
    int minSum = rowSums[0];
    
    for (int i = 1; i < R; i++) {
        if (rowSums[i] > maxSum) {
            maxSum = rowSums[i];
        }
        if (rowSums[i] < minSum) {
            minSum = rowSums[i];
        }
    }
    int maxDifference = maxSum - minSum;
    
    printf("%d\n", maxDifference);
    
    return 0;
}
