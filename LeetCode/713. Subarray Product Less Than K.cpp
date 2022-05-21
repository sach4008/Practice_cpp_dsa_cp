class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k<=1) return 0;
        
        int tmp = 1,ans = 0,a = 0;
        
        for(int i=0;i<n;i++){
            tmp *= nums[i];
            
            while(tmp >= k){
                tmp /= nums[a];
                a++;
            }
            
            ans += (i-a+1);
        }
        
        return ans;
    }
};