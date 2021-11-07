class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int m=triangle.size();
        int ans = INT_MAX;
        for(int i=1;i<m;i++){
            int n=triangle[i].size();
            for(int j=0;j<n;j++){
                if(j>=triangle[i-1].size()){
                    triangle[i][j] += triangle[i-1][j-1];
                    // continue;
                }
                else if(j-1 < 0){
                    triangle[i][j] += triangle[i-1][j];
                    // continue;
                }
                else {
                    triangle[i][j] += min(triangle[i-1][j],triangle[i-1][j-1]);
                }
            }
        }
        
        for(auto x:triangle[m-1]){
            ans = min(ans,x);
        }
        
        return ans;
    }
};