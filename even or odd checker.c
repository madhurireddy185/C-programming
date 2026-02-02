#include <stdio.h>

void checkEvenOdd(int num)
{
    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main()
{
    int n = 2;   // test case
    checkEvenOdd(n);
    return 0;
}