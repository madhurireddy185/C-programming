#include <stdio.h>
#include <limits.h> 
int main() {
    int n, price;
    int minPrice = INT_MAX; 
    int found = 0; 
    if (scanf("%d",&n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d",&price) != 1) break;
        if (price > 0) {
            if (price < minPrice) {
                minPrice = price;
                found = 1; 
            }
        }
    }
    if (found) {
        printf("%d\n", minPrice);
    } else {
        printf("No positive\n");
    }

    return 0;
}
