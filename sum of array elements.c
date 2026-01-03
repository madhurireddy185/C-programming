#include <stdio.h>
int main() {
    int size,i,arr[100],sum=0;
    printf("enter array size");
    scanf("%d",&size);
    printf("enter array elements");
    for(i=0; i<size; i++){
    scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++){
    sum=sum+arr[i];
    }
    printf("sum of the array=%d",sum);
    
    return 0;
}