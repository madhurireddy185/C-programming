#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    if (n < 1 || n > 20) {
        return 1;
    }
    for (int i = 1; i <= 10; i++) {
        int product = n * i;
        printf("%d ", product);
    }
    printf("\n");
    return 0;
}
