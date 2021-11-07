class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        
        vector<int> dp1(n+1,0);
        dp1[1] = nums[0];
        vector<int> dp2(n+1,0);
        
        for(int i=1;i<n-1;i++){
            dp1[i+1] = max(dp1[i],dp1[i-1]+nums[i]);
        }
        for(int i=1;i<n;i++){
            dp2[i+1] = max(dp2[i],dp2[i-1]+nums[i]);
        }
        
        return max(dp1[n-1],dp2[n]);
    }
};


// Wrong solution
/*
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        
        vector<int> dp(n+1,0);
        dp[1] = nums[0];
        
        vector<bool> var(n+1,false);
        var[1] = true;
        
        for(int i=1;i<n-1;i++){
            // dp[i+1] = max(dp[i],dp[i-1]+nums[i]);
            if(dp[i] > dp[i-1]+nums[i]){
                dp[i+1] = dp[i];
                var[i+1] = var[i];
            }
            else if(dp[i] < dp[i-1]+nums[i]){
                dp[i+1] = dp[i-1]+nums[i];
                var[i+1] = var[i-1];
            }
            else{
                dp[i+1] = dp[i];
                var[i+1] = (var[i]&var[i-1]);
            }
        }
        if(var[n-2] == false){
            dp[n] = max(dp[n-1],dp[n-2]+nums[n-1]);
        }
        else{
            dp[n] = max(dp[n-1],nums[n-1]);
        }
        return dp[n];
    }
};
*/