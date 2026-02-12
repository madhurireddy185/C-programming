#include <stdio.h>
int main() {
    int N, reversedNumber = 0, remainder;
    printf("Input: ");
    if (scanf("%d", &N) != 1 || N < 1 || N > 100000) {
        printf("Invalid input or number out of constraints.\n");
        return 1;
    }
    for (; N > 0; N /= 10) {
        remainder = N % 10;         
        reversedNumber = reversedNumber * 10 + remainder; 
    }
    printf("Output: %d\n", reversedNumber);
    return 0;
}
