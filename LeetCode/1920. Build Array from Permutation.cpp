class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        int len=nums.size();
        vector<int> ans(len,0);
        // for(int i=0;i<len;i++) nums[i]+=len;
        
        for(int i=0;i<len;i++){
            ans[i]=nums[nums[i]];
        }
        
        // for(int i=0;i<len;i++) nums[i]%=len;
        
        return ans;
    }
};
