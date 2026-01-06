#include <stdio.h>

int count_negative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[] = {1, -2, 3, -4, 5, -6, 7, -8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int negative_count = count_negative(numbers, size);
    printf("Number of negative numbers in the array: %d\n", negative_count);

    return 0;
}
