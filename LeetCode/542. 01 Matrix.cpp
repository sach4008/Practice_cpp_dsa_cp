class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        
        vector<vector<int>> ans(m,vector<int>(n,m+n+1));
        queue<pair<int,int>> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()){
            int a = q.front().first, b = q.front().second;
            q.pop();
            
            if(a+1<m){
                if(ans[a][b]+1 < ans[a+1][b]){
                    ans[a+1][b] = ans[a][b]+1;
                    q.push({a+1,b});
                }
            }
            if(a-1>=0){
                if(ans[a][b]+1 < ans[a-1][b]){
                    ans[a-1][b] = ans[a][b]+1;
                    q.push({a-1,b});
                }
            }
            if(b+1<n){
                if(ans[a][b]+1 < ans[a][b+1]){
                    ans[a][b+1] = ans[a][b]+1;
                    q.push({a,b+1});
                }
            }
            if(b-1>=0){
                if(ans[a][b]+1 < ans[a][b-1]){
                    ans[a][b-1] = ans[a][b]+1;
                    q.push({a,b-1});
                }
            }
        }
        
        return ans;
    }
};