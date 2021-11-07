class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len=nums.size();
        int i=INT_MIN;
        if(len==1) return true;
        for(int j=0;j<len;j++){
            if((nums[j]+j)>i) i=j+nums[j];
            if(nums[j]==0){
                if(i>j) continue;
                else return false;
            }
            if(i>=len-1) return true;
        }
        return false;
    }
};