// Not an optimised solution

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if(n<1) return 0;

        vector<vector<int> > dp(n,vector<int>(2,1));

        int ans = 1;

        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){

                if(nums[i]>nums[j]){
                    if(dp[i][0] < dp[j][1]+1){
                        dp[i][0] = dp[j][1]+1;
                    }
                }

                if(nums[i]<nums[j]){
                    if(dp[i][1] < dp[j][0]+1){
                        dp[i][1] = dp[j][0]+1;
                    }
                }
            }
            ans = max(ans,max(dp[i][0],dp[i][1]));
        }
        return ans;
    }
};