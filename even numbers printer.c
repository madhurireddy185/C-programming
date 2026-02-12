#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1; 
    }
    for (int i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(" ");
        }
    }
    printf("\n"); 
    return 0;
}
