#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int expandAroundCenter(char* s, int left, int right, int n) {
    while (left >= 0 && right < n && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}
char* longestPalindrome(char* s) {
    if (s == NULL || strlen(s) < 1) return "";
    int n = strlen(s);
    int start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        int len1 = expandAroundCenter(s, i, i, n);
        int len2 = expandAroundCenter(s, i, i + 1, n);
        
        int maxLen = (len1 > len2) ? len1 : len2;
        
        if (maxLen > (end - start)) {
            start = i - (maxLen - 1) / 2;
            end = i + maxLen / 2;
        }
    }
    char* result = (char*)malloc((end - start + 2) * sizeof(char));
    if (result == NULL) {
        exit(1);
    }
    int j;
    for (j = 0; j <= (end - start); j++) {
        result[j] = s[start + j];
    }
    result[j] = '\0'; 

    return result;
}
int main() {
    char* str1 = "babad";
    char* res1 = longestPalindrome(str1);
    printf("Input: %s -> Output: %s\n", str1, res1);
    free(res1); 
    char* str2 = "cbbd";
    char* res2 = longestPalindrome(str2);
    printf("Input: %s -> Output: %s\n", str2, res2);
    free(res2);
    char* str3 = "a";
    char* res3 = longestPalindrome(str3);
    printf("Input: %s -> Output: %s\n", str3, res3);
    free(res3);
    
    return 0;
}
