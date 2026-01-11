#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main() {
    char str[100];
    int frequency[ASCII_SIZE] = {0}; 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    printf("\nCharacter frequencies:\n");
    for (i = 0; i < ASCII_SIZE; i++) {
        if (frequency[i] > 0) {
            printf("Character '%c' appears %d times\n", (char)i, frequency[i]);
        }
    }

    return 0;
}
