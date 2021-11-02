class Solution {
    void helper(vector<vector<int>>& grid,vector<vector<bool> > &vis,int i,int j,int &ans,int &cnt,int steps){
        int a = grid.size(),b = grid[0].size();
        if(i<0 || i>=a) {
            return;
        }
        if(j<0 || j>=b) {
            return;
        }
        if(vis[i][j]){
            return;
        }
        else{
            vis[i][j] = true;
        }
        
        if(grid[i][j] == -1){
            return;
        }
        if(grid[i][j] == 2){
            vis[i][j] = false;
            if(steps == cnt+1){
                ans++;
            }
            return;
        }
        
        helper(grid,vis,i,j+1,ans,cnt,steps+1);
        helper(grid,vis,i,j-1,ans,cnt,steps+1);
        helper(grid,vis,i+1,j,ans,cnt,steps+1);
        helper(grid,vis,i-1,j,ans,cnt,steps+1);
        
        vis[i][j] = false;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int a = grid.size(),b = grid[0].size();
        int c,d,cnt=0;
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(grid[i][j] == 0){
                    cnt++;
                }
                if(grid[i][j] == 1){
                    c=i;
                    d=j;
                }
            }
        }
        
        vector<vector<bool> > vis(a,vector<bool>(b,false));
        
        int ans = 0;
        helper(grid,vis,c,d,ans,cnt,0);
        
        return ans;
    }
};