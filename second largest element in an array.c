#include <stdio.h>
#include <limits.h>

void findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Error: The array must contain at least two elements.\n");
        return;
    }
    int largest = INT_MIN, second_largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if (second_largest == INT_MIN) {
        printf("Error: All elements in the array are the same, or no second largest found.\n");
    } else {
        printf("The second largest element in the array is: %d\n", second_largest);
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    findSecondLargest(arr, n);
    int arr2[] = {10, 10, 10, 5, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\nGiven array 2: ");
    for(int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    findSecondLargest(arr2, n2);
    
    return 0;
}
