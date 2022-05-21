class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<long long> dp(n+1);
        dp[0]=1;
        dp[1]=1;
        int i = 1, j = 1, k = 1, a = 2;
        
        while(a<=n){
            dp[a] = min(2*dp[i],min(3*dp[j],5*dp[k]));
            
            if(dp[a]==2*dp[i]) i++;
            
            if(dp[a]==3*dp[j]) j++;
            
            if(dp[a]==5*dp[k]) k++;
            
            a++;
        }
        
        return dp[n];
    }
};