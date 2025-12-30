#include <stdio.h>
int main() {
int N,i;
printf("enter a positive integer");
scanf("%d",&N);
printf("odd numbers up to %d");
for (i=1;i<=N;++i)
if(i%2!=0)
printf("%d",i);
    
    return 0;
}