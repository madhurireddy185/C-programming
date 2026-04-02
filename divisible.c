#include <stdio.h>
int main() {
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if((num%5)==0)
    printf("output:divisible\n");
    else
    printf("output:not divisible\n");
    
    return 0;
}