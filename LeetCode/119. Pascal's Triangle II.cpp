class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        
        // if(rowIndex==0) return {1};
        ans.push_back({1});
        
        for(int i=1;i<=rowIndex;i++){
            vector<int> tmp(i+1,1);
            for(int j=1;j<i;j++){
                tmp[j] = ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(tmp);
        }
        
        return ans[rowIndex];
    }
};