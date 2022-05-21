class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int a=0,b=0,len = nums.size();
        
        for(int i=0;i<len;i++){
            if(nums[i]<nums[a]) a=i;
            if(nums[i]>nums[b]) b=i;
        }
        // cout<<len-min(a,b)<<" "<<max(a,b)+1<<" "<<min(a,b) + 1 + len - max(a,b)<<"\n";
        
        int ans = min(min(len-min(a,b),max(a,b)+1) , min(a,b) + 1 + len - max(a,b));
        
        return ans;
    }
};