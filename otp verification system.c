#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidOTP(const char* otp) {
    if (strlen(otp) != 6) {
        return 0;
    }
    for (int i = 0; i < 6; i++) {
        if (!isdigit(otp[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("123456: %s\n", isValidOTP("123456") ? "Valid" : "Invalid");
    printf("12345: %s\n", isValidOTP("12345") ? "Valid" : "Invalid");
    printf("12a456: %s\n", isValidOTP("12a456") ? "Valid" : "Invalid");
    printf("654321: %s\n", isValidOTP("654321") ? "Valid" : "Invalid");
    printf("123@56: %s\n", isValidOTP("123@56") ? "Valid" : "Invalid");

    return 0;
}