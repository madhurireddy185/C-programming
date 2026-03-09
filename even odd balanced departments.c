#include <stdio.h>

int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) return 0;

    int matrix[R][C];
    int balancedDepartments = 0;
    for (int i = 0; i < R; i++) {
        int evenCount = 0;
        int oddCount = 0;
        
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        if (evenCount == oddCount) {
            balancedDepartments++;
        }
    }
    printf("%d\n", balancedDepartments);

    return 0;
}
