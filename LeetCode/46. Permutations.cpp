class Solution {
public:
    
    void func(vector<int>& nums,vector<vector<int>> &ans,int j){
        if(j==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=j;i<nums.size();i++){
            swap(nums[i],nums[j]);
            func(nums,ans,j+1);
            swap(nums[i],nums[j]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        func(nums,ans,0);
        
        return ans;
    }
};


// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> res;
//         vector<bool> var(nums.size(),true);
//         func(nums,ans,res,var);
        
//         return ans;
//     }
    
//     void func(vector<int>& nums,vector<vector<int>> &ans,vector<int> &res,vector<bool> &var){
        
//         if(res.size()==nums.size()){
//             ans.push_back(res);
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
