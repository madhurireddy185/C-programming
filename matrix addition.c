#include <stdio.h> 
int main() {
    int r, c; 
    int a[100][100], b[100][100], sum[100][100];
    int i, j; 
    printf("Enter the number of rows and columns (e.g., 2 3): ");
    scanf("%d %d", &r, &c); 
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]); 
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j]; 
        }
    }
    printf("\nSum of the two matrices is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]); 
        }
        printf("\n"); 
    }
    return 0; 
}
