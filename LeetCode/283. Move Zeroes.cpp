class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        for(int i=nums.size()-1;i>=0;i--){
            int j=i;
            while(j>=0){
                if(nums[j]==0){
                    while(j<i){
                        int temp=nums[j+1];
                        nums[j+1]=nums[j];
                        nums[j]=temp;
                        j++;
                    }
                    break;
                }
                j--;
            }
        }
        return;
    }
};