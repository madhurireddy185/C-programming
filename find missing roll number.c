#include <stdio.h>

void reverseRoute(int stops[], int n) {
    int left = 0;
    int right = n - 1;
    while (left < right) {
        int temp = stops[left];
        stops[left] = stops[right];
        stops[right] = temp;
        left++;
        right--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int route1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    reverseRoute(route1, n1);
    printArray(route1, n1);

    int route2[] = {10, 20, 30};
    int n2 = 3;
    reverseRoute(route2, n2);
    printArray(route2, n2);

    int route3[] = {5, 6, 7, 8};
    int n3 = 4;
    reverseRoute(route3, n3);
    printArray(route3, n3);

    return 0;
}
