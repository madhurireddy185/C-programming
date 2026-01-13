#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare_chars(const void *a, const void *b) {
    char char_a = *((char *)a);
    char char_b = *((char *)b);
    if (char_a < char_b) return -1;
    if (char_a > char_b) return 1;
    return 0;
}
int main() {
    char str[]="dcba"; 
    size_t n = strlen(str);
    printf("Original string: %s\n", str);
    qsort(str, n, sizeof(char), compare_chars);
    printf("Sorted string: %s\n", str);
    return 0;
}
