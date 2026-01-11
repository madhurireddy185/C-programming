#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1; 
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent (positive integer): ");
    scanf("%d", &exponent);
    for (int i = 0; i < exponent; ++i) {
        result *= base; 
    }
    printf("Result: %d^%d = %lld\n", base, exponent, result);
    return 0;
}
