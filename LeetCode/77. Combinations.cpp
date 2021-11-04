class Solution {
    void helper(vector<vector<int>> &ans,vector<int> &tmp,int k,int n,int m){
        if(tmp.size() == k){
            ans.push_back(tmp);
            return;
        }
        if(m>n) return;
        
        tmp.push_back(m);
        helper(ans,tmp,k,n,m+1);
        tmp.pop_back();
        helper(ans,tmp,k,n,m+1);
        
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> tmp;
        
        helper(ans,tmp,k,n,1);
        
        return ans;
        
    }
};