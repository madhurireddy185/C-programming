#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int len = 2 * n - 1;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
        
            int min_i = i < len - 1 - i ? i : len - 1 - i;
            int min_j = j < len - 1 - j ? j : len - 1 - j;
            int min_dist = min_i < min_j ? min_i : min_j;
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }
    return 0;
}