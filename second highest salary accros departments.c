#include <stdio.h>
#include <limits.h>
int main() {
    int R, C;
    if (scanf("%d %d",&R &C) != 2) return -1;
    int salary[R][C];
    int max1 = -1;
    int max2 = -1; 
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d",&salary[i][j]);
            int current = salary[i][j];
            if (current > max1) {
                max2 = max1;
                max1 = current;
            } else if (current > max2 && current < max1) {
                max2 = current;
            }
        }
    }
    if (max2 == -1) {
        printf("No second highest salary\n");
    } else {
        printf("%d\n", max2);
    }
    return 0;
}
