#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n <= 1)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num = 2;

    if (isPrime(num))
        printf("%d is a Prime number", num);
    else
        printf("%d is Not a Prime number", num);

    return 0;
}
