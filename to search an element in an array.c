#include <stdio.h>
int main(){
    int array[100],search,c,n;
    int found=0;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter %d integer(s):",n);
    for(c=0;c<n;c++){
    scanf("%d",&array[c]);
    }
    printf("enter the number of search:");
    scanf("%d",&search);
    for (c=0;c<n;c++){
    if(array[c]==search){
        found=1;
        break;
    }
    }
    if(found){
        printf("%d found at location %d.\n",search,c+1);
    }else{
        printf("%d is not presentin array.\n",search);
    }
    
    return 0;
}