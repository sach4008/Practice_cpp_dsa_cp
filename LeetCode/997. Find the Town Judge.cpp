class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int> > dp(n+1,vector<int>(2,0));
        
        
        for(auto x:trust){
            dp[x[0]][0]++;
            dp[x[1]][1]++;
        }
        
        for(int i=1;i<=n;i++){
            if(dp[i][0] == 0 && dp[i][1] == n-1) return i;
        }
        
        return -1;
        
    }
};