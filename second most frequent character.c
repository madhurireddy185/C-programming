#include <stdio.h>
#include <string.h>
#include <limits.h>
char findSecondMostFrequent(char* str) {
    int freq[256] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }
    int max = 0, secondMax = 0;
    char res = '\0';
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            secondMax = max;
            max = freq[i];
        } else if (freq[i] > secondMax && freq[i] != max) {
            secondMax = freq[i];
        }
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] == secondMax) {
            return (char)i;
        }
    }

    return '\0';
}

int main() {
    printf("%c\n", findSecondMostFrequent("aabbbbccdd")); 
    printf("%c\n", findSecondMostFrequent("zzzyyyxx"));   
    printf("%c\n", findSecondMostFrequent("abc"));        
    return 0;
}
