class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        
        for(int x:nums) sum+=x;
        
        if((sum<2) || (sum&1)) return false;
        
        sum /= 2;
        
        
        vector<vector<bool>> dp(n+1,vector<bool>(sum+1,false));
        
        dp[0][0] = true;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                dp[i][j] = dp[i-1][j];
                
                if(j>=nums[i-1]){
                    dp[i][j] = (dp[i][j] || dp[i-1][j-nums[i-1]]);
                }
            }
        }
        
        return dp[n][sum];
    }
};

/*
Recursive Solution
class Solution {
    bool helper(vector<int>& nums,int s1,int s2,int i){
        if(i==nums.size()){
            if(s1==s2) return true;
            else return false;
        }
        
        bool var = false;
        
        var = var | helper(nums,s1+nums[i],s2,i+1);
        var = var | helper(nums,s1,s2+nums[i],i+1);
        
        return var;
    }
public:
    bool canPartition(vector<int>& nums) {
        return helper(nums,0,0,0);
    }
};
*/