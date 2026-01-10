#include <stdio.h>
#include <math.h>

int main() {
    int originalNum, num, rem, sum = 0, count = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &originalNum) != 1 || originalNum <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    num = originalNum;

    int temp = originalNum;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    num = originalNum; 
    while (num != 0) {
        rem = num % 10; 
        sum += pow(rem, count);
        num /= 10; 
    }
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
