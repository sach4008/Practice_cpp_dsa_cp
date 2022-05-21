class Solution {
    int helper(int n,vector<int> &v,vector<int>& dp){
        int res = INT_MAX;
        
        for(auto x:v){
            if(n-x < 0) continue;
            if(dp[n-x] == -1) dp[n-x]=helper(n-x,v,dp);
            
            res = min(res,dp[n-x]);
        }
        return res+1;
    }
public:
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        int sq = sqrt(n);
        vector<int> v(sq,0);
        
        for(long long i=1;i<=sq;i++){
            v[i-1] = i*i;
        }
        
        return helper(n,v,dp);
    }
};