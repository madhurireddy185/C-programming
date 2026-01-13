#include <stdio.h>
int main() {
    int r1, c1, r2, c2; 
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int i, j, k; 
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2); 
    if (c1 != r2) {
        printf("Matrix multiplication is not possible!\n");
        printf("Columns of first matrix must equal rows of second matrix.\n");
        return 1; 
    }
    printf("\nEnter elements for the first matrix (%dx%d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements for the second matrix (%dx%d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++) { 
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) { 
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("\nResultant Matrix (Product):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n"); 
    }
    return 0; 
}
