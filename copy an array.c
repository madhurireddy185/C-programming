#include <stdio.h>
int main() {
    int source[]={1,2,3,4,5};
    int n=sizeof(source)/sizeof(source[0]);
    int destination;
    int i;
    for (i=0;i<n;i++){
        destination[i] = source[i];
    }
    printf("Destination Array:\\n");
    for (i=0;i<n;i++){
        printf("%d",destination[i]);
    }

    return 0;
}