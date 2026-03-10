#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char s[1000];
    if (scanf("%s", s) != 1) return 0;

    int max_vowels = 0;
    int current_vowels = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isVowel(s[i])) {
            current_vowels++;
            if (current_vowels > max_vowels) {
                max_vowels = current_vowels;
            }
        } else {
            current_vowels = 0;
        }
    }

    printf("%d\n", max_vowels);
    return 0;
}
