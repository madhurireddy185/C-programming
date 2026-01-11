#include <stdio.h>
int find_gcd_iterative(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    int num1, num2, gcd;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Invalid input. Please enter positive integers.\n");
        return 1;
    }
    gcd = find_gcd_iterative(num1, num2);
    printf("GCD of %d and %d is %d.\n", num1, num2, gcd);
    return 0;
}
