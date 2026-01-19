#include <stdio.h>
#include <string.h>

int check_for_error(const char *log_message) {
    if (strstr(log_message, "error") != NULL) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    const char *test_cases[] = {
        "system error occurred!",
        "operation successful!",
        "error in module !",
        "all good!",
        "critical error detected!"
    };
    
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_cases; i++) {
        printf("Input: \"%s\", Result: %s\n", test_cases[i], check_for_error(test_cases[i]) ? "Found" : "Not Found");
    }
    
    return 0;
}