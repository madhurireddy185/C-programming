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

    if (R < 2 || C < 2) {
        return 0;
    }

    long long max_sum = -2e18; 

    for (int i = 0; i <= R - 2; i++) {
        for (int j = 0; j <= C - 2; j++) {
            long long current_sum = (long long)matrix[i][j] + matrix[i][j+1] + 
                                    matrix[i+1][j] + matrix[i+1][j+1];
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}
