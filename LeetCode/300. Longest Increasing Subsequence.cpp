class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int ans = 1;
        int n = nums.size();
        vector<int> dp(n,0);
        
        dp[0] = 1;
        
        for(int i=1;i<n;i++){
            int tmp = 0;
            for(int j=i-1;j>=0;j--){
                if(nums[i]>nums[j]) tmp = max(tmp,dp[j]);
            }
            dp[i] = tmp+1;
            ans = max(ans,dp[i]);
        }
        
        return ans;
    }
};