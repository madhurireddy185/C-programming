#include <stdio.h>
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}
int main() {
    int num1, num2, gcd, lcm;
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter positive integers.\n");
        return 1;
    }
    gcd = findGCD(num1, num2);
    lcm = (num1 * num2) / gcd;
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}
