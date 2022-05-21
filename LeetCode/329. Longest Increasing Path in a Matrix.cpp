class Solution {
    int n,m;
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n = matrix.size(), m = matrix[0].size();
        
        vector<vector<int>> v(n,vector<int>(m,0));
        
        int ans = INT_MIN;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j] = dfs(matrix,v,i,j);
                ans = max(ans,v[i][j]);
            }
        }
        // print(v);
        
        return ans;
    }
    
    int dfs(vector<vector<int>>& matrix,vector<vector<int>>& v, int i ,int j){
        if(v[i][j]!=0)
            return v[i][j];
        
        int a = 0;
        
        if(i-1>=0 && matrix[i][j]<matrix[i-1][j]){
            v[i-1][j] = dfs(matrix,v,i-1,j);
            a = max(a,v[i-1][j]);
        }
        if(i+1<n && matrix[i][j]<matrix[i+1][j]){
            v[i+1][j] = dfs(matrix,v,i+1,j);
            a = max(a,v[i+1][j]);
        }
        if(j-1>=0 && matrix[i][j]<matrix[i][j-1]){
            v[i][j-1] = dfs(matrix,v,i,j-1);
            a = max(a,v[i][j-1]);
        }
        if(j+1<m && matrix[i][j]<matrix[i][j+1]){
            v[i][j+1] = dfs(matrix,v,i,j+1);
            a = max(a,v[i][j+1]);
        }
        return a+1;
    }
    
    
    // void print(vector<vector<int>>& v){
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             cout<<v[i][j]<<" ";
    //         }
    //         cout<<"\n";
    //     }
    //     cout<<"\n\n";
    // }
};
