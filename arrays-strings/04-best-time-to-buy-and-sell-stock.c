#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > profit) {
            profit = prices[i] - minPrice;
        }
    }
    return profit;
}

int main() {
    // Test Case 1 (Typical)
    int p1[] = {7, 1, 5, 3, 6, 4};
    printf("Typical: %d (Expected: 5)\n", maxProfit(p1, 6));

    // Test Case 2 (Edge: strictly decreasing prices -> 0 profit)
    int p2[] = {7, 6, 4, 3, 1};
    printf("Edge: %d (Expected: 0)\n", maxProfit(p2, 5));

    return 0;
}