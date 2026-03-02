#include <stdio.h>
int main() {
    int R, C;
    if (scanf("%d %d",&R&C) != 2) return -1;
    int matrix[R][C];
    int maxUniqueCount = -1;
    int targetDeptIndex = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0; i < R; i++) {
        int currentUniqueCount = 0;
        for (int j = 0; j < C; j++) {
            int isUnique = 1;
            for (int k = 0; k < j; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    isUnique = 0;
                    break;
                }
            }
            if (isUnique) {
                currentUniqueCount++;
            }
        }
        if (currentUniqueCount > maxUniqueCount) {
            maxUniqueCount = currentUniqueCount;
            targetDeptIndex = i;
        }
    }
    printf("%d\n", targetDeptIndex);

    return 0;
}
