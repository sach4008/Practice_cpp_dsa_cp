class Solution {
    // int m,n;
    // int ans = 0;
//     void helper(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<bool> > &vis){
//         if(i<0 || i>=m) return;
//         if(j<0 || j>=n) return;
//         if(obstacleGrid[i][j] == 1) return;
        
//         if(i == m-1 && j == n-1){
//             ans++;
//             return;
//         }
//         if(vis[i][j]){
//             return;
//         }
//         else vis[i][j] = true;
        
//         helper(obstacleGrid,i+1,j,vis);
//         helper(obstacleGrid,i,j+1,vis);
        
//         vis[i][j] = false;
        
//         return;
//     }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        // vector<vector<bool> > vis(m,vector<bool>(n,false));
        // ans = 0;
        // // helper call
        // helper(obstacleGrid,0,0,vis);
        // return ans;
        
        vector<vector<int> > dp(m+1,vector<int>(n+1,0));
        dp[0][1]=1;
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(obstacleGrid[i-1][j-1] == 0){
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[m][n];
    }
};