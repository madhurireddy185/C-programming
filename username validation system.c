#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isValidUsername(const char *username) {
    // Rule 2: Length between 6 and 12 characters
    int len = strlen(username);
    if (len < 6 || len > 12) {
        return false;
    }

    // Rule 3: Should not start with a digit
    if (isdigit(username)) {
        return false;
    }

    // Rule 1: Contains only lowercase letters and digits
    for (int i = 0; i < len; i++) {
        if (!islower(username[i]) && !isdigit(username[i])) {
            return false;
        }
    }

    
    return true;
}

int main() {
    const char *testCases[] = {"john123", "123john", "john!", "john_doe!", "john2024"};
    int numTests = sizeof(testCases) / sizeof(testCases);

    printf("Username Validation System Test Results:\n");

    for (int i = 0; i < numTests; i++) {
        const char *user = testCases[i];
        if (isValidUsername(user)) {
            printf("Input: %s -> Valid\n", user);
        } else {
            printf("Input: %s -> Invalid\n", user);
        }
    }

    return 0;
}