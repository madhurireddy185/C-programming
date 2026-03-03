#include <stdio.h>
#include <stdbool.h>
int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) return -1;
    int matrix[R][C];
    int totalElements = R * C;
    
    int flatArray[totalElements];
    int k = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
            flatArray[k++] = matrix[i][j];
        }
    }
    int firstRepeated = -1;
    bool found = false;
    for (int i = 0; i < totalElements; i++) {
        for (int j = 0; j < i; j++) {
            if (flatArray[i] == flatArray[j]) {
                firstRepeated = flatArray[i];
                found = true;
                break;
            }
        }
        if (found) break; 
    }

    printf("%d", firstRepeated);

    return 0;
}
