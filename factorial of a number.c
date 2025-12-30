#include <stdio.h>
int main() {
    int n,i;
    unsigned long long fact=1;
    printf("enter a positive integer");
    scanf("%d",&n);
    if(n<0)
    printf("error! factorial of negative number doesn't exist");
    else
    for(i=1;i<=n;++i)
    fact*=i;
    printf("factorial of %d=%11u",n,fact);
    
    return 0;
}