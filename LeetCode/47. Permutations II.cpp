class Solution {
public:
    
    void func(vector<int>& nums,set<vector<int>> &ans,int j){
        if(j==nums.size()){
            ans.insert(nums);
            return;
        }
        
        for(int i=j;i<nums.size();i++){
            // if(nums[i]==nums[j]){
                swap(nums[i],nums[j]);
                func(nums,ans,j+1);
                swap(nums[i],nums[j]);
            // }
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        
        func(nums,ans,0);
        
        vector<vector<int>> res;
        for(auto x: ans) res.push_back(x);
        
        return res;
    }
};




// class Solution {
// public:
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         set<vector<int>> ans;
//         vector<int> res;
//         vector<bool> var(nums.size(),true);
//         func(nums,ans,res,var);
        
//         vector<vector<int>> ret;
//         for(auto x: ans){
//             ret.push_back(x);
//         }
//         return ret;
//     }
    
//     void func(vector<int>& nums,set<vector<int>> &ans,vector<int> &res,vector<bool> &var){
        
//         if(res.size()==nums.size()){
//             ans.insert(res);
//             return;
//         }
        
//         for(int i=0;i<nums.size();i++){
//             if(var[i]){
//                 res.push_back(nums[i]);
//                 var[i]=false;
//                 func(nums,ans,res,var);
//                 res.pop_back();
//                 var[i]=true;
//             }
//         }
//     }
// };
