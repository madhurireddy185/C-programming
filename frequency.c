#include <stdio.h>

void findElementFrequencies(int arr[], int n) {
    int freq[n];
    for(int i = 0; i < n; i++) {
        freq[i] = 0; 
    }

    printf("Frequencies of each element:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] == 0) {
            int count = 1; 
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = -1; 
                }
            }
            freq[i] = count;
        }
    }
    for (int i = 0; i < n; i++) {
        if (freq[i] != -1) {
            printf("Element %d: %d times\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int arr[] ={1,2,2,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findElementFrequencies(arr, n);

    return 0;
}
