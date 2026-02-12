#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n == 0) {
        count = 1;
    } else {
        for (; n != 0; n /= 10) {
            count++;
        }
    }
    printf("Output: %d\n", count);
    return 0;
}
