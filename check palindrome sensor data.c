#include <stdio.h>
int main() {
    int n, i, isPalindrome = 1;
    if (scanf("%d",&n) != 1) return 0;
    if (n <= 0) {
        printf("Yes\n"); 
        return 0;
    }
    int data[n];
    for (i = 0; i < n; i++) {
        scanf("%d",&data[i]);
    }
    for (i = 0; i < n / 2; i++) {
        if (data[i] != data[n - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
