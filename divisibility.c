#include <stdio.h>
int main() {
    int num;
    printf("enter any number");
    scanf("%d",&num);
    printf("enter an integer");
    if(num%11==0)
    printf("output:divisible\n");
    else
    printf("output:not divisible\n");
    
    return 0;
}