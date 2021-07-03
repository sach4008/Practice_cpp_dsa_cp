class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len=nums.size();
        
        for(int i=len-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                for(int j=i+1;j<len;j++){
                    if(nums[j]<=nums[i]){
                        swap(nums[i],nums[j-1]);
                        reverse(nums.begin()+i+1,nums.end());
                        return;
                    }
                }
                swap(nums[i],nums[len-1]);
                reverse(nums.begin()+i+1,nums.end());
                return;
            }
        }
        sort(nums.begin(),nums.end());
        return;
    }
};
