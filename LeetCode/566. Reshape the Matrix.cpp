class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int res = r*c;
        
        int m = mat.size();
        int n = mat[0].size();
        
        if(res != m*n){
            return mat;
        }
        
        vector<vector<int>> ans(r,vector<int>(c));
        
        for(int i=0;i<res;i++){
            int x1 = i/n;
            int y1 = i%n;
            
            int x2 = i/c;
            int y2 = i%c;
            
            ans[x2][y2] = mat[x1][y1];
        }
        
        return ans;
    }
};