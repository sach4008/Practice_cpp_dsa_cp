class Solution {
    void print(vector<vector<int>>& grid){
        int n=grid.size(),m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<grid[i][j]<<" ";
                    
            }
            cout<<"\n";
        }
        
        cout<<"\n\n";
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> q;
        
        int n=grid.size(),m=grid[0].size();
        
        // print(grid);
        
        for(int i=0;i<n;i++){
            if(grid[i][0]){
                q.push({i,0});
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][m-1]){
                q.push({i,m-1});
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]){
                q.push({0,i});
            }
        }
        for(int i=0;i<m;i++){
            if(grid[n-1][i]){
                q.push({n-1,i});
            }
        }
        
        while(!q.empty()){
            pair<int,int> pr = q.front();
            q.pop();
            
            if(pr.first<0||pr.first>=n||pr.second<0||pr.second>=m)
                continue;
            
            if(grid[pr.first][pr.second]==1){
                grid[pr.first][pr.second]=0;
                q.push({pr.first+1,pr.second});
                q.push({pr.first-1,pr.second});
                q.push({pr.first,pr.second+1});
                q.push({pr.first,pr.second-1});
            }
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j])
                    ans++;
            }
        }
        
        // print(grid);
        
        return ans;
    }
};
