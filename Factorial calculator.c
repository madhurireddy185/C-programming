#include <stdio.h>
int main() {
    int N;
    long long factorial = 1; 
    int i;
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    if (N < 1 || N > 10) {
    }
    for (i = 1; i <= N; i++) {
        factorial *= i; 
    }
    printf("%lld\n", factorial);
    return 0;
}
