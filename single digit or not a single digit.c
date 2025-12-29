#include <stdio.h>
int main() {
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>=0&&n<=9)
    printf("single digit");
    else
    printf("not a single digit");
    
    return 0;
}