#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<=0)
    return 0;
    int first=1;
    int second=2;
    printf("%d",first);
    if(n>=2)
    printf("%d",second);
    for(int i=3;i<=n;i++){
    int next = first+second;
    printf("%d",next);
    first=second;
    second=next;

    } 
    return 0;
}