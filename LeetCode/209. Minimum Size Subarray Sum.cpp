class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(),a=0;
        
        int ans = INT_MAX;
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            while(sum>=target){
                ans = min(ans,i-a+1);
                sum -= nums[a];
                a++;
            }
        }
        
        return (ans == INT_MAX) ? 0:ans;
    }
};