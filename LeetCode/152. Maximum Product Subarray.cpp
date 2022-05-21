class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int ans = INT_MIN,a = 1,b = 1;
        
        for(int i=0;i<n;i++){
            a *= nums[i];
            b *= nums[i];
            
            if(nums[i]==0){
                ans = max(0,ans);
                a=1;
                b=1;
            }
            else{
                int tmp = a;
                a = max(max(a,b),nums[i]);
                b = min(min(tmp,b),nums[i]);
                ans = max(ans,a);
            }
        }
        
        return ans;
    }
};