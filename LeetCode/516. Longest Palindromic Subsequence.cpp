class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int len = s.length();
        
        vector<vector<int>> dp(len+1,vector<int>(len+1,0));
        
        for(int i = 1;i<=len;i++){
            for(int j = 1;j<=len;j++){
                if(s[i-1] == s[len-j]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[len][len];
    }
};