#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define ALPHABET_SIZE 26
int areAnagrams(char* str1, char* str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0; 
    }
    int count1[ALPHABET_SIZE] = {0};
    int count2[ALPHABET_SIZE] = {0};
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]); 
        count1[c - 'a']++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        char c = tolower(str2[i]);
        count2[c - 'a']++;
    }
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (count1[i] != count2[i]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    char str1[] = "Listen";
    char str2[] = "Silent";
    char str3[] = "Hello";
    char str4[] = "World";

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    if (areAnagrams(str3, str4)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str3, str4);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str3, str4);
    }

    return 0;
}
