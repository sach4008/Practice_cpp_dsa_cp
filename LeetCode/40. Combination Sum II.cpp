class Solution {
public:
    
    void generate(vector<int> &nums,int &len,int it,vector<int> &res,vector<vector<int>> &ans,int sum,int target,set<vector<int>> &rs){
        if(sum>target) return;
        else if(sum==target){
            sort(res.begin(),res.end());
            if(rs.find(res)==rs.end()){
                ans.push_back(res);
                rs.insert(res);
            }
            return;
        }
        else if(it==len) return;
        
        res.push_back(nums[it]);
        generate(nums,len,it+1,res,ans,sum+nums[it],target,rs);
        res.pop_back();
        generate(nums,len,it+1,res,ans,sum,target,rs);
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int len=candidates.size(),it=0;
        vector<int> res;
        vector<vector<int>> ans;
        set<vector<int>> rs;
        sort(candidates.begin(),candidates.end());
        generate (candidates,len,it,res,ans,0,target,rs);
        return ans;
    }
};
