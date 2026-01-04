#include <stdio.h>
int main() {
    int i,maximum,size;
    printf("enter size of array elements");
    scanf("%d",&size);
    int array[size];
    printf("enter %d elements of array:\n",size);
    for (int i=0;i<size;i++){
        printf("element -%d:",i);
    }
    scanf("%d",&array[i]);
    maximum=array[0];
    for (i=1;i<size;i++)
    {
        if (array[i]>maximum)
    
    maximum=array[i];
    }
    printf("maximum element is present at location %d and its value is %d.\n",maximum);

    
    return 0;
}