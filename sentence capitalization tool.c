#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char sentence;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    if (sentence != '\0' && sentence != '\n') {
        sentence = toupper(sentence);
    }
    
    printf("Capitalized sentence: %s", sentence);

    return 0;
}