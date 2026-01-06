#include <stdio.h>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int size = sizeof(source) / sizeof(source[0]);
    int destination[size];
    memcpy(destination ,source,sizeof(source));

    printf("Elements of the destination array using memcpy: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
