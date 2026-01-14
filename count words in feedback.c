#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char sentence[1000]; 
    int count = 0;
    bool in_word = false;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            count++;
        }
    }

    printf("Word count: %d\n", count);

    return 0;
}