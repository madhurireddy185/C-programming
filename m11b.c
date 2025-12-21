#include <stdio.h>
int main() {
int s;
scanf("%d",&s);
if(s>=20000)
s+=2000;
else
s+=1000;
printf("%d",s);
     return 0;
}