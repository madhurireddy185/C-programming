#include <stdio.h>
int main() {
    int num;
    printf("enter an integer");
    scanf("%d",&num);
    if((num%2==0) || (num%3==0))
    printf("output:alphabet");
    else
    printf("output:not a alphabet");
    return 0;
}