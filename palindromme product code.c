#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome (ignoring non-alphanumeric for simplicity as per test cases)
int isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;

    while (l < h) {
        // Skip non-alphanumeric characters from left
        if (!isalnum(str[l])) {
            l++;
            continue;
        }
        if (!isalnum(str[h])) {
            h--;
            continue;
        }
        if (tolower(str[l]) != tolower(str[h])) {
            return 0; 
        }
        l++;
        h--;
    }
    return 1; 
}

int main() {
    char productCode;
    printf("Enter product code: ");
    if (fgets(productCode, sizeof(productCode), stdin) != NULL) {
        productCode[strcspn(productCode, "\n")] = 0;

        if (isPalindrome(productCode)) {
            printf("'%s' - Palindrome\n", productCode);
        } else {
            printf("'%s' - Not Palindrome\n", productCode);
        }
    }
    return 0;
}