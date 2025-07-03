//  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>
#include <climits>  // for INT_MAX
using namespace std;

void maxProfit(int *prices, int n) {
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    // Step 1: Build the best buy array (min price till i-1)
    for (int i = 1; i < n; i++) {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }

    // Step 2: Calculate max profit using bestBuy
    int maxProfit = 0;
    for (int i = 1; i < n; i++) {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    cout << "Maximum Profit: " << maxProfit << endl;
}

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    maxProfit(prices, n);
    return 0;
}
