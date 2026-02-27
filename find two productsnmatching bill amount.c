#include <stdio.h>
void findPair(int prices[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (prices[i] + prices[j] == target) {
                printf("%d %d\n", prices[i], prices[j]);
                return; 
            }
        }
    }
    printf("No pair\n");
}
int main() {
    int n, target;
    if (scanf("%d", &n) != 1) return 0;
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    scanf("%d", &target);
    findPair(prices, n, target);
    return 0;
}
