#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;
    int lastPos[256];
    for (int i = 0; i < 256; i++) {
        lastPos[i] = -1;
    }

    int maxLen = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        char currentChar = s[right];
        if (lastPos[currentChar] >= left) {
            left = lastPos[currentChar] + 1;
        }
        lastPos[currentChar] = right;
        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

int main() {
    char s1[] = "abcabcbb";
    char s2[] = "bbbbb";
    char s3[] = "pwwkew";

    printf("Input: %s -> Output: %d\n", s1, lengthOfLongestSubstring(s1)); // Output: 3
    printf("Input: %s -> Output: %d\n", s2, lengthOfLongestSubstring(s2)); // Output: 1
    printf("Input: %s -> Output: %d\n", s3, lengthOfLongestSubstring(s3)); // Output: 3

    return 0;
}
