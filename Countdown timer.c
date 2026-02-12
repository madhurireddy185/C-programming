#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
