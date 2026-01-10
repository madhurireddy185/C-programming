#include <stdio.h>
long long factorial(int digit) {
    long long fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}
int isStrongNumber(int num) {
    int originalNum = num;
    long long sumOfFactorials = 0;
    int digit;
    while (num > 0) {
        digit = num % 10; 
        sumOfFactorials += factorial(digit);
        num /= 10; 
    }
    if (sumOfFactorials == originalNum) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    if (isStrongNumber(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}
