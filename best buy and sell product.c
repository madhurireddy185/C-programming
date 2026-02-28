#include <stdio.h>
#include <limits.h>
int maxProfit(int prices[], int n) {
    if (n <= 1) return 0;
    int min_price = prices[0];
    int max_diff = INT_MIN;
    for (int i = 1; i < n; i++) {
        int current_diff = prices[i] - min_price;
        if (current_diff > max_diff) {
            max_diff = current_diff;
        }
        if (prices[i] < min_price) {
            min_price = prices[i];
        }
    }
    return max_diff;
}
int main() {
    int p1[] = {7, 1, 5, 3, 6, 4};
    printf("Max Profit 1: %d\n", maxProfit(p1, 6));
    int p2[] = {9, 8, 7, 6};
    printf("Max Profit 2: %d\n", maxProfit(p2, 4));
    int p3[] = {1, 2, 3, 4, 5};
    printf("Max Profit 3: %d\n", maxProfit(p3, 5));

    return 0;
}
