#include <stdio.h>
#include <math.h>
#include <string.h>
int binaryToDecimal(const char *binary_str) {
    int decimal_num = 0;
    int length = strlen(binary_str);
    for (int i = 0; i < length; i++) {
        char digit_char = binary_str[length - 1 - i];
        if (digit_char != '0' && digit_char != '1') {
            printf("Error: Invalid binary input.\n");
            return -1; 
        }
        int digit = digit_char - '0';
        decimal_num += digit * pow(2, i);
    }

    return decimal_num;
}

int main() {
    char binary_input[100]; 
    int decimal_output;

    printf("Enter a binary number: ");
    fgets(binary_input, sizeof(binary_input), stdin);
    binary_input[strcspn(binary_input, "\n")] = 0;

    decimal_output = binaryToDecimal(binary_input);

    if (decimal_output != -1) {
        printf("The decimal equivalent of %s is: %d\n", binary_input, decimal_output);
    }

    return 0;
}
