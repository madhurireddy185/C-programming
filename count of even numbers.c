#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if (arr[i]%2!=0){
            count++;
        }
    }
    printf("total odd numbers in the array:%d\n",count);

    
    return 0;
}