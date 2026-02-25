#include <stdio.h>
int main() {
    int n, i, isSorted = 1;
    if (scanf("%d", &n) != 1) return 0;
    int sales[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }
    for (i = 0; i < n - 1; i++) {
        if (sales[i] > sales[i + 1]) {
            isSorted = 0; 
            break;
        }
    }
    if (isSorted) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
