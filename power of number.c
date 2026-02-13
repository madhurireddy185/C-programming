#include <stdio.h>
int main() {
    int n, p, i;
    long long result =1;
    printf("Enter base (n) and exponent (p): ");
    scanf("%d %d", &n, &p);
    for (i = 0; i < p; ++i) {
        result *= n;
    }
    printf("%d^%d = %lld\n", n, p, result);
    return 0;
}
