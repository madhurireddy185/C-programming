#include <stdio.h>
#include <stdlib.h>
void print_unique_ids(int arr[], int n) {
    printf("Unique IDs: ");
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break; 
            }
        }
        if (!is_duplicate) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int ids1[] = {1, 2, 2, 3, 1, 4};
    int n1 = sizeof(ids1) / sizeof(ids1[0]);
    printf("Input: ");
    for(int i = 0; i < n1; i++) printf("%d ", ids1[i]);
    printf("\n");
    print_unique_ids(ids1, n1);
    printf("---\n");
    int ids2[] = {5, 5, 5, 5};
    int n2 = sizeof(ids2) / sizeof(ids2[0]);
    printf("Input: ");
    for(int i = 0; i < n2; i++) printf("%d ", ids2[i]);
    printf("\n");
    print_unique_ids(ids2, n2); 
    printf("---\n");
    int ids3[] = {9, 8, 7, 8, 9};
    int n3 = sizeof(ids3) / sizeof(ids3[0]);
    printf("Input: ");
    for(int i = 0; i < n3; i++) printf("%d ", ids3[i]);
    printf("\n");
    print_unique_ids(ids3, n3); 

    return 0;
}
