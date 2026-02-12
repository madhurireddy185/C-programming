#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    if (n < 1 || n > 20) {
        return 1;
    }
    int first = 0, second = 1, next, i;
    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", first);
        } else if (i == 1) {
            printf(" %d", second);
        } else {
            next = first + second;
            printf(" %d", next);
            first = second;
            second = next;
        }
    }
    printf("\n"); 
    return 0;
}
