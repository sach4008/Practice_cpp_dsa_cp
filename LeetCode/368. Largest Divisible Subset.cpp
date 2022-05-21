class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        int tmp = 0;
        vector<int> ans;
        vector<vector<int> > dp(n,vector<int>(2,1));
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n;i++){
            int res = 0;
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j] == 0 && dp[j][0] > res){
                    dp[i][0] = dp[j][0]+1;
                    dp[i][1] = j;
                    res = dp[j][0];
                }
            }
            
            if(dp[i][0]>dp[tmp][0]) tmp = i;
        }
        
        int a = dp[tmp][0];
        
        // cout<<a<<tmp<<"\n";
        
        while(ans.size()<a){
            ans.push_back(nums[tmp]);
            tmp = dp[tmp][1];
        }
        
        return ans;
    }
};




/// following solution works only for subsequence

// class Solution {
//     bool check(int i,deque<int> &wind){
//         if(wind.empty()){
//             return true;
//         }
//         for(int x:wind){
//             if( x%i==0 || i%x==0){
//                 continue;
//             }
//             else{
//                 return false;
//             }
//         }
//         return true;
//     }
//     void copyHelper(vector<int> &ans,deque<int> &wind){
//         ans.clear();
        
//         for(int x:wind){
//             ans.push_back(x);
//         }
//     }
// public:
//     vector<int> largestDivisibleSubset(vector<int>& nums) {
//         vector<int> ans;
        
//         int len = nums.size();
        
//         deque<int> wind;
        
//         for(int i=0;i<len;i++){
//             if(check(nums[i],wind)){
//                 wind.push_back(nums[i]);
//             }
//             else{
//                 if(ans.size()<wind.size()){
//                     copyHelper(ans,wind);
//                 }
//                 while(!check(nums[i],wind)){
//                     wind.pop_front();
//                 }
//                 wind.push_back(nums[i]);
//             }
//         }
//         if(ans.size()<wind.size()){
//             copyHelper(ans,wind);
//         }
//         return ans;
//     }
// };