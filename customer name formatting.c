#include <stdio.h>
#include <string.h>
#include <ctype.h>

void formatName(char *name) {
    if (name == NULL || name == '\0') {
        return;
    }

    name = toupper((unsigned char)name);

    for (int i = 1; name[i] != '\0'; i++) {
        name[i] = tolower((unsigned char)name[i]);
    }
}

int main() {
    char name1[] = "john";
    char name2[] = "ALICE";
    char name3[] = "raMesH";
    char name4[] = "sita";
    char name5[] = "MOHAN";

    formatName(name1);
    formatName(name2);
    formatName(name3);
    formatName(name4);
    formatName(name5);

    printf("john -> %s\n", name1);
    printf("ALICE -> %s\n", name2);
    printf("raMesH -> %s\n", name3);
    printf("sita -> %s\n", name4);
    printf("MOHAN -> %s\n", name5);

    return 0;
}