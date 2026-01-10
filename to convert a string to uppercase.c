#include <stdio.h>
#include <ctype.h> 
void string_to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

int main() {
    char my_string[] = "Hello";

    printf("Original string: %s\n", my_string);

    string_to_uppercase(my_string);

    printf("Uppercase string: %s\n", my_string);

    return 0;
}
