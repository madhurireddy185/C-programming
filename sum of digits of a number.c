#include <stdio.h>
int main() {
    int number,digit,sum=0;
    printf("enter an number");
    scanf("%d",&number);
    int temp__number=number;
    while(temp__number!=0)
    digit=temp__number % 10;
    sum += digit;
    temp__number/=10;
    printf("sum of digits of %d is %d\n",number,sum);
    
    return 0;
}