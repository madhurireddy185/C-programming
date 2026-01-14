#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUppercase = 0, hasLowercase = 0, hasDigit = 0;
    int length, i;

    printf("Enter a password: ");
    scanf("%s", password);

    length = strlen(password);

    if (length >= 8) {
        for (i = 0; i < length; i++) {
            if (isupper(password[i])) {
                hasUppercase = 1;
            } else if (islower(password[i])) {
                hasLowercase = 1;
            } else if (isdigit(password[i])) {
                hasDigit = 1;
            }
        }
    }

    if (hasUppercase && hasLowercase && hasDigit && length >= 8) {
        printf("Strong\\n");
    } else {
        printf("Weak\\n");
    }

    return 0;
}