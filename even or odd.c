#include <stdio.h>
int main() {
int a,b;
printf("enter two different values\n");
scanf("%d%d",&a,&b);
if(a>b)
printf("%d is largest\n",b);
else if(b>a)
printf("%d is largest\n",b);
else
printf("both are equal\n");

     return 0;
}