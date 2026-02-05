
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int x = 10, y = 5;

    printf("Addition: %d\n", add(x, y));        // 10 + 5 = 15
    printf("Subtraction: %d\n", subtract(x, y)); // 10 - 5 = 5
    printf("Multiplication: %d\n", multiply(x, y)); // 10 * 5 = 50
    printf("Division: %.2f\n", divide(x, y));    // 10 / 5 = 2.00

    return 0;
}
