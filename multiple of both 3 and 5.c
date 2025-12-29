#include <stdio.h>
int main() {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if((num%3==0)&&(num%5==0))
    printf("yes");
    else
    printf("no");
    
    return 0;
}