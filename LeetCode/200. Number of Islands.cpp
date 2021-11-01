class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int a = grid.size();
        int b = grid[0].size();
        int c=0,d=0,cnt=0;
        queue<pair<int,int> > q;
        
        vector<vector<bool> > vis(a,vector<bool> (b,false));
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                
                if(grid[i][j] == '1' && !vis[i][j]){
                    
                    cnt++;
                    q.push({i,j});
                    while(!q.empty()){
            
                        c = q.front().first;
                        d = q.front().second;
                        q.pop();
                        if(vis[c][d]){
                            continue;
                        }
                        vis[c][d] = true;
                        if(d+1 < b && grid[c][d+1] == '1' && !vis[c][d+1]){
                            q.push({c,d+1});
                        }
                        if(d-1 >= 0 && grid[c][d-1] == '1' && !vis[c][d-1]){
                            q.push({c,d-1});
                        }
                        if(c+1 < a && grid[c+1][d] == '1' && !vis[c+1][d]){
                            q.push({c+1,d});
                        }
                        if(c-1 >= 0 && grid[c-1][d] == '1' && !vis[c-1][d]){
                            q.push({c-1,d});
                        }
                    }
                }
            }
        }
        return cnt;
    }
};