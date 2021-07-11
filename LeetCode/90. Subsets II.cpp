class Solution {
public:
    
    void generate(vector<int> &nums,int &len,int it,vector<int> &res,vector<vector<int>> &ans,set<vector<int>> &rs){
        if(it==len){
            sort(res.begin(),res.end());
            if(rs.find(res)==rs.end()){
                ans.push_back(res);
                rs.insert(res);
            }
            return;
        }
        generate(nums,len,it+1,res,ans,rs);
        res.push_back(nums[it]);
        generate(nums,len,it+1,res,ans,rs);
        res.pop_back();
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int len=nums.size(),it=0;
        vector<int> res;
        set<vector<int>> rs;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        generate (nums,len,it,res,ans,rs);
        return ans;
    }
};
