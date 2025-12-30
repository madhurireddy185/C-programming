#include <stdio.h>
int main() {
    long long n;
    int count=0;
    printf("enter an integer");
    scanf("%11d",&n);
    if (n==0)
    count=1;
    else
    if(n<0)
    n=-n;
    while(n!=0)
    n/=10;
    ++count;
    printf("number of digits :%d\n",count);
    
    return 0;
}