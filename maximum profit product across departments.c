#include <stdio.h>
#include <limits.h>
long long max2(long long a, long long b) {
    return (a > b) ? a : b;
}
int main() {
    int r, c;
    if (scanf("%d %d",&r&c) != 2) return 0;
    int matrix[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    if (r < 2) return 0;
    long long max_prod = LLONG_MIN;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            int max_i = INT_MIN, min_i = INT_MAX;
            int max_j = INT_MIN, min_j = INT_MAX;

            for (int col = 0; col < c; col++) {
                if (matrix[i][col] > max_i) max_i = matrix[i][col];
                if (matrix[i][col] < min_i) min_i = matrix[i][col];
            }
            for (int col = 0; col < c; col++) {
                if (matrix[j][col] > max_j) max_j = matrix[j][col];
                if (matrix[j][col] < min_j) min_j = matrix[j][col];
            }

            long long p1 = (long long)max_i * max_j;
            long long p2 = (long long)min_i * min_j;
            long long p3 = (long long)max_i * min_j;
            long long p4 = (long long)min_i * max_j;

            long long current_max = max2(p1, max2(p2, max2(p3, p4)));
            if (current_max > max_prod) {
                max_prod = current_max;
            }
        }
    }

    printf("%lld\n", max_prod);

    return 0;
}
