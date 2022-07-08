class Solution {
public:
    int countTexts(string pressedKeys) {
        int mod = 1e9+7;
        int n = pressedKeys.size();
        vector<long> dp(n+1,0);
        dp[0]=1;
        
        
        for(int i=1;i<=n;i++){
            dp[i] += dp[i-1];
            
            if(i-1>0 && pressedKeys[i-1]==pressedKeys[i-2]){
                dp[i] += dp[i-2];
                if(i-2>0 && pressedKeys[i-2]==pressedKeys[i-3]){
                    dp[i] += dp[i-3];
                    if(i-3>0 && pressedKeys[i-3]==pressedKeys[i-4] &&(pressedKeys[i-1]=='9'||pressedKeys[i-1]=='7')){
                        dp[i] += dp[i-4];
                    }
                }
            }
            dp[i] = dp[i]%mod;
        }
        // for(int x:dp)
        //     cout<<x<<" ";
        // cout<<"\n";
        
        return dp[n];
    }
};
