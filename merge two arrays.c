#include <stdio.h>
int main() {
    int arr1[50], arr2[50], merged[100];
    int size1, size2, i, k;
    printf("Enter number of elements in the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements: \n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i]; 
    }
    k = i; 
    printf("Enter number of elements in the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements: \n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
        merged[k] = arr2[i]; 
        k++;
    }
    printf("\nThe merged array is: \n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
