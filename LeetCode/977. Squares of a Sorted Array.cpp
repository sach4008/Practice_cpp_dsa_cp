class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int right,left;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0 || i==nums.size()-1){
                right=i;
                left=i-1;
                break;
            }
        }
        while(right<nums.size()&&left>=0){
            int var_left=0,var_right=0;
            var_left=nums[left]*nums[left];
            var_right=nums[right]*nums[right];
            if(var_left>=var_right){
                ans.push_back(var_right);
                right++;
            }
            else{
                ans.push_back(var_left);
                left--;
            }
        }
        while(right<nums.size()){
            ans.push_back(nums[right]*nums[right]);
            right++;
        }
        while(left>=0){
            ans.push_back(nums[left]*nums[left]);
            left--;
        }
        return ans;
    }
};
