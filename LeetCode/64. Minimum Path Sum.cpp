class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
        for(int i=1;i<m;i++){
            grid[i][0] += grid[i-1][0];
        }
        for(int j=1;j<n;j++){
            grid[0][j] += grid[0][j-1];
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                grid[i][j] = min(grid[i-1][j],grid[i][j-1]) + grid[i][j];
            }
        }
        
        return grid[m-1][n-1];
    }
};


// Giving TLE

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         queue<pair<int,pair<int,int> > > q;
        
//         int m = grid.size(), n = grid[0].size(),i,j,tmp;
        
//         int ans = INT_MAX;
        
//         q.push({0,{0,0}});
        
//         while(!q.empty()){
//             i = q.front().second.first;
//             j = q.front().second.second;
//             tmp = q.front().first;
//             q.pop();
            
//             if(i<0 || i>=m || j<0 || j>=n) continue;
            
//             if(i==m-1 && j==n-1) ans = min(tmp+grid[i][j],ans);
            
//             q.push({tmp+grid[i][j], {i+1,j}});
//             q.push({tmp+grid[i][j], {i,j+1}});
//             // q.push({tmp+grid[i][j], {i,j}});
//             // q.push({tmp+grid[i][j], {i,j}});
//         }
        
//         return ans;
//     }
// };