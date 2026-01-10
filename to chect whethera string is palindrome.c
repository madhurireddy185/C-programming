#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h> 
bool isPalindrome_CaseSensitive(const char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true; 
}

bool isPalindrome_Robust(const char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        while (start < end && !isalnum((unsigned char)str[start])) {
            start++;
        }
        while (start < end && !isalnum((unsigned char)str[end])) {
            end--;
        }
        if (tolower((unsigned char)str[start]) != tolower((unsigned char)str[end])) {
            return false; 
        }
        start++;
        end--;
    }

    return true;
}


int main() {
    char str1[] = "madam";
    char str2[] = "hello";
    char str3[] = "A man, a plan, a canal: Panama"; 
    printf("Testing case-sensitive function:\n");
    if (isPalindrome_CaseSensitive(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    } else {
        printf("\"%s\" is not a palindrome.\n", str1);
    }

    if (isPalindrome_CaseSensitive(str2)) {
        printf("\"%s\" is a palindrome.\n", str2);
    } else {
        printf("\"%s\" is not a palindrome.\n", str2);
    }
     if (isPalindrome_CaseSensitive(str3)) {
        printf("\"%s\" is a palindrome (case-sensitive).\n", str3);
    } else {
        printf("\"%s\" is not a palindrome (case-sensitive).\n", str3);
    }
    printf("\nTesting robust (case-insensitive, alphanumeric only) function:\n");
    if (isPalindrome_Robust(str3)) {
         printf("\"%s\" is a palindrome (robust check).\n", str3);
    } else {
         printf("\"%s\" is not a palindrome (robust check).\n", str3);
    }

    return 0;
}
