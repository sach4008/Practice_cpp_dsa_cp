class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int y = 1,z = 1;
        
        for(int i = n-1;i>=0;i--){
            y = z - nums[i];
            z = max(1,y);
        }
        
        return z;
    }
};