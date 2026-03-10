#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 

char firstNonRepeatingChar(char *str) {
    int count_arr[MAX_CHAR] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        count_arr[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (count_arr[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    return '-'; 
}

int main() {
    char str1[] = "aabbccd";
    char str2[] = "xxyz";
    char str3[] = "aabb";
    char result1 = firstNonRepeatingChar(str1);
    if (result1 != '-')
        printf("Input: %s -> Output: %c\n", str1, result1);
    else
        printf("Input: %s -> Output: \"-1\"\n", str1);
    char result2 = firstNonRepeatingChar(str2);
    if (result2 != '-')
        printf("Input: %s -> Output: %c\n", str2, result2);
    else
        printf("Input: %s -> Output: \"-1\"\n", str2);

    char result3 = firstNonRepeatingChar(str3);
    if (result3 != '-')
        printf("Input: %s -> Output: %c\n", str3, result3);
    else
        printf("Input: %s -> Output: \"-1\"\n", str3);

    return 0;
}
