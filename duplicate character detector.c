#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ASCII_SIZE 128

bool hasDuplicates(const char *str) {
    bool observed[ASCII_SIZE] = {false};
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= 0 && str[i] < ASCII_SIZE) {
            if (observed[str[i]]) {
                return true;
            }
            observed[str[i]] = true;
        }
    }
    return false;
}

int main() {
    const char *testCases[] = {"hello!", "world!", "programming!", "abc I'", "banana!"};
    int numCases = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numCases; i++) {
        printf("Input: %s -> %s\n", testCases[i], hasDuplicates(testCases[i]) ? "Duplicates found" : "No duplicates");
    }

    return 0;
}