class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        
        ans = (int)(sqrt(2*1LL*n + 0.25)-0.5);
        
        return ans;
    }
};