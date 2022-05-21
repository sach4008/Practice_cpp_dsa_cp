class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for(int &x:nums){
            if(nums[abs(x)-1]<0){
                ans.push_back(abs(x));
            }
            else{
                nums[abs(x)-1] *= -1;
            }
        }
        
        return ans;
    }
};