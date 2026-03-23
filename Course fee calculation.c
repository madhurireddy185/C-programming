#include <stdio.h>
#include <ctype.h> 
int main() {
    int mode;
    char category;
    int fee = 0;
    printf("Enter Course Mode (1-Online, 2-Offline): ");
    scanf("%d", &mode);
    printf("Enter Student Category (R-Regular, S-Scholarship): ");
    scanf(" %c", &category);
    category = toupper(category); 
    switch (mode) {
        case 1: 
            switch (category) {
                case 'R':
                    fee = 5000;
                    break;
                case 'S':
                    fee = 3000;
                    break;
                default:
                    printf("Invalid Category\n");
                    return 1;
            }
            break;     
        case 2: 
            switch (category) {
                case 'R':
                    fee = 9000;
                    break;
                case 'S':
                    fee = 7000;
                    break;
                default:
                    printf("Invalid Category\n");
                    return 1;
            }
            break;
        default:
            printf("Invalid Mode\n");
            return 1;
    }
    printf("Fee: ₹%d\n", fee);
    return 0;
}
