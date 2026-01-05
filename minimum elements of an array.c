#include <stdio.h>
int main() {
int array[5];
int n = sizeof(array)/sizeof(array[5]);
int min=array[5];
for(int i=1;i<n;i++){
if (array[i]<min){
min=array[i];
}
}
printf("the minimum element is %d\n",min);
    
    return 0;
}