#include <stdio.h>
int main() {
    int N;
    int daily_units; 
    int total_units = 0; 
    int i; 
    if (scanf("%d", &N) != 1) return 1;
    for (i = 0; i < N; i++) {
        if (scanf("%d", &daily_units) != 1) return 1;
        total_units += daily_units;
    }
    printf("Total Units: %d\n", total_units);

    return 0;
}
