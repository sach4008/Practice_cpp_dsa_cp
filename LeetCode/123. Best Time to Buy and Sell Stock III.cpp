class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Preprocessing.
        // For every prefix, max profit using one txn.
        int n = prices.size(), min_so_far;
        if (n == 1) return 0;
        vector<int> max_profit_one(n);
        max_profit_one[0] = 0;
        min_so_far = prices[0];
        for (int i = 1; i < n; i++) {
            // 2 choices
            // Sell at i
            // Sell at a day < i
            max_profit_one[i] = max(max_profit_one[i-1], prices[i] - min_so_far);
            min_so_far = min(min_so_far, prices[i]);
        }
        // Main logic.
        int max_so_far;
        int ans = 0;
        // For n-1
        int pi = max_profit_one[n-2];
        ans = max(ans, pi);
        max_so_far = prices[n-1];
        // For n-2 to 1
        for (int i = n-2; i >= 1; i--) {
            int pi = max_profit_one[i-1] + max_so_far - prices[i];
            ans = max(ans, pi);
            max_so_far = max(max_so_far, prices[i]);
        }
        // For 0.
        pi = max_so_far - prices[0];
        ans = max(ans, pi);
        return ans;
    }
};
