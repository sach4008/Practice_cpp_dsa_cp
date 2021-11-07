class Solution {
    vector<vector<int>> ans;
    
    void helper(int k,int n,int i,int sum,vector<int>& tmp){
        if(k==0 && sum == n){
            ans.push_back(tmp);
            return;
        }
        if(sum >= n || k==0 || i>9) return;
        
        tmp.push_back(i);
        helper(k-1,n,i+1,sum+i,tmp);
        tmp.pop_back();
        helper(k,n,i+1,sum,tmp);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> tmp;
        
        helper(k,n,1,0,tmp);
        
        return ans;
    }
};