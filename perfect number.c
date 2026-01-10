#include <stdio.h>
int is_perfect(int num);

int main() {
    int number;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    if (is_perfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
int is_perfect(int num) {
    int sum_of_divisors = 0;
    if (num <= 1) {
        return 0;
    }
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }
    if (sum_of_divisors == num) {
        return 1; 
    } else {
        return 0; 
    }
}
