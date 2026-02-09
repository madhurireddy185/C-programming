#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
    } else {
        switch (marks / 10) {
            case 1:
            case 2:
                printf("Grade: Fail\n");
                break;
            case 3:
                printf("Grade: F\n");
                break;
            case 4:
                printf("Grade: E\n");
                break;
            case 5:
                printf("Grade: D\n");
                break;
            case 6:
                printf("Grade: C\n");
                break;
            case 7:
                printf("Grade: B\n");
                break;
            case 8:
                if (marks >= 30) printf("Grade: Supplementary\n");
                else printf("Grade: A\n");
                break;
            default:
                printf("Grade: A\n");
                break;
        }
    }
    return 0;
}
