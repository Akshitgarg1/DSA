#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to determine the maximum profit by cutting the rod
int rodCutting(vector<int>& prices, int n) {
    // Create a dp array to store the maximum profit for each length
    vector<int> dp(n + 1, 0);

    // Build the dp array
    for (int i = 1; i <= n; ++i) {
        int maxProfit = -1;
        for (int j = 1; j <= i; ++j) {
            maxProfit = max(maxProfit, prices[j - 1] + dp[i - j]);
        }
        dp[i] = maxProfit;
    }

    return dp[n];
}

int main() {
    // Example prices for rod lengths 1 to 8
    vector<int> prices = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = prices.size();  // The length of the rod is the length of the prices array

    cout << "Maximum profit for a rod of length " << n << ": " << rodCutting(prices, n) << endl;

    return 0;
}