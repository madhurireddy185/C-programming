#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int N;
    int count = 0;
    if (scanf("%d", &N) != 1) {
        return 1; 
    }
    for (int i = 2; i <= N; i++) {
        if (is_prime(i)) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
