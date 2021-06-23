class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN,sum=0;
        int i=0,len=nums.size();
        
        for(int i=0;i<len;i++){
            sum+=nums[i];
            ans=max(ans,sum);
            sum=max(sum,0);
        }
        return ans;
    }
};
