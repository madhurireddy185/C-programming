#include <stdio.h>

int main() {
    int i = 0;
    char name[12] = "ENGINEERING";

    for (i = 0; i < 11; i++) {
        putchar(name[i]);
    }

    putchar('\n'); // Use single quotes for a single character
    return 0;
}

