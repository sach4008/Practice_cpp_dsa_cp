class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int pm = 0,m=grid.size(),n=grid[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) continue;
                
                if(i-1<0 || grid[i-1][j]==0) pm++;
                if(i+1>=m || grid[i+1][j]==0) pm++;
                if(j-1<0 || grid[i][j-1]==0) pm++;
                if(j+1>=n || grid[i][j+1]==0) pm++;
            }
        }
        
        return pm;
    }
};