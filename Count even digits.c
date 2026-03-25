#include <stdio.h>
#include <string.h>
int main() {
    char n[10];
    int count = 0;
    scanf("%s", n);
    for (int i = 0; i < strlen(n); i++) {
        int digit = n[i] - '0';
        if (digit % 2 == 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
