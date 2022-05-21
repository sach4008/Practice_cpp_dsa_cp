class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len=nums.size(), c1 = INT_MAX, c2 = INT_MAX;
        for(int i=0;i<len;i++){
            int x=nums[i];
            if (x <= c1) {
                c1 = x;           
            }
            else if (x <= c2) { 
                c2 = x;           
            }
            else {              
                return true;      
            }
        }
        return false;
    }
};