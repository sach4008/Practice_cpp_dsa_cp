class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        queue<pair<int,int> > q;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        
        if(!q.empty()) q.push({-1,-1});
        
        int cnt=0;
        bool var=false;
        while(!q.empty()){
            
            pair<int,int> pr = q.front();
            q.pop();
            
            if(pr.first==(-1)){
                if(!q.empty()) q.push({-1,-1});
                
                if(var){
                    cnt++;
                    var=false;
                }
                // continue;
            }
            else{
                if(pr.first+1<row){
                    if(grid[pr.first+1][pr.second]==1){
                        var=true;
                        grid[pr.first+1][pr.second]=2;
                        
                        q.push({pr.first+1,pr.second});
                    }
                }
                if(pr.first-1>=0){
                    if(grid[pr.first-1][pr.second]==1){
                        var=true;
                        grid[pr.first-1][pr.second]=2;
                        
                        q.push({pr.first-1,pr.second});
                    }
                }
                if(pr.second+1<col){
                    if(grid[pr.first][pr.second+1]==1){
                        var=true;
                        grid[pr.first][pr.second+1]=2;
                        
                        q.push({pr.first,pr.second+1});
                    }
                }
                if(pr.second-1>=0){
                    if(grid[pr.first][pr.second-1]==1){
                        var=true;
                        grid[pr.first][pr.second-1]=2;
                        
                        q.push({pr.first,pr.second-1});
                    }
                }
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return cnt;
    }
};