#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    int i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    printf("Number of spaces in the string: %d\n", count);

    return 0;
}
