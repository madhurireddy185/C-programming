#include <stdio.h>
#include <string.h>
#include <limits.h>

void findLargestSmallestWords(char *str, char *smallest, char *largest) {
    int min_len = INT_MAX, max_len = INT_MIN;
    int current_len = 0;
    const char *start_of_word = NULL;
    const char *smallest_start = NULL;
    const char *largest_start = NULL;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '\n' || str[i] == '\0') {
            if (start_of_word != NULL) {
                if (current_len < min_len) {
                    min_len = current_len;
                    smallest_start = start_of_word;
                }
                if (current_len > max_len) {
                    max_len = current_len;
                    largest_start = start_of_word;
                }
              current_len = 0;
                start_of_word = NULL;
            }
        } else {
            if (start_of_word == NULL){
                start_of_word = &str[i];
            }
            current_len++;
        }
        if (str[i] == '\0') {
            break;
        }
    }
    if (smallest_start != NULL && largest_start != NULL) {
        strncpy(smallest, smallest_start, min_len);
        smallest[min_len] = '\0';
        
        strncpy(largest, largest_start, max_len);
        largest[max_len] = '\0'; 
    }
}

int main() {
    char inputString[] = "C programming is a powerful and efficient language.";

    char smallestWord[50];
    char largestWord[50];

    findLargestSmallestWords(inputString, smallestWord, largestWord);

    printf("Input String: \"%s\"\n", inputString);
    printf("Smallest Word: \"%s\" (Length: %lu)\n", smallestWord, (unsigned long)strlen(smallestWord));
    printf("Largest Word: \"%s\" (Length: %lu)\n", largestWord, (unsigned long)strlen(largestWord));

    return 0;
}
