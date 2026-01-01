#include <stdio.h>
int main() {
    int n,i;
    printf("enter a starting number (n):");
    scanf("%d",&n);
    printf("numbers from %d to 1 are:",n);
    for (i=n; i>=1; i--)
    printf("%d",i);
    
    return 0;
}