class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,medi=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==0){
                medi=0;
                continue;
            }
            medi++;
            if (medi>max)
                max=medi;
        }
        return max;
    }
};
