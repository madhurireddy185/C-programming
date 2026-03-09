#include <stdio.h>
int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) return 0;
    int matrix[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int saddleCount = 0;
    for (int i = 0; i < R; i++) {
        int rowMin = matrix[i][0];
        int colIdx = 0;
        for (int j = 1; j < C; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
                colIdx = j;
            }
        }
        int isSaddle = 1;
        for (int k = 0; k < R; k++) {
            if (matrix[k][colIdx] > rowMin) {
                isSaddle = 0;
                break;
            }
        }
        if (isSaddle) {
            saddleCount++;
        }
    }
    
    printf("%d\n", saddleCount);
    
    return 0;
}
