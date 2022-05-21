class Solution {
public:
    // space optimized
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        
        int prev = 0;
        
        if(nums[1]-nums[0] == nums[2]-nums[1]) prev = 1;
        
        int ans = prev;
        
        for(int i=3;i<n;i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2])
                prev++;
            else
                prev = 0;
            
            ans += prev;
        }
        
        return ans;
    }
};



/*
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        
        vector<int> dp(n,0);
        
        if(nums[1]-nums[0] == nums[2]-nums[1]) dp[2] = 1;
        
        int ans = dp[2];
        
        for(int i=3;i<n;i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2])
                dp[i] = dp[i-1] + 1;
            
            ans += dp[i];
        }
        
        return ans;
    }
};

*/