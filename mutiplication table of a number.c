#include <stdio.h>
int main() {
    int n,i;
    printf("enter an integer");
    scanf("%d",&n);
    printf("multiplication table of %d\n",n);
    for(i=1;i<=10;++i)
printf("%d*%d=%d\n",n,n*i);    
    return 0;
}