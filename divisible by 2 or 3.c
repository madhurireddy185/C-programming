#include <stdio.h>
int main() {
    int num;
    printf("enter the integer");
    scanf("%d",&num);
    if(num%2==0 || num%3==0)
    printf("yes");
    else
    printf("no");
    
    return 0;
}