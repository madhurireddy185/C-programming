#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    int temp[n];
    int j = 0; 

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i+1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n-1];
    int unique_count = 0;
    
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int k = 0; k < unique_count; k++) {
            if (arr[i] == arr[k]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            arr[unique_count++] = arr[i];
        }
    }
    
    return unique_count;
}

int main() {
    int array[] = {1 ,2 ,2, 3, 4 ,4};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    int new_size = removeDuplicates(array, n);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
