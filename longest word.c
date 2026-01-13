
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void findLongestWord(char sentence[], char longestWord[]) {
    int i = 0, j = 0;
    int maxLength = 0;
    int currentLength = 0;
    int startIndex = 0;
    int endIndex = 0;
    while (sentence[i] != '\0') {
        if (isalnum(sentence[i])) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                endIndex = i;
                startIndex = i - maxLength;
            }
            currentLength = 0; 
        }
        i++;
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        endIndex = i;
        startIndex = i - maxLength;
    }
    for (j = 0; j < maxLength; j++) {
        longestWord[j] = sentence[startIndex + j];
    }
    longestWord[j] = '\0';
}
int main() {
    char sentence[500]; 
    char longestWord[100]; 
    printf("Enter a sentence: \n");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    sentence[strcspn(sentence, "\n")] = '\0';
    findLongestWord(sentence, longestWord);
    printf("\nOriginal sentence: %s\n", sentence);
    printf("The longest word is: %s\n", longestWord);
    printf("Length: %zu\n", strlen(longestWord)); 

    return 0;
}
