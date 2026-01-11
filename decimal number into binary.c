#include <stdio.h>
#include <stdlib.h>

int main() {
    long long decimal_num, temp_num;
    int binary_num[64]; 
    int i = 0, j;
    printf("Enter a decimal integer: ");
    if (scanf("%lld", &decimal_num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    temp_num = decimal_num;
    if (decimal_num == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }
    if (decimal_num < 0) {
        printf("This program calculates the binary representation for non-negative integers.\n");
        return 1;
    }
    while (temp_num > 0) {
        binary_num[i] = temp_num % 2;
        temp_num = temp_num / 2;
        
        i++;
    }
    printf("Binary equivalent: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary_num[j]);
    }
    printf("\n");

    return 0;
}
