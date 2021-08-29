class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.size();
        int i=0,j=0;
        
        while(i<len && j<len){
            if(i&1){
                if(nums[i]&1){
                    i++;
                }
                else{
                    while((j<len)&&(j<=i || ((nums[j]&1) == 0))){
                        j++;
                    }
                    if(j<len) swap(nums[i],nums[j]);
                }
            }
            else{
                if(nums[i]&1){
                    while((j<len)&&(j<=i || (nums[j]&1))){
                        j++;
                    }
                    if(j<len) swap(nums[i],nums[j]);
                }
                else{
                    i++;
                }
            }
        }
        return nums;
    }
};