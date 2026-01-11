#include <stdio.h> 
int isPrime(int num) {
    if (num < 2) { 
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int limit;        
    long long sum = 0; 
    printf("Enter the upper limit (N) to find the sum of primes: ");
    scanf("%d", &limit);
    for (int num = 2; num <= limit; num++) {
        if (isPrime(num)) { 
            sum += num;     
        }
    }
    printf("Sum of all prime numbers up to %d is: %lld\n", limit, sum);
    return 0; 
}
