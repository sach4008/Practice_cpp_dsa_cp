class Solution {
public:
    //vector<vector<int>> ans;
    void generate(vector<int> &nums,int &len,int &it,vector<int> &res,vector<vector<int>> &ans){
        if(it==len){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[it]);
        int temp=it+1;
        generate(nums,len,temp,res,ans);
        res.pop_back();
        generate(nums,len,temp,res,ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int len=nums.size(),it=0;
        vector<int> res;
        vector<vector<int>> ans;
        generate (nums,len,it,res,ans);
        return ans;
    }
};
