#include <stdio.h>
int main() {
    int countPositive(int arr[],int size);
        int count =0;
        for (int i=0;i<size;i++){
        if (arr[i] > 0){
            count++;
        }
    }
    return count;
}
int main(){
    int numbers[]={1,-2,3,-4,5,0};
    int size =sizeof(numbers)/sizeof(numbers[0]);
    int positiveCount=countPositive(numbers,size);
    printf("total positive numbers in the array are:%d\n",positiveCount);

    
    return 0;
}