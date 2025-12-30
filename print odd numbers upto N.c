#include <stdio.h>
int main() {
    int N,i;
    printf("enter a positive integer N:");
    scanf("%d",&N);
printf("odd numbers upto %d ",N);
for(i=1;i<=N;i+=2)
printf("%d",i);
    
    return 0;
}