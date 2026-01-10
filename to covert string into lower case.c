#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    // Use fgets for safer input to prevent buffer overflows
    fgets(str, sizeof(str), stdin);

    // Remove the potential trailing newline character from fgets
    str[strcspn(str, "\\n")] = '\\0';

    for (i = 0; str[i] != '\\0'; i++) {
        // Cast to unsigned char is a best practice to avoid
        // undefined behavior with negative char values.
        str[i] = (char)tolower((unsigned char)str[i]);
    }

    printf("The string in lowercase is: %s\\n", str);

    return 0;
}
