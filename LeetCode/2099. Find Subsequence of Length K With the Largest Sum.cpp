class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        unordered_map<int,int> res;
        
        for(int i=n-1;i>=n-k;i--) {
            if(res.find(tmp[i]) != res.end()){
                res[tmp[i]]++;
            }
            else res[tmp[i]]=1;
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            if((res.find(nums[i]) != res.end()) && res[nums[i]]>0){
                ans.push_back(nums[i]);
                res[nums[i]]--;
            }
        }
        
        return ans;
    }
};



// class Solution {
//     vector<int> ans;
//     int mSum,n;
    
//     void helper(vector<int> &nums,int it,vector<int>& res,int sum,int k){
        
//         if(res.size()==k && sum>mSum){
//             ans = res;
//             mSum = sum;
//             return;
//         }
//         else if(it>=n || res.size()>=k) return;
        
//         res.push_back(nums[it]);
//         helper(nums,it+1,res,sum+nums[it],k);
//         res.pop_back();
//         while(it!=n-1 && nums[it]==nums[it+1]) it++;
//         helper(nums,it+1,res,sum,k);
//     }
// public:
//     vector<int> maxSubsequence(vector<int>& nums, int k) {
//         n = nums.size(), mSum = INT_MIN;
        
//         sort(nums.begin(), nums.end());
//         vector<int> res;
        
//         helper(nums,0,res,0,k);
        
//         return ans;
//     }
// };